
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct repaper_epd {int partial; int cleared; scalar_t__* current_frame; scalar_t__ pre_border_byte; int factored_stage_time; int enabled; } ;
struct drm_rect {int x2; int y2; scalar_t__ y1; scalar_t__ x1; } ;
struct TYPE_3__ {struct dma_buf_attachment* import_attach; } ;
struct drm_gem_cma_object {int vaddr; TYPE_1__ base; } ;
struct TYPE_4__ {int id; } ;
struct drm_framebuffer {int width; int height; TYPE_2__ base; int dev; } ;
struct dma_buf_attachment {int dmabuf; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (int) ;
 struct drm_gem_cma_object* FUNC_5 (struct drm_framebuffer*,int ) ;
 int FUNC_6 (scalar_t__*,int ,struct drm_framebuffer*,struct drm_rect*) ;
 struct repaper_epd* FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__*) ;
 scalar_t__* FUNC_9 (int,int,int ) ;
 int FUNC_10 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_11 (struct repaper_epd*,scalar_t__*,scalar_t__*,int ) ;
 int FUNC_12 (struct repaper_epd*,int,int ) ;
 int FUNC_13 (struct repaper_epd*) ;
 int FUNC_14 (scalar_t__*,int,int) ;

__attribute__((used)) static int FUNC_15(struct drm_framebuffer *VAR_8)
{
 struct drm_gem_cma_object *VAR_9 = FUNC_5(VAR_8, 0);
 struct dma_buf_attachment *VAR_10 = VAR_9->base.import_attach;
 struct repaper_epd *VAR_11 = FUNC_7(VAR_8->dev);
 struct drm_rect VAR_12;
 int VAR_13, VAR_14 = 0;
 u8 *VAR_15 = ((void*)0);

 if (!VAR_11->enabled)
  return 0;

 if (!FUNC_3(VAR_8->dev, &VAR_13))
  return -VAR_1;


 VAR_12.x1 = 0;
 VAR_12.x2 = VAR_8->width;
 VAR_12.y1 = 0;
 VAR_12.y2 = VAR_8->height;

 FUNC_13(VAR_11);

 FUNC_0("Flushing [FB:%d] st=%ums\n", VAR_8->base.id,
    VAR_11->factored_stage_time);

 VAR_15 = FUNC_9(VAR_8->width, VAR_8->height, VAR_3);
 if (!VAR_15) {
  VAR_14 = -VAR_2;
  goto out_exit;
 }

 if (VAR_10) {
  VAR_14 = FUNC_1(VAR_10->dmabuf,
            VAR_0);
  if (VAR_14)
   goto out_free;
 }

 FUNC_6(VAR_15, VAR_9->vaddr, VAR_8, &VAR_12);

 if (VAR_10) {
  VAR_14 = FUNC_2(VAR_10->dmabuf,
          VAR_0);
  if (VAR_14)
   goto out_free;
 }

 FUNC_14(VAR_15, VAR_8->width, VAR_8->height);

 if (VAR_11->partial) {
  FUNC_11(VAR_11, VAR_15, VAR_11->current_frame,
       VAR_6);
 } else if (VAR_11->cleared) {
  FUNC_11(VAR_11, VAR_11->current_frame, ((void*)0),
       VAR_4);
  FUNC_11(VAR_11, VAR_11->current_frame, ((void*)0),
       VAR_7);
  FUNC_11(VAR_11, VAR_15, ((void*)0), VAR_5);
  FUNC_11(VAR_11, VAR_15, ((void*)0), VAR_6);

  VAR_11->partial = 1;
 } else {

  FUNC_12(VAR_11, 0xff, VAR_4);
  FUNC_12(VAR_11, 0xff, VAR_7);
  FUNC_12(VAR_11, 0xaa, VAR_5);
  FUNC_12(VAR_11, 0xaa, VAR_6);


  FUNC_12(VAR_11, 0xaa, VAR_4);
  FUNC_12(VAR_11, 0xaa, VAR_7);
  FUNC_11(VAR_11, VAR_15, ((void*)0), VAR_5);
  FUNC_11(VAR_11, VAR_15, ((void*)0), VAR_6);

  VAR_11->cleared = 1;
  VAR_11->partial = 1;
 }

 FUNC_10(VAR_11->current_frame, VAR_15, VAR_8->width * VAR_8->height / 8);





 if (VAR_11->pre_border_byte) {
  unsigned int VAR_16;

  for (VAR_16 = 0; VAR_16 < (VAR_8->width / 8); VAR_16++)
   if (VAR_15[VAR_16 + (VAR_8->width * (VAR_8->height - 1) / 8)]) {
    FUNC_11(VAR_11, VAR_15,
         VAR_11->current_frame,
         VAR_6);
    break;
   }
 }

out_free:
 FUNC_8(VAR_15);
out_exit:
 FUNC_4(VAR_13);

 return VAR_14;
}

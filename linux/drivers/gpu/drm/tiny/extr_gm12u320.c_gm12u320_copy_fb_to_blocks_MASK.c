
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int x1; int x2; int y1; int y2; } ;
struct TYPE_8__ {int lock; struct drm_framebuffer* fb; TYPE_1__ rect; } ;
struct gm12u320_device {TYPE_3__ fb_update; scalar_t__* data_buf; } ;
struct drm_framebuffer {int* pitches; TYPE_4__** obj; } ;
struct TYPE_9__ {TYPE_2__* import_attach; } ;
struct TYPE_7__ {int dmabuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct drm_framebuffer*) ;
 void* FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*,void*) ;
 int FUNC_8 (scalar_t__,int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct gm12u320_device *VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 struct drm_framebuffer *VAR_15;
 void *VAR_16;
 u8 *VAR_17;

 FUNC_9(&VAR_5->fb_update.lock);

 if (!VAR_5->fb_update.fb)
  goto unlock;

 VAR_15 = VAR_5->fb_update.fb;
 VAR_11 = VAR_5->fb_update.rect.x1;
 VAR_12 = VAR_5->fb_update.rect.x2;
 VAR_13 = VAR_5->fb_update.rect.y1;
 VAR_14 = VAR_5->fb_update.rect.y2;

 VAR_16 = FUNC_6(VAR_15->obj[0]);
 if (FUNC_1(VAR_16)) {
  FUNC_0("failed to vmap fb: %ld\n", FUNC_2(VAR_16));
  goto put_fb;
 }

 if (VAR_15->obj[0]->import_attach) {
  VAR_10 = FUNC_3(
   VAR_15->obj[0]->import_attach->dmabuf, VAR_2);
  if (VAR_10) {
   FUNC_0("dma_buf_begin_cpu_access err: %d\n", VAR_10);
   goto vunmap;
  }
 }

 VAR_17 = VAR_16 + VAR_13 * VAR_15->pitches[0] + VAR_11 * 4;

 VAR_11 += (VAR_3 - VAR_4) / 2;
 VAR_12 += (VAR_3 - VAR_4) / 2;

 for (; VAR_13 < VAR_14; VAR_13++) {
  VAR_9 = 0;
  VAR_8 = (VAR_12 - VAR_11) * 3;
  VAR_7 = (VAR_13 * VAR_3 + VAR_11) * 3;
  VAR_6 = VAR_7 / VAR_0;
  VAR_7 %= VAR_0;

  if ((VAR_7 + VAR_8) > VAR_0) {
   VAR_9 = VAR_7 + VAR_8 - VAR_0;
   VAR_8 = VAR_0 - VAR_7;
  }

  VAR_7 += VAR_1;
  VAR_8 /= 3;

  FUNC_8(
   VAR_5->data_buf[VAR_6] + VAR_7,
   VAR_17, VAR_8);

  if (VAR_9) {
   VAR_6++;
   VAR_7 = VAR_1;
   FUNC_8(
    VAR_5->data_buf[VAR_6] + VAR_7,
    VAR_17 + VAR_8 * 4, VAR_9 / 3);
  }
  VAR_17 += VAR_15->pitches[0];
 }

 if (VAR_15->obj[0]->import_attach) {
  VAR_10 = FUNC_4(VAR_15->obj[0]->import_attach->dmabuf,
          VAR_2);
  if (VAR_10)
   FUNC_0("dma_buf_end_cpu_access err: %d\n", VAR_10);
 }
vunmap:
 FUNC_7(VAR_15->obj[0], VAR_16);
put_fb:
 FUNC_5(VAR_15);
 VAR_5->fb_update.fb = ((void*)0);
unlock:
 FUNC_10(&VAR_5->fb_update.lock);
}

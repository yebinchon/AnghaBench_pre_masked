
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct drm_device {int pdev; } ;
struct TYPE_11__ {int state; int * bounce_buffer; int direction; } ;
typedef TYPE_1__ drm_via_sg_info_t ;
struct TYPE_12__ {int to_fb; int num_lines; int line_length; int mem_stride; int fb_stride; scalar_t__ fb_addr; scalar_t__ mem_addr; } ;
typedef TYPE_2__ drm_via_dmablit_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_5 (int ,TYPE_2__*,TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_6(struct drm_device *VAR_5, drm_via_sg_info_t *VAR_6, drm_via_dmablit_t *VAR_7)
{
 int VAR_8 = VAR_7->to_fb;
 int VAR_9 = 0;

 VAR_6->direction = (VAR_8) ? VAR_1 : VAR_0;
 VAR_6->bounce_buffer = ((void*)0);

 VAR_6->state = VAR_4;

 if (VAR_7->num_lines <= 0 || VAR_7->line_length <= 0) {
  FUNC_0("Zero size bitblt.\n");
  return -VAR_2;
 }
 if ((VAR_7->mem_stride - VAR_7->line_length) > 2*VAR_3) {
  FUNC_0("Too large system memory stride. Stride: %d, "
     "Length: %d\n", VAR_7->mem_stride, VAR_7->line_length);
  return -VAR_2;
 }

 if ((VAR_7->mem_stride == VAR_7->line_length) &&
    (VAR_7->fb_stride == VAR_7->line_length)) {
  VAR_7->mem_stride *= VAR_7->num_lines;
  VAR_7->line_length = VAR_7->mem_stride;
  VAR_7->fb_stride = VAR_7->mem_stride;
  VAR_7->num_lines = 1;
 }






 if (VAR_7->num_lines > 2048 || (VAR_7->num_lines*VAR_7->mem_stride > (2048*2048*4))) {
  FUNC_0("Too large PCI DMA bitblt.\n");
  return -VAR_2;
 }






 if (VAR_7->mem_stride < VAR_7->line_length ||
  FUNC_1(VAR_7->fb_stride) < VAR_7->line_length) {
  FUNC_0("Invalid frame-buffer / memory stride.\n");
  return -VAR_2;
 }
 if ((((unsigned long)VAR_7->mem_addr & 15) ||
       ((unsigned long)VAR_7->fb_addr & 3)) ||
    ((VAR_7->num_lines > 1) &&
    ((VAR_7->mem_stride & 15) || (VAR_7->fb_stride & 3)))) {
  FUNC_0("Invalid DRM bitblt alignment.\n");
  return -VAR_2;
 }


 if (0 != (VAR_9 = FUNC_4(VAR_6, VAR_7))) {
  FUNC_0("Could not lock DMA pages.\n");
  FUNC_3(VAR_5->pdev, VAR_6);
  return VAR_9;
 }

 FUNC_5(VAR_5->pdev, VAR_7, VAR_6, 0);
 if (0 != (VAR_9 = FUNC_2(VAR_6))) {
  FUNC_0("Could not allocate DMA descriptor pages.\n");
  FUNC_3(VAR_5->pdev, VAR_6);
  return VAR_9;
 }
 FUNC_5(VAR_5->pdev, VAR_7, VAR_6, 1);

 return 0;
}

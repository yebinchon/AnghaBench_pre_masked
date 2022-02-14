
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_device {scalar_t__ dev_private; } ;
typedef int* maskarray_t ;
struct TYPE_4__ {int* irq_map; int** irq_masks; TYPE_2__* via_irqs; } ;
typedef TYPE_1__ drm_via_private_t ;
struct TYPE_5__ {int irq_received; int irq_queue; } ;
typedef TYPE_2__ drm_via_irq_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int ,int,int) ;
 unsigned int FUNC_3 (int *) ;
 unsigned int VAR_2 ;
 int FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_5(struct drm_device *VAR_3, unsigned int VAR_4, int VAR_5,
      unsigned int *VAR_6)
{
 drm_via_private_t *VAR_7 = (drm_via_private_t *) VAR_3->dev_private;
 unsigned int VAR_8;
 drm_via_irq_t *VAR_9;
 int VAR_10 = 0;
 maskarray_t *VAR_11;
 int VAR_12;

 FUNC_0("\n");

 if (!VAR_7) {
  FUNC_1("called with no initialization\n");
  return -VAR_0;
 }

 if (VAR_4 >= VAR_2) {
  FUNC_1("Trying to wait on unknown irq %d\n", VAR_4);
  return -VAR_0;
 }

 VAR_12 = VAR_7->irq_map[VAR_4];

 if (VAR_12 < 0) {
  FUNC_1("Video IRQ %d not available on this hardware.\n",
     VAR_4);
  return -VAR_0;
 }

 VAR_11 = VAR_7->irq_masks;
 VAR_9 = VAR_7->via_irqs + VAR_12;

 if (VAR_11[VAR_12][2] && !VAR_5) {
  FUNC_2(VAR_10, VAR_9->irq_queue, 3 * VAR_1,
       ((FUNC_4(VAR_7, VAR_11[VAR_4][2]) & VAR_11[VAR_4][3]) ==
        VAR_11[VAR_4][4]));
  VAR_8 = FUNC_3(&VAR_9->irq_received);
 } else {
  FUNC_2(VAR_10, VAR_9->irq_queue, 3 * VAR_1,
       (((VAR_8 =
          FUNC_3(&VAR_9->irq_received)) -
         *VAR_6) <= (1 << 23)));
 }
 *VAR_6 = VAR_8;
 return VAR_10;
}

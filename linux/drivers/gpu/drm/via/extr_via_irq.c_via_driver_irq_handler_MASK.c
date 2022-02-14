
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct drm_device {scalar_t__ dev_private; } ;
typedef int ktime_t ;
typedef int irqreturn_t ;
struct TYPE_5__ {int last_vblank_valid; int nsec_per_vblank; int num_irqs; int* irq_map; int vbl_received; int last_vblank; TYPE_2__* via_irqs; } ;
typedef TYPE_1__ drm_via_private_t ;
struct TYPE_6__ {int pending_mask; int irq_queue; int irq_received; } ;
typedef TYPE_2__ drm_via_irq_t ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_device*,int ) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct drm_device*,int,int) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*,int ,int) ;
 int FUNC_10 (int *) ;

irqreturn_t FUNC_11(int VAR_6, void *VAR_7)
{
 struct drm_device *VAR_8 = (struct drm_device *) VAR_7;
 drm_via_private_t *VAR_9 = (drm_via_private_t *) VAR_8->dev_private;
 u32 VAR_10;
 int VAR_11 = 0;
 ktime_t VAR_12;
 drm_via_irq_t *VAR_13 = VAR_9->via_irqs;
 int VAR_14;

 VAR_10 = FUNC_8(VAR_9, VAR_3);
 if (VAR_10 & VAR_2) {
  FUNC_1(&VAR_9->vbl_received);
  if (!(FUNC_2(&VAR_9->vbl_received) & 0x0F)) {
   VAR_12 = FUNC_4();
   if (VAR_9->last_vblank_valid) {
    VAR_9->nsec_per_vblank =
     FUNC_5(VAR_12,
      VAR_9->last_vblank) >> 4;
   }
   VAR_9->last_vblank = VAR_12;
   VAR_9->last_vblank_valid = 1;
  }
  if (!(FUNC_2(&VAR_9->vbl_received) & 0xFF)) {
   FUNC_0("nsec per vblank is: %llu\n",
      FUNC_6(VAR_9->nsec_per_vblank));
  }
  FUNC_3(VAR_8, 0);
  VAR_11 = 1;
 }

 for (VAR_14 = 0; VAR_14 < VAR_9->num_irqs; ++VAR_14) {
  if (VAR_10 & VAR_13->pending_mask) {
   FUNC_1(&VAR_13->irq_received);
   FUNC_10(&VAR_13->irq_queue);
   VAR_11 = 1;
   if (VAR_9->irq_map[VAR_4] == VAR_14)
    FUNC_7(VAR_8, 0, 1);
   else if (VAR_9->irq_map[VAR_5] == VAR_14)
    FUNC_7(VAR_8, 1, 1);
  }
  VAR_13++;
 }


 FUNC_9(VAR_9, VAR_3, VAR_10);


 if (VAR_11)
  return VAR_0;
 else
  return VAR_1;
}

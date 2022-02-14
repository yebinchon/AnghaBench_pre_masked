
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {scalar_t__ model; int features; int minor_features7; int minor_features10; int minor_features0; } ;
struct etnaviv_gpu {int exec_state; int initialized; int dev; int lock; int event_free; int event; int event_bitmap; int event_spinlock; int buffer; TYPE_3__ identity; int sec_mode; TYPE_1__* drm; } ;
struct etnaviv_drm_private {int cmdbuf_suballoc; TYPE_2__* mmu_global; } ;
struct TYPE_5__ {scalar_t__ memory_base; } ;
struct TYPE_4__ {struct etnaviv_drm_private* dev_private; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (struct etnaviv_gpu*) ;
 int FUNC_8 (struct etnaviv_gpu*) ;
 int FUNC_9 (struct etnaviv_gpu*) ;
 int FUNC_10 (struct etnaviv_gpu*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *) ;

int FUNC_18(struct etnaviv_gpu *VAR_13)
{
 struct etnaviv_drm_private *VAR_14 = VAR_13->drm->dev_private;
 int VAR_15, VAR_16;

 VAR_15 = FUNC_14(VAR_13->dev);
 if (VAR_15 < 0) {
  FUNC_3(VAR_13->dev, "Failed to enable GPU power domain\n");
  return VAR_15;
 }

 FUNC_8(VAR_13);

 if (VAR_13->identity.model == 0) {
  FUNC_3(VAR_13->dev, "Unknown GPU model\n");
  VAR_15 = -VAR_0;
  goto fail;
 }


 if (VAR_13->identity.features & VAR_9 &&
     VAR_13->identity.features & VAR_7) {
  FUNC_4(VAR_13->dev, "Ignoring GPU with VG and FE2.0\n");
  VAR_15 = -VAR_0;
  goto fail;
 }





 if ((VAR_13->identity.minor_features7 & VAR_12) &&
     (VAR_13->identity.minor_features10 & VAR_11))
  VAR_13->sec_mode = VAR_2;

 VAR_15 = FUNC_9(VAR_13);
 if (VAR_15) {
  FUNC_3(VAR_13->dev, "GPU reset failed\n");
  goto fail;
 }

 VAR_15 = FUNC_10(VAR_13);
 if (VAR_15)
  goto fail;
 if (!(VAR_13->identity.features & VAR_8) ||
     (VAR_13->identity.minor_features0 & VAR_10)) {
  u32 VAR_17 = (u32)FUNC_5(VAR_13->dev);
  if (VAR_17 < VAR_4 + VAR_5)
   VAR_14->mmu_global->memory_base = VAR_4;
  else
   VAR_14->mmu_global->memory_base = VAR_17 - VAR_5 + 1;
 } else if (VAR_4 >= VAR_5) {
  FUNC_4(VAR_13->dev, "Need to move linear window on MC1.0, disabling TS\n");
  VAR_14->mmu_global->memory_base = VAR_4;
  VAR_13->identity.features &= ~VAR_6;
 }


 VAR_15 = FUNC_6(VAR_14->cmdbuf_suballoc, &VAR_13->buffer,
      VAR_3);
 if (VAR_15) {
  FUNC_3(VAR_13->dev, "could not create command buffer\n");
  goto fail;
 }


 FUNC_17(&VAR_13->event_spinlock);
 FUNC_11(&VAR_13->event_free);
 FUNC_1(VAR_13->event_bitmap, VAR_1);
 for (VAR_16 = 0; VAR_16 < FUNC_0(VAR_13->event); VAR_16++)
  FUNC_2(&VAR_13->event_free);


 FUNC_12(&VAR_13->lock);
 FUNC_7(VAR_13);
 VAR_13->exec_state = -1;
 FUNC_13(&VAR_13->lock);

 FUNC_15(VAR_13->dev);
 FUNC_16(VAR_13->dev);

 VAR_13->initialized = 1;

 return 0;

fail:
 FUNC_15(VAR_13->dev);
 FUNC_16(VAR_13->dev);

 return VAR_15;
}

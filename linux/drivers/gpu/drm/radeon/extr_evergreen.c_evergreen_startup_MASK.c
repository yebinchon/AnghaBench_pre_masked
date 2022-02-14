
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct radeon_ring {int ring_size; } ;
struct TYPE_6__ {int installed; } ;
struct TYPE_5__ {int cs_data; scalar_t__ reg_list_size; int reg_list; } ;
struct TYPE_4__ {int dpm_enabled; } ;
struct radeon_device {int flags; int dev; struct radeon_ring* ring; TYPE_3__ irq; TYPE_2__ rlc; TYPE_1__ pm; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (char*,...) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*) ;
 int VAR_8 ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*) ;
 int FUNC_11 (struct radeon_device*) ;
 int FUNC_12 (struct radeon_device*) ;
 int FUNC_13 (struct radeon_device*) ;
 int FUNC_14 (struct radeon_device*) ;
 int FUNC_15 (struct radeon_device*) ;
 int FUNC_16 (struct radeon_device*) ;
 int FUNC_17 (struct radeon_device*) ;
 int FUNC_18 (struct radeon_device*) ;
 int FUNC_19 (struct radeon_device*) ;
 int FUNC_20 (struct radeon_device*) ;
 int FUNC_21 (struct radeon_device*,size_t) ;
 int FUNC_22 (struct radeon_device*) ;
 int FUNC_23 (struct radeon_device*) ;
 int FUNC_24 (struct radeon_device*) ;
 int FUNC_25 (struct radeon_device*,struct radeon_ring*,int ,int ,int ) ;
 int FUNC_26 (struct radeon_device*) ;
 int FUNC_27 (struct radeon_device*) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_28(struct radeon_device *VAR_10)
{
 struct radeon_ring *VAR_11;
 int VAR_12;


 FUNC_12(VAR_10);

 FUNC_13(VAR_10);


 VAR_12 = FUNC_19(VAR_10);
 if (VAR_12)
  return VAR_12;

 FUNC_10(VAR_10);

 if (FUNC_1(VAR_10) && !VAR_10->pm.dpm_enabled) {
  VAR_12 = FUNC_16(VAR_10);
  if (VAR_12) {
   FUNC_3("Failed to load MC firmware!\n");
   return VAR_12;
  }
 }

 if (VAR_10->flags & VAR_4) {
  FUNC_5(VAR_10);
 } else {
  VAR_12 = FUNC_11(VAR_10);
  if (VAR_12)
   return VAR_12;
 }
 FUNC_8(VAR_10);


 if (VAR_10->flags & VAR_5) {
  VAR_10->rlc.reg_list = VAR_9;
  VAR_10->rlc.reg_list_size =
   (u32)FUNC_0(VAR_9);
  VAR_10->rlc.cs_data = VAR_8;
  VAR_12 = FUNC_27(VAR_10);
  if (VAR_12) {
   FUNC_3("Failed to init rlc BOs!\n");
   return VAR_12;
  }
 }


 VAR_12 = FUNC_26(VAR_10);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_21(VAR_10, VAR_6);
 if (VAR_12) {
  FUNC_4(VAR_10->dev, "failed initializing CP fences (%d).\n", VAR_12);
  return VAR_12;
 }

 VAR_12 = FUNC_21(VAR_10, VAR_1);
 if (VAR_12) {
  FUNC_4(VAR_10->dev, "failed initializing DMA fences (%d).\n", VAR_12);
  return VAR_12;
 }

 FUNC_15(VAR_10);


 if (!VAR_10->irq.installed) {
  VAR_12 = FUNC_24(VAR_10);
  if (VAR_12)
   return VAR_12;
 }

 VAR_12 = FUNC_18(VAR_10);
 if (VAR_12) {
  FUNC_3("radeon: IH init failed (%d).\n", VAR_12);
  FUNC_23(VAR_10);
  return VAR_12;
 }
 FUNC_9(VAR_10);

 VAR_11 = &VAR_10->ring[VAR_6];
 VAR_12 = FUNC_25(VAR_10, VAR_11, VAR_11->ring_size, VAR_7,
        VAR_3);
 if (VAR_12)
  return VAR_12;

 VAR_11 = &VAR_10->ring[VAR_1];
 VAR_12 = FUNC_25(VAR_10, VAR_11, VAR_11->ring_size, VAR_2,
        FUNC_2(VAR_0, 0, 0));
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_6(VAR_10);
 if (VAR_12)
  return VAR_12;
 VAR_12 = FUNC_7(VAR_10);
 if (VAR_12)
  return VAR_12;
 VAR_12 = FUNC_17(VAR_10);
 if (VAR_12)
  return VAR_12;

 FUNC_14(VAR_10);

 VAR_12 = FUNC_22(VAR_10);
 if (VAR_12) {
  FUNC_4(VAR_10->dev, "IB initialization failed (%d).\n", VAR_12);
  return VAR_12;
 }

 VAR_12 = FUNC_20(VAR_10);
 if (VAR_12) {
  FUNC_3("radeon: audio init failed\n");
  return VAR_12;
 }

 return 0;
}

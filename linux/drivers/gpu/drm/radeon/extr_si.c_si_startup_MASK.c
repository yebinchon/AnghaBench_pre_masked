
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
struct radeon_device {scalar_t__ family; int dev; struct radeon_ring* ring; TYPE_3__ irq; TYPE_2__ rlc; TYPE_1__ pm; } ;


 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (char*,...) ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*,size_t) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*) ;
 int FUNC_11 (struct radeon_device*,struct radeon_ring*,int ,int ,int ) ;
 int FUNC_12 (struct radeon_device*) ;
 int FUNC_13 (struct radeon_device*) ;
 int FUNC_14 (struct radeon_device*) ;
 int FUNC_15 (struct radeon_device*) ;
 int VAR_13 ;
 int FUNC_16 (struct radeon_device*) ;
 int FUNC_17 (struct radeon_device*) ;
 int FUNC_18 (struct radeon_device*) ;
 int FUNC_19 (struct radeon_device*) ;
 int FUNC_20 (struct radeon_device*) ;
 int FUNC_21 (struct radeon_device*) ;
 int FUNC_22 (struct radeon_device*) ;
 int FUNC_23 (struct radeon_device*) ;
 int FUNC_24 (struct radeon_device*) ;
 int FUNC_25 (struct radeon_device*) ;
 int FUNC_26 (struct radeon_device*) ;
 int FUNC_27 (struct radeon_device*) ;
 int FUNC_28 (struct radeon_device*) ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_29(struct radeon_device *VAR_15)
{
 struct radeon_ring *VAR_16;
 int VAR_17;


 FUNC_22(VAR_15);

 FUNC_23(VAR_15);


 VAR_17 = FUNC_5(VAR_15);
 if (VAR_17)
  return VAR_17;

 FUNC_20(VAR_15);

 if (!VAR_15->pm.dpm_enabled) {
  VAR_17 = FUNC_19(VAR_15);
  if (VAR_17) {
   FUNC_2("Failed to load MC firmware!\n");
   return VAR_17;
  }
 }

 VAR_17 = FUNC_21(VAR_15);
 if (VAR_17)
  return VAR_17;
 FUNC_16(VAR_15);


 if (VAR_15->family == VAR_4) {
  VAR_15->rlc.reg_list = VAR_14;
  VAR_15->rlc.reg_list_size =
   (u32)FUNC_0(VAR_14);
 }
 VAR_15->rlc.cs_data = VAR_13;
 VAR_17 = FUNC_28(VAR_15);
 if (VAR_17) {
  FUNC_2("Failed to init rlc BOs!\n");
  return VAR_17;
 }


 VAR_17 = FUNC_13(VAR_15);
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_7(VAR_15, VAR_9);
 if (VAR_17) {
  FUNC_4(VAR_15->dev, "failed initializing CP fences (%d).\n", VAR_17);
  return VAR_17;
 }

 VAR_17 = FUNC_7(VAR_15, VAR_0);
 if (VAR_17) {
  FUNC_4(VAR_15->dev, "failed initializing CP fences (%d).\n", VAR_17);
  return VAR_17;
 }

 VAR_17 = FUNC_7(VAR_15, VAR_1);
 if (VAR_17) {
  FUNC_4(VAR_15->dev, "failed initializing CP fences (%d).\n", VAR_17);
  return VAR_17;
 }

 VAR_17 = FUNC_7(VAR_15, VAR_6);
 if (VAR_17) {
  FUNC_4(VAR_15->dev, "failed initializing DMA fences (%d).\n", VAR_17);
  return VAR_17;
 }

 VAR_17 = FUNC_7(VAR_15, VAR_2);
 if (VAR_17) {
  FUNC_4(VAR_15->dev, "failed initializing DMA fences (%d).\n", VAR_17);
  return VAR_17;
 }

 FUNC_25(VAR_15);
 FUNC_27(VAR_15);


 if (!VAR_15->irq.installed) {
  VAR_17 = FUNC_10(VAR_15);
  if (VAR_17)
   return VAR_17;
 }

 VAR_17 = FUNC_17(VAR_15);
 if (VAR_17) {
  FUNC_2("radeon: IH init failed (%d).\n", VAR_17);
  FUNC_9(VAR_15);
  return VAR_17;
 }
 FUNC_18(VAR_15);

 VAR_16 = &VAR_15->ring[VAR_9];
 VAR_17 = FUNC_11(VAR_15, VAR_16, VAR_16->ring_size, VAR_12,
        VAR_8);
 if (VAR_17)
  return VAR_17;

 VAR_16 = &VAR_15->ring[VAR_0];
 VAR_17 = FUNC_11(VAR_15, VAR_16, VAR_16->ring_size, VAR_10,
        VAR_8);
 if (VAR_17)
  return VAR_17;

 VAR_16 = &VAR_15->ring[VAR_1];
 VAR_17 = FUNC_11(VAR_15, VAR_16, VAR_16->ring_size, VAR_11,
        VAR_8);
 if (VAR_17)
  return VAR_17;

 VAR_16 = &VAR_15->ring[VAR_6];
 VAR_17 = FUNC_11(VAR_15, VAR_16, VAR_16->ring_size, VAR_7,
        FUNC_1(VAR_5, 0, 0, 0, 0));
 if (VAR_17)
  return VAR_17;

 VAR_16 = &VAR_15->ring[VAR_2];
 VAR_17 = FUNC_11(VAR_15, VAR_16, VAR_16->ring_size, VAR_3,
        FUNC_1(VAR_5, 0, 0, 0, 0));
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_14(VAR_15);
 if (VAR_17)
  return VAR_17;
 VAR_17 = FUNC_15(VAR_15);
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_3(VAR_15);
 if (VAR_17)
  return VAR_17;

 FUNC_24(VAR_15);
 FUNC_26(VAR_15);

 VAR_17 = FUNC_8(VAR_15);
 if (VAR_17) {
  FUNC_4(VAR_15->dev, "IB initialization failed (%d).\n", VAR_17);
  return VAR_17;
 }

 VAR_17 = FUNC_12(VAR_15);
 if (VAR_17) {
  FUNC_4(VAR_15->dev, "vm manager initialization failed (%d).\n", VAR_17);
  return VAR_17;
 }

 VAR_17 = FUNC_6(VAR_15);
 if (VAR_17)
  return VAR_17;

 return 0;
}

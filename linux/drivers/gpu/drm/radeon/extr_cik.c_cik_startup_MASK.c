
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
struct radeon_ring {int me; int queue; int ring_size; int wptr_offs; scalar_t__ pipe; } ;
struct TYPE_6__ {int installed; } ;
struct TYPE_5__ {int cp_table_size; int cs_data; void* reg_list_size; void* reg_list; } ;
struct TYPE_4__ {int dpm_enabled; } ;
struct radeon_device {int flags; scalar_t__ family; int dev; struct radeon_ring* ring; scalar_t__ new_fw; TYPE_3__ irq; TYPE_2__ rlc; TYPE_1__ pm; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (void*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char*,...) ;
 void* FUNC_3 (int ,int) ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* FUNC_4 (int ,int ,int ) ;
 int VAR_19 ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*) ;
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
 int FUNC_20 (int ,char*,int) ;
 void* VAR_20 ;
 int FUNC_21 (struct radeon_device*) ;
 int FUNC_22 (struct radeon_device*) ;
 int FUNC_23 (struct radeon_device*,size_t) ;
 int FUNC_24 (struct radeon_device*) ;
 int FUNC_25 (struct radeon_device*) ;
 int FUNC_26 (struct radeon_device*) ;
 int FUNC_27 (struct radeon_device*,struct radeon_ring*,int ,int ,void*) ;
 int FUNC_28 (struct radeon_device*) ;
 int FUNC_29 (struct radeon_device*) ;
 void* VAR_21 ;
 int FUNC_30 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_31(struct radeon_device *VAR_22)
{
 struct radeon_ring *VAR_23;
 u32 VAR_24;
 int VAR_25;


 FUNC_13(VAR_22);

 FUNC_14(VAR_22);


 VAR_25 = FUNC_21(VAR_22);
 if (VAR_25)
  return VAR_25;

 FUNC_10(VAR_22);

 if (!(VAR_22->flags & VAR_13) && !VAR_22->pm.dpm_enabled) {
  VAR_25 = FUNC_5(VAR_22);
  if (VAR_25) {
   FUNC_2("Failed to load MC firmware!\n");
   return VAR_25;
  }
 }

 VAR_25 = FUNC_12(VAR_22);
 if (VAR_25)
  return VAR_25;
 FUNC_7(VAR_22);


 if (VAR_22->flags & VAR_13) {
  if (VAR_22->family == VAR_5) {
   VAR_22->rlc.reg_list = VAR_21;
   VAR_22->rlc.reg_list_size =
    (u32)FUNC_1(VAR_21);
  } else {
   VAR_22->rlc.reg_list = VAR_20;
   VAR_22->rlc.reg_list_size =
    (u32)FUNC_1(VAR_20);
  }
 }
 VAR_22->rlc.cs_data = VAR_19;
 VAR_22->rlc.cp_table_size = FUNC_0(VAR_8 * 5 * 4, 2048);
 VAR_22->rlc.cp_table_size += 64 * 1024;
 VAR_25 = FUNC_30(VAR_22);
 if (VAR_25) {
  FUNC_2("Failed to init rlc BOs!\n");
  return VAR_25;
 }


 VAR_25 = FUNC_29(VAR_22);
 if (VAR_25)
  return VAR_25;


 VAR_25 = FUNC_11(VAR_22);
 if (VAR_25) {
  FUNC_2("Failed to init MEC BOs!\n");
  return VAR_25;
 }

 VAR_25 = FUNC_23(VAR_22, VAR_14);
 if (VAR_25) {
  FUNC_20(VAR_22->dev, "failed initializing CP fences (%d).\n", VAR_25);
  return VAR_25;
 }

 VAR_25 = FUNC_23(VAR_22, VAR_0);
 if (VAR_25) {
  FUNC_20(VAR_22->dev, "failed initializing CP fences (%d).\n", VAR_25);
  return VAR_25;
 }

 VAR_25 = FUNC_23(VAR_22, VAR_1);
 if (VAR_25) {
  FUNC_20(VAR_22->dev, "failed initializing CP fences (%d).\n", VAR_25);
  return VAR_25;
 }

 VAR_25 = FUNC_23(VAR_22, VAR_10);
 if (VAR_25) {
  FUNC_20(VAR_22->dev, "failed initializing DMA fences (%d).\n", VAR_25);
  return VAR_25;
 }

 VAR_25 = FUNC_23(VAR_22, VAR_2);
 if (VAR_25) {
  FUNC_20(VAR_22->dev, "failed initializing DMA fences (%d).\n", VAR_25);
  return VAR_25;
 }

 FUNC_17(VAR_22);
 FUNC_19(VAR_22);


 if (!VAR_22->irq.installed) {
  VAR_25 = FUNC_26(VAR_22);
  if (VAR_25)
   return VAR_25;
 }

 VAR_25 = FUNC_8(VAR_22);
 if (VAR_25) {
  FUNC_2("radeon: IH init failed (%d).\n", VAR_25);
  FUNC_25(VAR_22);
  return VAR_25;
 }
 FUNC_9(VAR_22);

 if (VAR_22->family == VAR_4) {
  if (VAR_22->new_fw)
   VAR_24 = FUNC_3(VAR_9, 0x3FFF);
  else
   VAR_24 = VAR_12;
 } else {
  VAR_24 = FUNC_3(VAR_9, 0x3FFF);
 }

 VAR_23 = &VAR_22->ring[VAR_14];
 VAR_25 = FUNC_27(VAR_22, VAR_23, VAR_23->ring_size, VAR_17,
        VAR_24);
 if (VAR_25)
  return VAR_25;



 VAR_23 = &VAR_22->ring[VAR_0];
 VAR_25 = FUNC_27(VAR_22, VAR_23, VAR_23->ring_size, VAR_15,
        VAR_24);
 if (VAR_25)
  return VAR_25;
 VAR_23->me = 1;
 VAR_23->pipe = 0;
 VAR_23->queue = 0;
 VAR_23->wptr_offs = VAR_6;


 VAR_23 = &VAR_22->ring[VAR_1];
 VAR_25 = FUNC_27(VAR_22, VAR_23, VAR_23->ring_size, VAR_16,
        VAR_24);
 if (VAR_25)
  return VAR_25;

 VAR_23->me = 1;
 VAR_23->pipe = 0;
 VAR_23->queue = 1;
 VAR_23->wptr_offs = VAR_7;

 VAR_23 = &VAR_22->ring[VAR_10];
 VAR_25 = FUNC_27(VAR_22, VAR_23, VAR_23->ring_size, VAR_11,
        FUNC_4(VAR_18, 0, 0));
 if (VAR_25)
  return VAR_25;

 VAR_23 = &VAR_22->ring[VAR_2];
 VAR_25 = FUNC_27(VAR_22, VAR_23, VAR_23->ring_size, VAR_3,
        FUNC_4(VAR_18, 0, 0));
 if (VAR_25)
  return VAR_25;

 VAR_25 = FUNC_6(VAR_22);
 if (VAR_25)
  return VAR_25;

 VAR_25 = FUNC_15(VAR_22);
 if (VAR_25)
  return VAR_25;

 FUNC_16(VAR_22);
 FUNC_18(VAR_22);

 VAR_25 = FUNC_24(VAR_22);
 if (VAR_25) {
  FUNC_20(VAR_22->dev, "IB initialization failed (%d).\n", VAR_25);
  return VAR_25;
 }

 VAR_25 = FUNC_28(VAR_22);
 if (VAR_25) {
  FUNC_20(VAR_22->dev, "vm manager initialization failed (%d).\n", VAR_25);
  return VAR_25;
 }

 VAR_25 = FUNC_22(VAR_22);
 if (VAR_25)
  return VAR_25;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_ring {int ring_size; } ;
struct TYPE_2__ {int installed; } ;
struct radeon_device {int flags; int dev; struct radeon_ring* ring; TYPE_1__ irq; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*,size_t) ;
 int FUNC_10 (struct radeon_device*) ;
 int FUNC_11 (struct radeon_device*) ;
 int FUNC_12 (struct radeon_device*) ;
 int FUNC_13 (struct radeon_device*,struct radeon_ring*,int ,int ,int ) ;
 int FUNC_14 (struct radeon_device*) ;
 int FUNC_15 (struct radeon_device*) ;
 int FUNC_16 (struct radeon_device*) ;
 int FUNC_17 (struct radeon_device*) ;
 int FUNC_18 (struct radeon_device*) ;
 int FUNC_19 (struct radeon_device*) ;
 int FUNC_20 (struct radeon_device*) ;
 int FUNC_21 (struct radeon_device*) ;
 int FUNC_22 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_23(struct radeon_device *VAR_7)
{
 struct radeon_ring *VAR_8;
 int VAR_9;


 FUNC_20(VAR_7);


 VAR_9 = FUNC_7(VAR_7);
 if (VAR_9)
  return VAR_9;

 FUNC_18(VAR_7);

 if (VAR_7->flags & VAR_4) {
  FUNC_15(VAR_7);
 } else {
  VAR_9 = FUNC_19(VAR_7);
  if (VAR_9)
   return VAR_9;
 }

 FUNC_17(VAR_7);


 VAR_9 = FUNC_14(VAR_7);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_9(VAR_7, VAR_5);
 if (VAR_9) {
  FUNC_2(VAR_7->dev, "failed initializing CP fences (%d).\n", VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_9(VAR_7, VAR_1);
 if (VAR_9) {
  FUNC_2(VAR_7->dev, "failed initializing DMA fences (%d).\n", VAR_9);
  return VAR_9;
 }

 FUNC_22(VAR_7);


 if (!VAR_7->irq.installed) {
  VAR_9 = FUNC_12(VAR_7);
  if (VAR_9)
   return VAR_9;
 }

 VAR_9 = FUNC_5(VAR_7);
 if (VAR_9) {
  FUNC_1("radeon: IH init failed (%d).\n", VAR_9);
  FUNC_11(VAR_7);
  return VAR_9;
 }
 FUNC_6(VAR_7);

 VAR_8 = &VAR_7->ring[VAR_5];
 VAR_9 = FUNC_13(VAR_7, VAR_8, VAR_8->ring_size, VAR_6,
        VAR_3);
 if (VAR_9)
  return VAR_9;

 VAR_8 = &VAR_7->ring[VAR_1];
 VAR_9 = FUNC_13(VAR_7, VAR_8, VAR_8->ring_size, VAR_2,
        FUNC_0(VAR_0, 0, 0, 0));
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_16(VAR_7);
 if (VAR_9)
  return VAR_9;
 VAR_9 = FUNC_3(VAR_7);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_4(VAR_7);
 if (VAR_9)
  return VAR_9;

 FUNC_21(VAR_7);

 VAR_9 = FUNC_10(VAR_7);
 if (VAR_9) {
  FUNC_2(VAR_7->dev, "IB initialization failed (%d).\n", VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_8(VAR_7);
 if (VAR_9) {
  FUNC_1("radeon: audio init failed\n");
  return VAR_9;
 }

 return 0;
}

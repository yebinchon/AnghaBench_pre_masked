
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_ring {int ring_size; } ;
struct TYPE_2__ {int installed; } ;
struct radeon_device {int flags; int dev; struct radeon_ring* ring; TYPE_1__ irq; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*) ;
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
 int FUNC_15 (struct radeon_device*,size_t) ;
 int FUNC_16 (struct radeon_device*) ;
 int FUNC_17 (struct radeon_device*) ;
 int FUNC_18 (struct radeon_device*) ;
 int FUNC_19 (struct radeon_device*,struct radeon_ring*,int ,int ,int ) ;
 int FUNC_20 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_21(struct radeon_device *VAR_4)
{
 struct radeon_ring *VAR_5;
 int VAR_6;


 FUNC_10(VAR_4);


 VAR_6 = FUNC_13(VAR_4);
 if (VAR_6)
  return VAR_6;

 FUNC_8(VAR_4);

 if (VAR_4->flags & VAR_1) {
  FUNC_2(VAR_4);
 } else {
  VAR_6 = FUNC_9(VAR_4);
  if (VAR_6)
   return VAR_6;
 }
 FUNC_5(VAR_4);


 VAR_6 = FUNC_20(VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_15(VAR_4, VAR_2);
 if (VAR_6) {
  FUNC_1(VAR_4->dev, "failed initializing CP fences (%d).\n", VAR_6);
  return VAR_6;
 }

 FUNC_12(VAR_4);


 if (!VAR_4->irq.installed) {
  VAR_6 = FUNC_18(VAR_4);
  if (VAR_6)
   return VAR_6;
 }

 VAR_6 = FUNC_6(VAR_4);
 if (VAR_6) {
  FUNC_0("radeon: IH init failed (%d).\n", VAR_6);
  FUNC_17(VAR_4);
  return VAR_6;
 }
 FUNC_7(VAR_4);

 VAR_5 = &VAR_4->ring[VAR_2];
 VAR_6 = FUNC_19(VAR_4, VAR_5, VAR_5->ring_size, VAR_3,
        VAR_0);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6)
  return VAR_6;
 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6)
  return VAR_6;

 FUNC_11(VAR_4);

 VAR_6 = FUNC_16(VAR_4);
 if (VAR_6) {
  FUNC_1(VAR_4->dev, "IB initialization failed (%d).\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_14(VAR_4);
 if (VAR_6) {
  FUNC_0("radeon: audio init failed\n");
  return VAR_6;
 }

 return 0;
}

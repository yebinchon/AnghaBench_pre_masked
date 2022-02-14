
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct panfrost_device {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct panfrost_device*,int ) ;
 int FUNC_2 (struct panfrost_device*,int ,int) ;
 int FUNC_3 (struct panfrost_device*,int) ;
 int FUNC_4 (struct panfrost_device*) ;
 int FUNC_5 (struct panfrost_device*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_12, void *VAR_13)
{
 struct panfrost_device *VAR_14 = VAR_13;
 u32 VAR_15 = FUNC_1(VAR_14, VAR_5);
 u32 VAR_16 = FUNC_1(VAR_14, VAR_2);

 if (!VAR_15)
  return VAR_11;

 if (VAR_15 & VAR_7) {
  u64 VAR_17 = (u64) FUNC_1(VAR_14, VAR_0) << 32;
  VAR_17 |= FUNC_1(VAR_14, VAR_1);

  FUNC_0(VAR_14->dev, "GPU Fault 0x%08x (%s) at 0x%016llx\n",
    VAR_16 & 0xFF, FUNC_3(VAR_14, VAR_16),
    VAR_17);

  if (VAR_15 & VAR_8)
   FUNC_0(VAR_14->dev, "There were multiple GPU faults - some have not been reported\n");

  FUNC_2(VAR_14, VAR_4, 0);
 }

 if (VAR_15 & VAR_9)
  FUNC_5(VAR_14);

 if (VAR_15 & VAR_6)
  FUNC_4(VAR_14);

 FUNC_2(VAR_14, VAR_3, VAR_15);

 return VAR_10;
}

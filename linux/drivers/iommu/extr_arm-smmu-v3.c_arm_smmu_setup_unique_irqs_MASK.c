
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int irq; } ;
struct TYPE_8__ {TYPE_3__ q; } ;
struct TYPE_5__ {int irq; } ;
struct TYPE_6__ {TYPE_1__ q; } ;
struct arm_smmu_device {int gerr_irq; int features; int dev; TYPE_4__ priq; TYPE_2__ evtq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct arm_smmu_device*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int,int ,int ,char*,struct arm_smmu_device*) ;
 int FUNC_3 (int ,int,int *,int ,int ,char*,struct arm_smmu_device*) ;

__attribute__((used)) static void FUNC_4(struct arm_smmu_device *VAR_5)
{
 int VAR_6, VAR_7;

 FUNC_0(VAR_5);


 VAR_6 = VAR_5->evtq.q.irq;
 if (VAR_6) {
  VAR_7 = FUNC_3(VAR_5->dev, VAR_6, ((void*)0),
      VAR_2,
      VAR_1,
      "arm-smmu-v3-evtq", VAR_5);
  if (VAR_7 < 0)
   FUNC_1(VAR_5->dev, "failed to enable evtq irq\n");
 } else {
  FUNC_1(VAR_5->dev, "no evtq irq - events will not be reported!\n");
 }

 VAR_6 = VAR_5->gerr_irq;
 if (VAR_6) {
  VAR_7 = FUNC_2(VAR_5->dev, VAR_6, VAR_3,
           0, "arm-smmu-v3-gerror", VAR_5);
  if (VAR_7 < 0)
   FUNC_1(VAR_5->dev, "failed to enable gerror irq\n");
 } else {
  FUNC_1(VAR_5->dev, "no gerr irq - errors will not be reported!\n");
 }

 if (VAR_5->features & VAR_0) {
  VAR_6 = VAR_5->priq.q.irq;
  if (VAR_6) {
   VAR_7 = FUNC_3(VAR_5->dev, VAR_6, ((void*)0),
       VAR_4,
       VAR_1,
       "arm-smmu-v3-priq",
       VAR_5);
   if (VAR_7 < 0)
    FUNC_1(VAR_5->dev,
      "failed to enable priq irq\n");
  } else {
   FUNC_1(VAR_5->dev, "no priq irq - PRI will be broken\n");
  }
 }
}

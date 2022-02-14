
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int q; } ;
struct TYPE_6__ {int q; } ;
struct TYPE_5__ {int q; } ;
struct arm_smmu_device {int features; TYPE_1__ priq; TYPE_3__ evtq; TYPE_2__ cmdq; } ;


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
 int FUNC_0 (struct arm_smmu_device*) ;
 int FUNC_1 (struct arm_smmu_device*,int *,int ,int ,int ,char*) ;

__attribute__((used)) static int FUNC_2(struct arm_smmu_device *VAR_10)
{
 int VAR_11;


 VAR_11 = FUNC_1(VAR_10, &VAR_10->cmdq.q, VAR_1,
          VAR_0, VAR_7,
          "cmdq");
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_0(VAR_10);
 if (VAR_11)
  return VAR_11;


 VAR_11 = FUNC_1(VAR_10, &VAR_10->evtq.q, VAR_3,
          VAR_2, VAR_8,
          "evtq");
 if (VAR_11)
  return VAR_11;


 if (!(VAR_10->features & VAR_4))
  return 0;

 return FUNC_1(VAR_10, &VAR_10->priq.q, VAR_6,
           VAR_5, VAR_9,
           "priq");
}

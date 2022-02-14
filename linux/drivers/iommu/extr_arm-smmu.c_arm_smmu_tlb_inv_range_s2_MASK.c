
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cbndx; scalar_t__ fmt; } ;
struct arm_smmu_domain {TYPE_1__ cfg; struct arm_smmu_device* smmu; } ;
struct arm_smmu_device {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct arm_smmu_device*,int,int,unsigned long) ;
 int FUNC_1 (struct arm_smmu_device*,int,int,unsigned long) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_4, size_t VAR_5,
          size_t VAR_6, bool VAR_7, void *VAR_8)
{
 struct arm_smmu_domain *VAR_9 = VAR_8;
 struct arm_smmu_device *VAR_10 = VAR_9->smmu;
 int VAR_11, VAR_12 = VAR_9->cfg.cbndx;

 if (VAR_10->features & VAR_3)
  FUNC_2();

 VAR_11 = VAR_7 ? VAR_1 : VAR_0;
 VAR_4 >>= 12;
 do {
  if (VAR_9->cfg.fmt == VAR_2)
   FUNC_1(VAR_10, VAR_12, VAR_11, VAR_4);
  else
   FUNC_0(VAR_10, VAR_12, VAR_11, VAR_4);
  VAR_4 += VAR_6 >> 12;
 } while (VAR_5 -= VAR_6);
}

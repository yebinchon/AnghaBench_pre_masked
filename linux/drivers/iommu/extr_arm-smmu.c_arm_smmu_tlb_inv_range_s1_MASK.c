
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct arm_smmu_cfg {int cbndx; scalar_t__ fmt; unsigned long asid; } ;
struct arm_smmu_domain {struct arm_smmu_cfg cfg; struct arm_smmu_device* smmu; } ;
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
 struct arm_smmu_cfg *VAR_11 = &VAR_9->cfg;
 int VAR_12, VAR_13 = VAR_11->cbndx;

 if (VAR_10->features & VAR_3)
  FUNC_2();

 VAR_12 = VAR_7 ? VAR_1 : VAR_0;

 if (VAR_11->fmt != VAR_2) {
  VAR_4 = (VAR_4 >> 12) << 12;
  VAR_4 |= VAR_11->asid;
  do {
   FUNC_0(VAR_10, VAR_13, VAR_12, VAR_4);
   VAR_4 += VAR_6;
  } while (VAR_5 -= VAR_6);
 } else {
  VAR_4 >>= 12;
  VAR_4 |= (u64)VAR_11->asid << 48;
  do {
   FUNC_1(VAR_10, VAR_13, VAR_12, VAR_4);
   VAR_4 += VAR_6 >> 12;
  } while (VAR_5 -= VAR_6);
 }
}

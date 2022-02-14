
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct arm_smmu_s2cr {int privcfg; int cbndx; int type; } ;
struct arm_smmu_device {int features; TYPE_1__* smrs; struct arm_smmu_s2cr* s2crs; } ;
struct TYPE_2__ {scalar_t__ valid; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct arm_smmu_device*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct arm_smmu_device *VAR_5, int VAR_6)
{
 struct arm_smmu_s2cr *VAR_7 = VAR_5->s2crs + VAR_6;
 u32 VAR_8 = FUNC_1(VAR_4, VAR_7->type) |
    FUNC_1(VAR_1, VAR_7->cbndx) |
    FUNC_1(VAR_3, VAR_7->privcfg);

 if (VAR_5->features & VAR_0 && VAR_5->smrs &&
     VAR_5->smrs[VAR_6].valid)
  VAR_8 |= VAR_2;
 FUNC_2(VAR_5, FUNC_0(VAR_6), VAR_8);
}

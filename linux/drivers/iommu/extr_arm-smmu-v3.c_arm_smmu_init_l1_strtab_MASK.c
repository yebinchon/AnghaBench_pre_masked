
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm_smmu_strtab_cfg {int num_l1_ents; int * l1_desc; void* strtab; } ;
struct arm_smmu_device {int dev; struct arm_smmu_strtab_cfg strtab_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int *) ;
 int FUNC_1 (int ,char*) ;
 int * FUNC_2 (int ,size_t,int ) ;

__attribute__((used)) static int FUNC_3(struct arm_smmu_device *VAR_3)
{
 unsigned int VAR_4;
 struct arm_smmu_strtab_cfg *VAR_5 = &VAR_3->strtab_cfg;
 size_t VAR_6 = sizeof(*VAR_5->l1_desc) * VAR_5->num_l1_ents;
 void *VAR_7 = VAR_3->strtab_cfg.strtab;

 VAR_5->l1_desc = FUNC_2(VAR_3->dev, VAR_6, VAR_1);
 if (!VAR_5->l1_desc) {
  FUNC_1(VAR_3->dev, "failed to allocate l1 stream table desc\n");
  return -VAR_0;
 }

 for (VAR_4 = 0; VAR_4 < VAR_5->num_l1_ents; ++VAR_4) {
  FUNC_0(VAR_7, &VAR_5->l1_desc[VAR_4]);
  VAR_7 += VAR_2 << 3;
 }

 return 0;
}

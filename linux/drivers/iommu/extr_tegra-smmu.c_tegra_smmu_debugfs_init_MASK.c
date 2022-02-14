
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_smmu {int debugfs; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*,int ,int ,struct tegra_smmu*,int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct tegra_smmu *VAR_3)
{
 VAR_3->debugfs = FUNC_0("smmu", ((void*)0));
 if (!VAR_3->debugfs)
  return;

 FUNC_1("swgroups", VAR_0, VAR_3->debugfs, VAR_3,
       &VAR_2);
 FUNC_1("clients", VAR_0, VAR_3->debugfs, VAR_3,
       &VAR_1);
}

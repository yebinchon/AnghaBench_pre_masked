
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_vmm {struct nouveau_cli* cli; int vmm; } ;
struct nouveau_cli {int mmu; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,int ,int ,int *,int ,int *) ;

int
FUNC_1(struct nouveau_cli *VAR_1, s32 VAR_2, struct nouveau_vmm *VAR_3)
{
 int VAR_4 = FUNC_0(&VAR_1->mmu, VAR_2, 0, VAR_0, 0, ((void*)0), 0,
    &VAR_3->vmm);
 if (VAR_4)
  return VAR_4;

 VAR_3->cli = VAR_1;
 return 0;
}

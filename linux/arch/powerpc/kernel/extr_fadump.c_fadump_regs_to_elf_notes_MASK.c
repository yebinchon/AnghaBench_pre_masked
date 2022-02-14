
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pt_regs {int dummy; } ;
struct elf_prstatus {int pr_reg; } ;
typedef int prstatus ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int ,int ,struct elf_prstatus*,int) ;
 int FUNC_1 (int *,struct pt_regs*) ;
 int FUNC_2 (struct elf_prstatus*,int ,int) ;

u32 *FUNC_3(u32 *VAR_2, struct pt_regs *VAR_3)
{
 struct elf_prstatus VAR_4;

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));




 FUNC_1(&VAR_4.pr_reg, VAR_3);
 VAR_2 = FUNC_0(VAR_2, VAR_0, VAR_1,
         &VAR_4, sizeof(VAR_4));
 return VAR_2;
}

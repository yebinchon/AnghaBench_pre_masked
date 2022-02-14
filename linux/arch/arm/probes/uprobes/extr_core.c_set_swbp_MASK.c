
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
struct arch_uprobe {int bpinsn; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct arch_uprobe*,struct mm_struct*,unsigned long,int ) ;

int FUNC_2(struct arch_uprobe *VAR_0, struct mm_struct *VAR_1,
      unsigned long VAR_2)
{
 return FUNC_1(VAR_0, VAR_1, VAR_2,
     FUNC_0(VAR_0->bpinsn));
}

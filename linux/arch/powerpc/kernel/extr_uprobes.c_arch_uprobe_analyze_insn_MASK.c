
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
struct arch_uprobe {int dummy; } ;


 int VAR_0 ;

int FUNC_0(struct arch_uprobe *VAR_1,
  struct mm_struct *VAR_2, unsigned long VAR_3)
{
 if (VAR_3 & 0x03)
  return -VAR_0;

 return 0;
}

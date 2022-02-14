
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct notifier_block {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct notifier_block *VAR_1, unsigned long VAR_2, void *VAR_3)
{
 u32 VAR_4 = *(u32 *)VAR_3;

 if (VAR_2 != 0x1000)
  return 0;

 if (VAR_4 == VAR_0)
  FUNC_1(0);
 else if (VAR_4 == 0xffff)
  FUNC_0();

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int * VAR_5 ;
 int FUNC_3 (struct pt_regs*,int ) ;

u64 FUNC_4(struct pt_regs *VAR_6, int VAR_7)
{
 if (FUNC_1(VAR_7 >= VAR_2))
  return 0;

 if (VAR_7 == VAR_4 &&
    (FUNC_0(VAR_0) ||
     FUNC_0(VAR_1) ||
     !FUNC_2()))
  return 0;

 if (VAR_7 == VAR_3 &&
    (FUNC_0(VAR_0) ||
     FUNC_0(VAR_1)))
  return 0;

 return FUNC_3(VAR_6, VAR_5[VAR_7]);
}

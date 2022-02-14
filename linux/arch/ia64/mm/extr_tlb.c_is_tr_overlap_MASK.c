
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ia64_tr_entry {int rr; int itir; int ifa; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct ia64_tr_entry *VAR_0, u64 VAR_1, u64 VAR_2)
{
 u64 VAR_3;
 u64 VAR_4;
 u64 VAR_5 = FUNC_1(VAR_1);
 u64 VAR_6 = FUNC_0(VAR_5);
 u64 VAR_7 = VAR_1 + (1<<VAR_2) - 1;

 if (VAR_6 != FUNC_0(VAR_0->rr))
  return 0;
 VAR_3 = (VAR_0->itir & 0xff) >> 2;
 VAR_4 = VAR_0->ifa + (1<<VAR_3) - 1;

 if (VAR_1 > VAR_4 || VAR_0->ifa > VAR_7)
  return 0;
 return 1;

}

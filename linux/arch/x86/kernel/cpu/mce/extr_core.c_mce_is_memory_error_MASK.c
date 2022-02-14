
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mce {scalar_t__ cpuvendor; int status; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct mce*) ;

bool FUNC_2(struct mce *VAR_3)
{
 if (VAR_3->cpuvendor == VAR_0 ||
     VAR_3->cpuvendor == VAR_1) {
  return FUNC_1(VAR_3);
 } else if (VAR_3->cpuvendor == VAR_2) {
  return (VAR_3->status & 0xef80) == FUNC_0(7) ||
         (VAR_3->status & 0xef00) == FUNC_0(8) ||
         (VAR_3->status & 0xeffc) == 0xc;
 }

 return 0;
}

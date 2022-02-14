
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int cs; int ip; } ;
struct mce {int mcgstatus; int status; int cs; int ip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_0(int VAR_12, struct mce *VAR_13, struct pt_regs *VAR_14)
{
 if (VAR_12 != 0)
  return;
 if ((VAR_13->mcgstatus & (VAR_2|VAR_3)) != 0)
  return;
 if ((VAR_13->status & (VAR_8|VAR_11|
            VAR_6|VAR_7|VAR_4|
     VAR_9|VAR_10|VAR_5|
     VAR_0)) !=
    (VAR_11|VAR_6|
     VAR_7|VAR_4|VAR_10|
     VAR_5|VAR_1))
  return;

 VAR_13->mcgstatus |= VAR_2;
 VAR_13->ip = VAR_14->ip;
 VAR_13->cs = VAR_14->cs;
}

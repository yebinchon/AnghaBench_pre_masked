
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl1_traplog {int dummy; } ;
struct pt_regs {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,struct pt_regs*) ;
 int FUNC_1 (struct tl1_traplog*) ;
 scalar_t__ FUNC_2 (int ,char*,struct pt_regs*,int ,long,int ) ;
 int FUNC_3 (char*,char*,long) ;

void FUNC_4(struct pt_regs *VAR_3, long VAR_4)
{
 char VAR_5[36];

 if (FUNC_2(VAR_0, "bad trap tl1", VAR_3,
         0, VAR_4, VAR_2) == VAR_1)
  return;

 FUNC_1((struct tl1_traplog *)(VAR_3 + 1));

 FUNC_3 (VAR_5, "Bad trap %lx at tl>0", VAR_4);
 FUNC_0 (VAR_5, VAR_3);
}

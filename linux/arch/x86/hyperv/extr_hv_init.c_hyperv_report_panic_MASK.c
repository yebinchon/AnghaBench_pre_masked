
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u64 ;
struct pt_regs {long ip; long ax; long sp; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,long) ;
 int FUNC_1 (int ,long) ;

void FUNC_2(struct pt_regs *VAR_8, long VAR_9)
{
 static bool VAR_10;
 u64 VAR_11;






 if (VAR_10)
  return;
 VAR_10 = 1;

 FUNC_0(VAR_7, VAR_11);

 FUNC_1(VAR_2, VAR_9);
 FUNC_1(VAR_3, VAR_11);
 FUNC_1(VAR_4, VAR_8->ip);
 FUNC_1(VAR_5, VAR_8->ax);
 FUNC_1(VAR_6, VAR_8->sp);




 FUNC_1(VAR_1, VAR_0);
}

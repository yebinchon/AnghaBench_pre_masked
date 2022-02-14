
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct isdnhdlc_vars {int do_adapt56; int do_bitreverse; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct isdnhdlc_vars*,int ,int) ;

void FUNC_1(struct isdnhdlc_vars *VAR_3, u32 VAR_4)
{
 FUNC_0(VAR_3, 0, sizeof(struct isdnhdlc_vars));
 VAR_3->state = VAR_2;
 if (VAR_4 & VAR_0)
  VAR_3->do_adapt56 = 1;
 if (VAR_4 & VAR_1)
  VAR_3->do_bitreverse = 1;
}

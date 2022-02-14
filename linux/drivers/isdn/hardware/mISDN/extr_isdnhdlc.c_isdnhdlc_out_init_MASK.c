
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct isdnhdlc_vars {int dchannel; int ffvalue; int cbin; int do_adapt56; int data_bits; int do_bitreverse; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct isdnhdlc_vars*,int ,int) ;

void FUNC_1(struct isdnhdlc_vars *VAR_6, u32 VAR_7)
{
 FUNC_0(VAR_6, 0, sizeof(struct isdnhdlc_vars));
 if (VAR_7 & VAR_2) {
  VAR_6->dchannel = 1;
  VAR_6->state = VAR_5;
 } else {
  VAR_6->dchannel = 0;
  VAR_6->state = VAR_4;
  VAR_6->ffvalue = 0x7e;
 }
 VAR_6->cbin = 0x7e;
 if (VAR_7 & VAR_0) {
  VAR_6->do_adapt56 = 1;
  VAR_6->state = VAR_3;
 } else
  VAR_6->data_bits = 8;
 if (VAR_7 & VAR_1)
  VAR_6->do_bitreverse = 1;
}

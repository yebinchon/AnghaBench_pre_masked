
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rd_data_reg_sel; unsigned char wd_data; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 TYPE_1__ VAR_3 ;

void FUNC_2 (unsigned int VAR_4, unsigned int VAR_5)
{


 unsigned long VAR_6;
 unsigned char VAR_7;
 int VAR_8;

 FUNC_1(VAR_6);



 VAR_3.rd_data_reg_sel = 7;
 VAR_7 = VAR_3.rd_data_reg_sel;
 VAR_7 |= 011;
 VAR_3.wd_data = VAR_7;

 if (VAR_4) {



     VAR_8 = VAR_2 / VAR_4;

     if (VAR_8 > 0xfff) VAR_8 = 0xfff;


 VAR_3.rd_data_reg_sel = 0;
 VAR_3.wd_data = VAR_8 & 0xff;
 VAR_3.rd_data_reg_sel = 1;
 VAR_3.wd_data = (VAR_8 >> 8) & 0xf;
 if (VAR_5) {

  int VAR_9 = (VAR_5 * VAR_1) / VAR_0 / 10;

  if (VAR_9 > 0xffff) VAR_9 = 0xffff;
  VAR_3.rd_data_reg_sel = 11;
  VAR_3.wd_data = VAR_9 & 0xff;
  VAR_3.rd_data_reg_sel = 12;
  VAR_3.wd_data = VAR_9 >> 8;

  VAR_3.rd_data_reg_sel = 13;
  VAR_3.wd_data = 0;

  VAR_3.rd_data_reg_sel = 8;
  VAR_3.wd_data = 0x10;
 } else {

  VAR_3.rd_data_reg_sel = 8;
  VAR_3.wd_data = 15;
 }

 VAR_3.rd_data_reg_sel = 7;
 VAR_7 &= ~1;
 VAR_3.wd_data = VAR_7;
 }
 FUNC_0(VAR_6);
}

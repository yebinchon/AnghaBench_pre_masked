
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edt_reg_addr {void* reg_offset_y; void* reg_offset_x; void* reg_offset; void* reg_gain; void* reg_threshold; void* reg_report_rate; void* reg_num_y; void* reg_num_x; } ;
struct edt_ft5x06_ts_data {int version; struct edt_reg_addr reg_addr; } ;






 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;

 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;

__attribute__((used)) static void
FUNC_0(struct edt_ft5x06_ts_data *VAR_16)
{
 struct edt_reg_addr *VAR_17 = &VAR_16->reg_addr;

 switch (VAR_16->version) {
 case 132:
  VAR_17->reg_threshold = VAR_15;
  VAR_17->reg_report_rate = VAR_14;
  VAR_17->reg_gain = VAR_10;
  VAR_17->reg_offset = VAR_13;
  VAR_17->reg_offset_x = VAR_9;
  VAR_17->reg_offset_y = VAR_9;
  VAR_17->reg_num_x = VAR_11;
  VAR_17->reg_num_y = VAR_12;
  break;

 case 131:
 case 130:
  VAR_17->reg_threshold = VAR_8;
  VAR_17->reg_report_rate = VAR_9;
  VAR_17->reg_gain = VAR_4;
  VAR_17->reg_offset = VAR_7;
  VAR_17->reg_offset_x = VAR_9;
  VAR_17->reg_offset_y = VAR_9;
  VAR_17->reg_num_x = VAR_5;
  VAR_17->reg_num_y = VAR_6;
  break;

 case 129:
  VAR_17->reg_threshold = VAR_3;
  VAR_17->reg_gain = VAR_0;
  VAR_17->reg_offset = VAR_9;
  VAR_17->reg_offset_x = VAR_1;
  VAR_17->reg_offset_y = VAR_2;
  VAR_17->reg_num_x = VAR_9;
  VAR_17->reg_num_y = VAR_9;
  VAR_17->reg_report_rate = VAR_9;
  break;

 case 128:

  VAR_17->reg_threshold = VAR_8;
  VAR_17->reg_gain = VAR_4;
  VAR_17->reg_offset = VAR_7;
  VAR_17->reg_offset_x = VAR_9;
  VAR_17->reg_offset_y = VAR_9;
  break;
 }
}

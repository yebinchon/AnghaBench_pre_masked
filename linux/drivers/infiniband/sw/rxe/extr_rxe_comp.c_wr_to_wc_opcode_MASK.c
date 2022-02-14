
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ib_wr_opcode { ____Placeholder_ib_wr_opcode } ib_wr_opcode ;
typedef enum ib_wc_opcode { ____Placeholder_ib_wc_opcode } ib_wc_opcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
__attribute__((used)) static enum ib_wc_opcode FUNC_0(enum ib_wr_opcode VAR_8)
{
 switch (VAR_8) {
 case 133: return VAR_5;
 case 132: return VAR_5;
 case 130: return VAR_7;
 case 129: return VAR_7;
 case 135: return VAR_4;
 case 139: return VAR_0;
 case 138: return VAR_1;
 case 136: return VAR_3;
 case 128: return VAR_7;
 case 134: return VAR_4;
 case 137: return VAR_2;
 case 131: return VAR_6;

 default:
  return 0xff;
 }
}

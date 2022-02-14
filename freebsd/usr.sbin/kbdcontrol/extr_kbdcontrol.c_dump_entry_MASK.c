
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 char** VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(int VAR_8)
{
 if (VAR_8 & VAR_6) {
  VAR_8 &= ~VAR_6;
  switch (VAR_8) {
  case 142:
   FUNC_2("  NOP, ");
   break;
  case 147:
   FUNC_2("  LSH, ");
   break;
  case 132:
   FUNC_2("  RSH, ");
   break;
  case 154:
   FUNC_2("  CLK, ");
   break;
  case 143:
   FUNC_2("  NLK, ");
   break;
  case 130:
   FUNC_2("  SLK, ");
   break;
  case 155:
   FUNC_2(" BTAB, ");
   break;
  case 151:
   FUNC_2(" LALT, ");
   break;
  case 149:
   FUNC_2(" LCTR, ");
   break;
  case 144:
   FUNC_2(" NEXT, ");
   break;
  case 138:
   FUNC_2(" PREV, ");
   break;
  case 134:
   FUNC_2(" RCTR, ");
   break;
  case 137:
   FUNC_2(" RALT, ");
   break;
  case 157:
   FUNC_2("  ALK, ");
   break;
  case 156:
   FUNC_2("  ASH, ");
   break;
  case 145:
   FUNC_2(" META, ");
   break;
  case 135:
   FUNC_2("  RBT, ");
   break;
  case 153:
   FUNC_2("  DBG, ");
   break;
  case 128:
   FUNC_2(" SUSP, ");
   break;
  case 129:
   FUNC_2(" SPSC, ");
   break;
  case 139:
   FUNC_2("  PNC, ");
   break;
  case 146:
   FUNC_2(" LSHA, ");
   break;
  case 131:
   FUNC_2(" RSHA, ");
   break;
  case 148:
   FUNC_2("LCTRA, ");
   break;
  case 133:
   FUNC_2("RCTRA, ");
   break;
  case 150:
   FUNC_2("LALTA, ");
   break;
  case 136:
   FUNC_2("RALTA, ");
   break;
  case 152:
   FUNC_2(" HALT, ");
   break;
  case 140:
   FUNC_2(" PDWN, ");
   break;
  case 141:
   FUNC_2("PASTE, ");
   break;
  default:
    if (VAR_8 >= VAR_1 && VAR_8 <= VAR_4)
    FUNC_2(" F(%2d),", VAR_8 - VAR_1 + 1);
    else if (VAR_8 >= VAR_2 && VAR_8 <= VAR_5)
    FUNC_2(" S(%2d),", VAR_8 - VAR_2 + 1);
    else if (VAR_8 >= VAR_0 && VAR_8 <= VAR_3)
    FUNC_2(" %-4s, ", VAR_7[VAR_8 - VAR_0]);
   else
    FUNC_2(" 0x%02X, ", VAR_8);
   break;
  }
 } else if (VAR_8 == '\'') {
  FUNC_2(" '\\'', ");
 } else if (VAR_8 == '\\') {
  FUNC_2(" '\\\\', ");
 } else if (FUNC_0(VAR_8) && FUNC_1(VAR_8)) {
  FUNC_2("  '%c', ", VAR_8);
 } else {
  FUNC_2(" 0x%02X, ", VAR_8);
 }
}

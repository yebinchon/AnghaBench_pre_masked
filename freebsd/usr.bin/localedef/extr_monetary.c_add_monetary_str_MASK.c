
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char wchar_t ;
struct TYPE_2__ {char* int_curr_symbol; char* currency_symbol; char* mon_decimal_point; char* mon_thousands_sep; char* positive_sign; char* negative_sign; } ;


 int VAR_0 ;






 int FUNC_0 (char*) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 char* FUNC_1 (char*) ;

void
FUNC_2(wchar_t *VAR_3)
{
 char *VAR_4;

 if ((VAR_4 = FUNC_1(VAR_3)) == ((void*)0)) {
  VAR_0;
  return;
 }
 FUNC_0(VAR_3);
 switch (VAR_1) {
 case 132:
  VAR_2.int_curr_symbol = VAR_4;
  break;
 case 133:
  VAR_2.currency_symbol = VAR_4;
  break;
 case 131:
  VAR_2.mon_decimal_point = VAR_4;
  break;
 case 130:
  VAR_2.mon_thousands_sep = VAR_4;
  break;
 case 128:
  VAR_2.positive_sign = VAR_4;
  break;
 case 129:
  VAR_2.negative_sign = VAR_4;
  break;
 default:
  FUNC_0(VAR_4);
  VAR_0;
  break;
 }
}

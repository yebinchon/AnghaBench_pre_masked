
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lconv {char* int_curr_symbol; char* currency_symbol; char* mon_decimal_point; char* mon_thousands_sep; char* positive_sign; char* negative_sign; char int_frac_digits; char frac_digits; char p_cs_precedes; char p_sep_by_space; char n_cs_precedes; char n_sep_by_space; char p_sign_posn; char n_sign_posn; char int_p_cs_precedes; char int_p_sep_by_space; char int_n_cs_precedes; char int_n_sep_by_space; char int_p_sign_posn; char int_n_sign_posn; int mon_grouping; int grouping; } ;
 char* FUNC_0 (int ) ;
 struct lconv* FUNC_1 () ;

char *
FUNC_2(int VAR_0)
{
 struct lconv *VAR_1;
 char *VAR_2;

 VAR_2 = ((void*)0);
 VAR_1 = FUNC_1();
 switch (VAR_0) {
  case 147:
   VAR_2 = FUNC_0(VAR_1->grouping);
   break;
  case 146:
   VAR_2 = VAR_1->int_curr_symbol;
   break;
  case 149:
   VAR_2 = VAR_1->currency_symbol;
   break;
  case 138:
   VAR_2 = VAR_1->mon_decimal_point;
   break;
  case 136:
   VAR_2 = VAR_1->mon_thousands_sep;
   break;
  case 137:
   VAR_2 = FUNC_0(VAR_1->mon_grouping);
   break;
  case 131:
   VAR_2 = VAR_1->positive_sign;
   break;
  case 135:
   VAR_2 = VAR_1->negative_sign;
   break;
  case 145:
   VAR_2 = &(VAR_1->int_frac_digits);
   break;
  case 148:
   VAR_2 = &(VAR_1->frac_digits);
   break;
  case 130:
   VAR_2 = &(VAR_1->p_cs_precedes);
   break;
  case 129:
   VAR_2 = &(VAR_1->p_sep_by_space);
   break;
  case 134:
   VAR_2 = &(VAR_1->n_cs_precedes);
   break;
  case 133:
   VAR_2 = &(VAR_1->n_sep_by_space);
   break;
  case 128:
   VAR_2 = &(VAR_1->p_sign_posn);
   break;
  case 132:
   VAR_2 = &(VAR_1->n_sign_posn);
   break;
  case 141:
   VAR_2 = &(VAR_1->int_p_cs_precedes);
   break;
  case 140:
   VAR_2 = &(VAR_1->int_p_sep_by_space);
   break;
  case 144:
   VAR_2 = &(VAR_1->int_n_cs_precedes);
   break;
  case 143:
   VAR_2 = &(VAR_1->int_n_sep_by_space);
   break;
  case 139:
   VAR_2 = &(VAR_1->int_p_sign_posn);
   break;
  case 142:
   VAR_2 = &(VAR_1->int_n_sign_posn);
   break;
  default:
   break;
 }
 return (VAR_2);
}

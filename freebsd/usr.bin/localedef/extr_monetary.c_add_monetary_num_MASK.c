
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* int_frac_digits; char* frac_digits; char* p_cs_precedes; char* p_sep_by_space; char* n_cs_precedes; char* n_sep_by_space; char* p_sign_posn; char* n_sign_posn; char* int_p_cs_precedes; char* int_n_cs_precedes; char* int_p_sep_by_space; char* int_n_sep_by_space; char* int_p_sign_posn; char* int_n_sign_posn; char* mon_grouping; } ;


 int VAR_0 ;
 int FUNC_0 (char**,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;

void
FUNC_2(int VAR_4)
{
 char *VAR_5 = ((void*)0);

 (void) FUNC_0(&VAR_5, "%d", VAR_4);
 if (VAR_5 == ((void*)0)) {
  FUNC_1(VAR_3, "out of memory");
  return;
 }

 switch (VAR_1) {
 case 141:
  VAR_2.int_frac_digits = VAR_5;
  break;
 case 142:
  VAR_2.frac_digits = VAR_5;
  break;
 case 130:
  VAR_2.p_cs_precedes = VAR_5;
  break;
 case 129:
  VAR_2.p_sep_by_space = VAR_5;
  break;
 case 133:
  VAR_2.n_cs_precedes = VAR_5;
  break;
 case 132:
  VAR_2.n_sep_by_space = VAR_5;
  break;
 case 128:
  VAR_2.p_sign_posn = VAR_5;
  break;
 case 131:
  VAR_2.n_sign_posn = VAR_5;
  break;
 case 137:
  VAR_2.int_p_cs_precedes = VAR_5;
  break;
 case 140:
  VAR_2.int_n_cs_precedes = VAR_5;
  break;
 case 136:
  VAR_2.int_p_sep_by_space = VAR_5;
  break;
 case 139:
  VAR_2.int_n_sep_by_space = VAR_5;
  break;
 case 135:
  VAR_2.int_p_sign_posn = VAR_5;
  break;
 case 138:
  VAR_2.int_n_sign_posn = VAR_5;
  break;
 case 134:
  VAR_2.mon_grouping = VAR_5;
  break;
 default:
  VAR_0;
  break;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int int_n_sign_posn; int int_p_sign_posn; int int_n_sep_by_space; int int_p_sep_by_space; int int_n_cs_precedes; int int_p_cs_precedes; int n_sign_posn; int p_sign_posn; int n_sep_by_space; int n_cs_precedes; int p_sep_by_space; int p_cs_precedes; int frac_digits; int int_frac_digits; int negative_sign; int positive_sign; int mon_grouping; int mon_thousands_sep; int mon_decimal_point; int currency_symbol; int int_curr_symbol; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__ VAR_1 ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int *) ;

void
FUNC_3(void)
{
 FILE *VAR_2;

 if ((VAR_2 = FUNC_1()) == ((void*)0)) {
  return;
 }

 if ((FUNC_2(VAR_1.int_curr_symbol, VAR_2) == VAR_0) ||
     (FUNC_2(VAR_1.currency_symbol, VAR_2) == VAR_0) ||
     (FUNC_2(VAR_1.mon_decimal_point, VAR_2) == VAR_0) ||
     (FUNC_2(VAR_1.mon_thousands_sep, VAR_2) == VAR_0) ||
     (FUNC_2(VAR_1.mon_grouping, VAR_2) == VAR_0) ||
     (FUNC_2(VAR_1.positive_sign, VAR_2) == VAR_0) ||
     (FUNC_2(VAR_1.negative_sign, VAR_2) == VAR_0) ||
     (FUNC_2(VAR_1.int_frac_digits, VAR_2) == VAR_0) ||
     (FUNC_2(VAR_1.frac_digits, VAR_2) == VAR_0) ||
     (FUNC_2(VAR_1.p_cs_precedes, VAR_2) == VAR_0) ||
     (FUNC_2(VAR_1.p_sep_by_space, VAR_2) == VAR_0) ||
     (FUNC_2(VAR_1.n_cs_precedes, VAR_2) == VAR_0) ||
     (FUNC_2(VAR_1.n_sep_by_space, VAR_2) == VAR_0) ||
     (FUNC_2(VAR_1.p_sign_posn, VAR_2) == VAR_0) ||
     (FUNC_2(VAR_1.n_sign_posn, VAR_2) == VAR_0) ||
     (FUNC_2(VAR_1.int_p_cs_precedes, VAR_2) == VAR_0) ||
     (FUNC_2(VAR_1.int_n_cs_precedes, VAR_2) == VAR_0) ||
     (FUNC_2(VAR_1.int_p_sep_by_space, VAR_2) == VAR_0) ||
     (FUNC_2(VAR_1.int_n_sep_by_space, VAR_2) == VAR_0) ||
     (FUNC_2(VAR_1.int_p_sign_posn, VAR_2) == VAR_0) ||
     (FUNC_2(VAR_1.int_n_sign_posn, VAR_2) == VAR_0)) {
  return;
 }
 FUNC_0(VAR_2);
}

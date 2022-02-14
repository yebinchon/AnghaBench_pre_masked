
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_start {int dummy; } ;
struct lev_generic {int type; int b; } ;
struct lev_copyexec_result_enable {int dummy; } ;
struct lev_copyexec_result_data {int dummy; } ;
struct lev_copyexec_result_connect {int hostname_length; } ;
 int FUNC_0 (struct lev_start*) ;
 int FUNC_1 (struct lev_generic*,int) ;
 int FUNC_2 (struct lev_copyexec_result_connect*) ;
 int FUNC_3 (struct lev_copyexec_result_data*) ;
 int FUNC_4 (struct lev_copyexec_result_enable*) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int,int ) ;
 int FUNC_9 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

int FUNC_10 (struct lev_generic *VAR_3, int VAR_4) {
  int VAR_5;
  if (VAR_1 > VAR_0) {
    FUNC_7 (VAR_2);
    FUNC_6 (VAR_2);
    FUNC_5 (0);
  }
  switch (VAR_3->type) {
    case 129:
      if (VAR_4 < 24 || VAR_3->b < 0 || VAR_3->b > 4096) { return -2; }
      VAR_5 = 24 + ((VAR_3->b + 3) & -4);
      if (VAR_4 < VAR_5) { return -2; }
      return FUNC_0 ((struct lev_start *) VAR_3) >= 0 ? VAR_5 : -1;
    case 132:
    case 128:
    case 133:
    case 131:
    case 130:
      return FUNC_1 (VAR_3, VAR_4);
    case 137:
      VAR_5 = sizeof (struct lev_copyexec_result_connect);
      if (VAR_4 < VAR_5) { return -2; }
      VAR_5 += ((struct lev_copyexec_result_connect *) VAR_3)->hostname_length;
      if (VAR_4 < VAR_5) { return -2; }
      FUNC_2 ((struct lev_copyexec_result_connect *) VAR_3);
      return VAR_5;
    case 136:
      VAR_5 = sizeof (struct lev_copyexec_result_data);
      if (VAR_4 < VAR_5) { return -2; }
      FUNC_3 ( (struct lev_copyexec_result_data *) VAR_3);
      return VAR_5;
    case 135:
    case 134:
      VAR_5 = sizeof (struct lev_copyexec_result_enable);
      if (VAR_4 < VAR_5) { return -2; }
      FUNC_4 ((struct lev_copyexec_result_enable *) VAR_3);
      return VAR_5;
  }

  FUNC_8 ("unknown log event type %08x at position %lld\n", VAR_3->type, FUNC_9 ());

  return -3;

}

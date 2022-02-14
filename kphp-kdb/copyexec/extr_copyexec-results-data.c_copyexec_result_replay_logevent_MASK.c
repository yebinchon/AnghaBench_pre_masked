
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_start {int dummy; } ;
struct lev_generic {int type; int b; } ;
struct lev_copyexec_result_enable {int random_tag; } ;
struct lev_copyexec_result_data {int dummy; } ;
struct lev_copyexec_result_connect {int hostname_length; } ;
 int FUNC_0 (struct lev_start*) ;
 int FUNC_1 (struct lev_generic*,int) ;
 int FUNC_2 (char*,int const,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct lev_copyexec_result_connect*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *,struct lev_copyexec_result_data*) ;

int FUNC_7 (struct lev_generic *VAR_0, int VAR_1) {
  int VAR_2;
  switch (VAR_0->type) {
    case 130:
      if (VAR_1 < 24 || VAR_0->b < 0 || VAR_0->b > 4096) { return -2; }
      VAR_2 = 24 + ((VAR_0->b + 3) & -4);
      if (VAR_1 < VAR_2) { return -2; }
      return FUNC_0 ((struct lev_start *) VAR_0) >= 0 ? VAR_2 : -1;
    case 133:
    case 128:
    case 134:
    case 132:
    case 131:
    case 129:
      return FUNC_1 (VAR_0, VAR_1);
    case 138:
      VAR_2 = sizeof (struct lev_copyexec_result_connect);
      if (VAR_1 < VAR_2) { return -2; }
      VAR_2 += ((struct lev_copyexec_result_connect *) VAR_0)->hostname_length;
      if (VAR_1 < VAR_2) { return -2; }
      FUNC_4 ((struct lev_copyexec_result_connect *) VAR_0);
      return VAR_2;
    case 137:
      VAR_2 = sizeof (struct lev_copyexec_result_data);
      if (VAR_1 < VAR_2) { return -2; }
      FUNC_6 (((void*)0), (struct lev_copyexec_result_data *) VAR_0);
      return VAR_2;
    case 136:
    case 135:
      VAR_2 = sizeof (struct lev_copyexec_result_enable);
      if (VAR_1 < VAR_2) { return -2; }
      FUNC_5 (((struct lev_copyexec_result_enable *) VAR_0)->random_tag, (VAR_0->type == 135) ? 1 : 0 );
      return VAR_2;
  }

  FUNC_2 ("unknown log event type %08x at position %lld\n", VAR_0->type, FUNC_3());

  return -3;

}

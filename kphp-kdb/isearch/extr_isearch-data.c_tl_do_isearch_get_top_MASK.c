
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_isearch_get_top {int limit; } ;
struct tl_act_extra {scalar_t__ extra; } ;


 int VAR_0 ;
 int* FUNC_0 (int ) ;
 scalar_t__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;

int FUNC_3 (struct tl_act_extra *VAR_3) {
  struct tl_isearch_get_top *VAR_4 = (struct tl_isearch_get_top *)VAR_3->extra;

  int *VAR_5 = FUNC_0 (VAR_4->limit);

  FUNC_1 (VAR_0);
  FUNC_1 (VAR_5[0]);
  int VAR_6;
  for (VAR_6 = 1; VAR_6 <= VAR_5[0]; VAR_6++) {
    FUNC_2 (VAR_2 + VAR_1[VAR_5[VAR_6]] + 1);
  }

  return 1;
}

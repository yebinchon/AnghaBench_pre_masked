
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t op; int word; } ;
typedef TYPE_1__ query_node_t ;


 int FUNC_0 (char*,char const*,char*,int ) ;

void FUNC_1 (const char *VAR_0, query_node_t *VAR_1) {
  static char *VAR_2[] = {"qn_false", "qn_true", "qn_word", "qn_and", "qn_or", "qn_minus", "qn_error", "qn_cum_and", "qn_cum_or"};
  FUNC_0 ("%s: %s %llx\n", VAR_0, VAR_2[VAR_1->op], VAR_1->word);
}

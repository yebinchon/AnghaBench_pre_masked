
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ op; scalar_t__ frequency; scalar_t__ word; } ;
typedef TYPE_1__ query_node_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0 (const void *VAR_1, const void *VAR_2) {
  const query_node_t *VAR_3 = *((query_node_t **) VAR_1);
  const query_node_t *VAR_4 = *((query_node_t **) VAR_2);
  if (VAR_3->op == VAR_4->op) {
    if (VAR_3->op == VAR_0) {

      if (VAR_3->frequency < VAR_4->frequency) { return -1; }
      if (VAR_3->frequency > VAR_4->frequency) { return 1; }

      if (VAR_3->word < VAR_4->word) { return -1; }
      if (VAR_3->word > VAR_4->word) { return 1; }
    }
  } else {
    if (VAR_3->op == VAR_0) { return -1; }
    if (VAR_4->op == VAR_0) { return 1; }
  }
  if (VAR_3 < VAR_4) { return -1; }
  if (VAR_3 > VAR_4) { return 1; }
  return 0;
}

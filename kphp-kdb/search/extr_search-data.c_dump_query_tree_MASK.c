
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int op; struct TYPE_3__* right; struct TYPE_3__* left; int word; } ;
typedef TYPE_1__ query_node_t ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ) ;






 int VAR_0 ;

__attribute__((used)) static void FUNC_2 (query_node_t *VAR_1) {
  if (!VAR_1) {
    FUNC_0 (VAR_0, "(NULL)");
    return;
  }
  switch (VAR_1->op) {
    case 132:
      FUNC_0 (VAR_0, "(false)");
      return;
    case 129:
      FUNC_0 (VAR_0, "(true)");
      return;
    case 128:
      FUNC_0 (VAR_0, "(word %016x, freq = %d)", VAR_1->word, FUNC_1 (VAR_1->word));
      return;
    case 133:
      FUNC_0 (VAR_0, "(and ");
      break;
    case 130:
      FUNC_0 (VAR_0, "(or ");
      break;
    case 131:
      FUNC_0 (VAR_0, "(minus ");
      break;
    default:
      FUNC_0 (VAR_0, "(???%d ", VAR_1->op);
  }
  FUNC_2 (VAR_1->left);
  FUNC_0 (VAR_0, " ");
  FUNC_2 (VAR_1->right);
  FUNC_0 (VAR_0, ")");
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ op; int head; struct TYPE_4__* right; struct TYPE_4__* left; } ;
typedef TYPE_1__ query_node_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_2 (query_node_t *VAR_4) {
  if (!VAR_4) { return; }
  query_node_t *VAR_5 = VAR_4->left, *VAR_6 = VAR_4->right;
  FUNC_2 (VAR_5);
  FUNC_2 (VAR_6);
  if (VAR_4->op == VAR_0 || VAR_4->op == VAR_3) {
    VAR_4->op = (VAR_4->op == VAR_0) ? VAR_1 : VAR_2;
    if (VAR_5->op == VAR_4->op) {
      if (VAR_6->op == VAR_4->op) {

        FUNC_0 (VAR_5->head, VAR_6->head);
        VAR_4->head = VAR_5->head;
      } else {
        FUNC_0 (VAR_5->head, FUNC_1 (VAR_6));
        VAR_4->head = VAR_5->head;
      }
    } else {
      if (VAR_6->op == VAR_4->op) {
        FUNC_0 (VAR_6->head, FUNC_1 (VAR_5));
        VAR_4->head = VAR_6->head;
      } else {
        VAR_4->head = FUNC_1 (VAR_5);
        FUNC_0 (VAR_4->head, FUNC_1 (VAR_6));
      }
    }
  }
}

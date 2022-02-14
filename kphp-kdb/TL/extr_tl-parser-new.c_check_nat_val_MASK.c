
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_var_value {long long num_val; struct tl_combinator_tree* val; } ;
struct tl_combinator_tree {scalar_t__ type; scalar_t__ type_flags; int data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 struct tl_combinator_tree* FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int,char*) ;

void FUNC_4 (struct tl_var_value VAR_5) {
  if (!VAR_1) { return; }
  long long VAR_6 = VAR_5.num_val;
  struct tl_combinator_tree *VAR_7 = VAR_5.val;
  if (VAR_7->type == VAR_4) { return;}
  while (1) {
    if (VAR_7->type == VAR_3) {
      if (VAR_6 + VAR_7->type_flags < 0) {
        VAR_1 = 0;
        FUNC_3 (3, "Variable has negative value. Error.\n");
        return;
      } else {
        return;
      }
    }
    FUNC_0 (VAR_7->type == VAR_2);
    VAR_6 += VAR_7->type_flags;
    VAR_6 += FUNC_2 (VAR_0, VAR_7->data);
    VAR_7 = FUNC_1 (VAR_0, VAR_7->data);
    if (!VAR_7) { return;}
  }
}

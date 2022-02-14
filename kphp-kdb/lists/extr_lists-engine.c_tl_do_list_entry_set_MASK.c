
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_list_entry_set {scalar_t__ text_len; int op; int text; int object_id; int list_id; int ip; int value; int flags; } ;
struct tl_act_extra {scalar_t__ extra; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int,int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ,scalar_t__) ;
 int FUNC_3 (int ) ;

int FUNC_4 (struct tl_act_extra *VAR_2) {
  struct tl_list_entry_set *VAR_3 = (void *)VAR_2->extra;
  int VAR_4;
  if (VAR_3->text_len < 0) {
    VAR_4 = FUNC_1 (VAR_3->list_id, VAR_3->object_id, VAR_3->op, VAR_3->flags, VAR_3->value, &VAR_3->ip);
    if (VAR_4 == -2) { return -2; }
    if (VAR_4 <= 0) {
      FUNC_3 (VAR_0);
      return 0;
    }
  } else {
    VAR_4 = FUNC_1 (VAR_3->list_id, VAR_3->object_id, VAR_3->op == 0 ? 3 : VAR_3->op , VAR_3->flags, VAR_3->value, &VAR_3->ip);

    if (VAR_4 == -2) { return -2; }
    if (VAR_4 <= 0) {
      FUNC_3 (VAR_0);
      return 0;
    }

    VAR_4 = FUNC_2 (VAR_3->list_id, VAR_3->object_id, VAR_3->text, VAR_3->text_len);
    FUNC_0 (VAR_4 >= 0);
  }

  FUNC_3 (VAR_1);
  return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_list_entry_set_text {scalar_t__ len; int text; int object_id; int list_id; } ;
struct tl_act_extra {int size; scalar_t__ extra; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct tl_act_extra* FUNC_2 (int ,int,int ) ;
 int VAR_3 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;

struct tl_act_extra *FUNC_6 (void) {
  struct tl_act_extra *VAR_4 = FUNC_2 (VAR_2, sizeof (struct tl_list_entry_set_text), VAR_3);
  struct tl_list_entry_set_text *VAR_5 = (void *)VAR_4->extra;
  VAR_0;
  if (FUNC_0 (&VAR_5->list_id) < 0) {
    return 0;
  }
  if (FUNC_1 (&VAR_5->object_id) < 0) {
    return 0;
  }

  VAR_5->len = FUNC_5 (VAR_5->text, VAR_1 - 1);
  VAR_4->size += VAR_5->len + 1;
  FUNC_3 ();
  if (FUNC_4 ()) {
    return 0;
  }
  return VAR_4;
}

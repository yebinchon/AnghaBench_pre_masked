
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_list_entry_incr_or_create {int value; int flags; int object_id; int list_id; } ;
struct tl_act_extra {scalar_t__ extra; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 struct tl_act_extra* FUNC_2 (int ,int,int ) ;
 int VAR_2 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;

struct tl_act_extra *FUNC_7 (int VAR_3) {
  struct tl_act_extra *VAR_4 = FUNC_2 (VAR_1, sizeof (struct tl_list_entry_incr_or_create), VAR_2);
  struct tl_list_entry_incr_or_create *VAR_5 = (void *)VAR_4->extra;
  VAR_0;
  if (FUNC_0 (&VAR_5->list_id) < 0) {
    return 0;
  }
  if (FUNC_1 (&VAR_5->object_id) < 0) {
    return 0;
  }

  VAR_5->flags = FUNC_5 ();
  VAR_5->value = VAR_3 ? -FUNC_6 () : FUNC_6 ();

  FUNC_3 ();
  if (FUNC_4 ()) {
    return 0;
  }

  return VAR_4;
}

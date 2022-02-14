
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_list_entry_incr_or_create {int value; int flags; int object_id; int list_id; } ;
struct tl_act_extra {scalar_t__ extra; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 long long FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (long long) ;

int FUNC_3 (struct tl_act_extra *VAR_3) {
  struct tl_list_entry_incr_or_create *VAR_4 = (void *)VAR_3->extra;
  long long VAR_5 = FUNC_0 (VAR_4->list_id, VAR_4->object_id, VAR_4->flags, VAR_4->value, 0);
  if (VAR_5 == (-1ll << 63) && VAR_2) { return -2; }
  if (VAR_5 == (-1ll << 63)) {
    FUNC_1 (VAR_0);
  } else {
    FUNC_1 (VAR_1);
    FUNC_2 (VAR_5);
  }
  return 0;
}

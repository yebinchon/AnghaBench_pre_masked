
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int local_id; } ;
typedef TYPE_1__ user ;
struct tl_get_photo {int mask; int force; int photo_id; int user_id; } ;
struct tl_act_extra {scalar_t__ extra; } ;
typedef int actual_object ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int VAR_4 ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int ,int ,int *) ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_5 ;

int FUNC_9 (struct tl_act_extra *VAR_6) {
  struct tl_get_photo *VAR_7 = (struct tl_get_photo *)VAR_6->extra;

  FUNC_0 (FUNC_2 (VAR_7->user_id) && FUNC_1 (VAR_7->photo_id));
  FUNC_0 (!VAR_4 && !VAR_5);

  user *VAR_8 = FUNC_3 (VAR_7->user_id);
  if (VAR_8 == ((void*)0)) {
    FUNC_6 (VAR_2);
    return 0;
  }

  FUNC_5 (VAR_8, VAR_8->local_id, VAR_0);
  if (!FUNC_8 (VAR_8)) {
    return -2;
  }

  actual_object VAR_9;
  if (FUNC_7 (VAR_8, VAR_7->photo_id, VAR_7->force, &VAR_9) < 0) {
    FUNC_6 (VAR_2);
    return 0;
  }

  FUNC_6 (VAR_3);
  FUNC_4 (&VAR_9, VAR_1, VAR_7->mask);
  return 0;
}

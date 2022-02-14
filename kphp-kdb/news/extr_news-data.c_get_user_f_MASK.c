
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int userplace_t ;
struct TYPE_8__ {int priv_mask; int user_id; int * last; int * first; } ;
typedef TYPE_1__ user_t ;
struct TYPE_9__ {int user_id; int * last; int * first; } ;
typedef TYPE_2__ recommend_user_t ;
typedef int recommend_item_t ;
struct TYPE_10__ {int user_id; int * last; int * first; } ;
typedef TYPE_3__ notify_user_t ;
typedef int item_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__** VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int,char*,...) ;
 TYPE_1__* FUNC_4 (int) ;

__attribute__((used)) static user_t *FUNC_5 (int VAR_6, int VAR_7) {
  FUNC_3 (5, "get_user_f: user_id = %d, force = %d\n", VAR_6, VAR_7);
  if (VAR_7 == 0) {
    return FUNC_2 (VAR_6);
  }
  int VAR_8 = FUNC_1 (VAR_6);
  FUNC_3 (5, "conv_id = %d\n", VAR_8);
  user_t *VAR_9;
  if (VAR_8 < 0) { return 0; }
  VAR_9 = VAR_3[VAR_8];
  if (VAR_9) { return VAR_9; }
  if (VAR_2) {
    VAR_9 = FUNC_4 (sizeof (user_t));
    VAR_9->priv_mask = 1;
    VAR_9->first = VAR_9->last = (item_t *) VAR_9;
    VAR_9->user_id = VAR_8;
  } else if (VAR_0) {
    VAR_9 = FUNC_4 (sizeof (notify_user_t));
    ((notify_user_t *) VAR_9)->first = ((notify_user_t *) VAR_9)->last = (userplace_t *) VAR_9;
    ((notify_user_t *) VAR_9)->user_id = VAR_8;
  } else {
    FUNC_0 (VAR_1);
    VAR_9 = FUNC_4 (sizeof (recommend_user_t));
    ((recommend_user_t *) VAR_9)->first = ((recommend_user_t *) VAR_9)->last = (recommend_item_t *) VAR_9;
    ((recommend_user_t *) VAR_9)->user_id = VAR_8;
  }
  FUNC_3 (5, "creating new user: U = %p, user_id = %d\n", VAR_9, VAR_6);
  VAR_3[VAR_8] = VAR_9;
  if (VAR_8 > VAR_4) { VAR_4 = VAR_8; }
  VAR_5++;
  return VAR_9;
}

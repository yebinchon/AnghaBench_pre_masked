
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int delayed_tree; int msg_tree; } ;
typedef TYPE_3__ user_t ;
struct TYPE_10__ {int flags; int clear_mask; int set_mask; int y; TYPE_2__* value; TYPE_1__* msg; } ;
typedef TYPE_4__ tree_t ;
struct imessage {int flags; } ;
struct TYPE_8__ {int flags; } ;
struct TYPE_7__ {int flags; } ;







 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_3__* FUNC_2 (int) ;
 int FUNC_3 (struct imessage*,int,int,int) ;
 TYPE_4__* FUNC_4 (int ,int) ;

int FUNC_5 (int VAR_0, int VAR_1, int VAR_2) {
  user_t *VAR_3 = FUNC_2 (VAR_0);
  tree_t *VAR_4, *VAR_5;
  int VAR_6, VAR_7;
  struct imessage VAR_8;

  if (VAR_1 <= 0 || FUNC_1 (VAR_0) < 0) {
    return -1;
  }
  if (VAR_3) {
    VAR_4 = FUNC_4 (VAR_3->msg_tree, VAR_1);
    VAR_5 = FUNC_4 (VAR_3->delayed_tree, VAR_1);
    if (VAR_5 && VAR_5->flags == -1) {
      return -1;
    }
    if (VAR_5 && VAR_2 < 0 && ((VAR_5->clear_mask | VAR_5->set_mask | -0x10000) == -1)) {
      return VAR_5->set_mask;
    }
    if (VAR_4) {
      switch (VAR_4->y & 7) {
      case 132:
        return -1;
      case 131:
      case 130:
        FUNC_0 (!VAR_5);
        VAR_6 = VAR_4->msg->flags;
        break;
      case 129:
        VAR_6 = VAR_4->flags;
        break;
      case 128:
        VAR_6 = VAR_4->value->flags;
        break;
      default:
        FUNC_0 (0);
      }
      if (VAR_5) {
        VAR_6 = (VAR_6 & ~VAR_5->clear_mask) | VAR_5->set_mask;
      }
      return VAR_6;
    }
  }

  VAR_7 = FUNC_3 (&VAR_8, VAR_0, VAR_1, VAR_2 > 0);

  if (VAR_7 < 0) {
    return VAR_7;
  }
  if (!VAR_7) {
    return -1;
  }

  return VAR_8.flags;
}

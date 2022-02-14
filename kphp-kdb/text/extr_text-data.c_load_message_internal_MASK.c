
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {TYPE_3__* mf; int edit_text_tree; int msg_tree; } ;
typedef TYPE_4__ user_t ;
struct TYPE_17__ {int y; int flags; scalar_t__ edit_text; TYPE_2__* value; TYPE_1__* msg; } ;
typedef TYPE_5__ tree_t ;
struct imessage {int flags; TYPE_7__* fmsg; scalar_t__ edit_text; TYPE_2__* value_actions; TYPE_1__* msg; scalar_t__ m_extra; } ;
struct file_user_list_entry {int user_last_local_id; int user_data_size; } ;
struct TYPE_18__ {char* data; } ;
typedef TYPE_6__ core_mf_t ;
struct TYPE_19__ {int flags; } ;
struct TYPE_15__ {int len; } ;
struct TYPE_14__ {int flags; } ;
struct TYPE_13__ {int flags; } ;







 int FUNC_0 (int) ;
 char* FUNC_1 (TYPE_4__*) ;
 TYPE_6__* FUNC_2 (int) ;
 TYPE_5__* FUNC_3 (int ,int) ;
 TYPE_7__* FUNC_4 (char*,int ,int,TYPE_4__*) ;

int FUNC_5 (struct imessage *VAR_0, user_t *VAR_1, struct file_user_list_entry *VAR_2, int VAR_3, int VAR_4, int VAR_5) {
  tree_t *VAR_6;
  char *VAR_7;




  VAR_6 = 0;
  VAR_0->msg = 0;
  VAR_0->fmsg = 0;
  VAR_0->m_extra = 0;
  VAR_0->flags = -1;
  VAR_0->value_actions = 0;
  VAR_0->edit_text = 0;

  if (VAR_1) {

    VAR_6 = FUNC_3 (VAR_1->msg_tree, VAR_4);
    if (VAR_6) {
      switch (VAR_6->y & 7) {
      case 131:
      case 130:
        VAR_0->msg = VAR_6->msg;
        VAR_0->flags = VAR_6->msg->flags;
        return 1;
      case 132:
        return 0;
      case 129:
        VAR_0->flags = VAR_6->flags;
        break;
      case 128:
        VAR_0->flags = VAR_6->value->flags;
        VAR_0->value_actions = VAR_6->value;
        break;
      default:
        FUNC_0 (0);
      }
    }
    tree_t *VAR_8 = FUNC_3 (VAR_1->edit_text_tree, VAR_4);
    if (VAR_8) {
      VAR_0->edit_text = VAR_8->edit_text;
    }
  } else {

    VAR_6 = 0;
  }
  if (!VAR_2 || VAR_4 > VAR_2->user_last_local_id) {
    FUNC_0 (!VAR_6);
    return 0;
  }
  if (!VAR_1 || !FUNC_1 (VAR_1)) {
    if (!VAR_5) {
      return -2;
    }
    core_mf_t *VAR_9 = FUNC_2 (VAR_3);
    if (!VAR_9) {
      return -2;
    }
    VAR_7 = VAR_9->data;
  } else {
    VAR_7 = FUNC_1 (VAR_1);
    FUNC_0 (VAR_1->mf && VAR_1->mf->len >= VAR_2->user_data_size);
  }

  VAR_0->fmsg = FUNC_4 (VAR_7, VAR_2->user_data_size, VAR_4, VAR_1);
  FUNC_0 (!VAR_6 || VAR_0->fmsg);
  if (VAR_0->flags < 0 && VAR_0->fmsg) {
    VAR_0->flags = VAR_0->fmsg->flags & 0xffff;
  }
  return VAR_0->fmsg ? 1 : 0;
}

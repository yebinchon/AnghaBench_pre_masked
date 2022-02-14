
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tree_secure_receive_answer {struct secure_receive_answer* x; } ;
struct secure_receive_answer {int answer_op; int answer_len; int answer; scalar_t__ h; int pid; int qid; } ;
struct TYPE_4__ {TYPE_1__* h; int * remote_pid; int in_type; } ;
struct TYPE_3__ {int qid; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 struct tree_secure_receive_answer* FUNC_5 (int ,struct secure_receive_answer*) ;

int FUNC_6 (void **VAR_3, void **VAR_4) {
  struct secure_receive_answer VAR_5;
  VAR_5.qid = VAR_0->h->qid;
  VAR_5.pid = *VAR_0->remote_pid;
  struct tree_secure_receive_answer *VAR_6 = FUNC_5 (VAR_2, &VAR_5);
  if (!VAR_6) {
    VAR_1;
  } else {
    struct secure_receive_answer *VAR_7 = VAR_6->x;
    FUNC_0 (VAR_7->answer);
    FUNC_1 (VAR_0->in_type, VAR_0->remote_pid, VAR_0->h->qid);

    if (VAR_7->h) {
      FUNC_3 (VAR_7->h);
    }
    FUNC_4 (VAR_7->answer, VAR_7->answer_len);
    FUNC_2 (VAR_7->answer_op);
    return -1;
  }
}

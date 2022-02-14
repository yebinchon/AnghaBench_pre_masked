
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct secure_receive_answer {int answer_len; char* answer; int binlog; int answer_op; int pid; int qid; int binlog_pos; scalar_t__ h; } ;
struct rpc_query {int pid; int old_qid; } ;
struct lev_answer_tx {int answer_len; char* answer; int op; int pid; int qid; } ;
struct TYPE_4__ {TYPE_1__* h; } ;
struct TYPE_3__ {int real_op; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct lev_answer_tx* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 char* FUNC_6 (int) ;
 int FUNC_7 (char*,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_1__*,int*,int) ;
 int FUNC_11 (int ,struct secure_receive_answer*,int ) ;
 struct secure_receive_answer* FUNC_12 (int) ;

int FUNC_13 (void **VAR_6, void **VAR_7, int VAR_8) {
  struct rpc_query *VAR_9 = *VAR_7;
  struct secure_receive_answer *VAR_10 = FUNC_12 (sizeof (*VAR_10));
  VAR_10->qid = VAR_9->old_qid;
  VAR_10->pid = VAR_9->pid;

  VAR_10->h = 0;
  static char VAR_11[(1 << 17)];
  int VAR_12 = FUNC_10 (VAR_0->h, (int *)VAR_11, (1 << 17));
  FUNC_1 (VAR_12 >= 0);
  VAR_10->answer_op = VAR_0->h->real_op;
  VAR_10->answer_len = FUNC_9 () + VAR_12;
  VAR_10->answer = FUNC_6 (VAR_10->answer_len);
  VAR_10->binlog = 0;
  FUNC_7 (VAR_10->answer, VAR_11, VAR_12);


  FUNC_8 (VAR_10->answer + VAR_12, VAR_10->answer_len - VAR_12);
  VAR_5 = FUNC_11 (VAR_5, VAR_10, FUNC_5 ());
  VAR_4 ++;
  if (VAR_8) {
    VAR_10->binlog_pos = FUNC_4 ();
    FUNC_3 (VAR_10->binlog_pos, 0);
    struct lev_answer_tx *VAR_13 = FUNC_0 (VAR_1, sizeof (*VAR_13) + VAR_10->answer_len, 0);
    VAR_13->qid = VAR_10->qid;
    VAR_13->pid = VAR_10->pid;
    VAR_13->op = VAR_10->answer_op;
    VAR_13->answer_len = VAR_10->answer_len;
    FUNC_7 (VAR_13->answer, VAR_10->answer, VAR_10->answer_len);
    VAR_10->binlog = 1;
    if (VAR_3 & 2) {
      FUNC_2 (0);
    }
  }
  VAR_2;
}

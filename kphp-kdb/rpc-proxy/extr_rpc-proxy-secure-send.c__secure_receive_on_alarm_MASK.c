
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct secure_receive_answer {int answer_len; char* answer; int binlog; int answer_op; int pid; int qid; int binlog_pos; scalar_t__ h; } ;
struct rpc_query {scalar_t__ start_time; int pid; int old_qid; } ;
struct lev_answer_tx {int answer_len; char* answer; int op; int pid; int qid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct lev_answer_tx* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 char* FUNC_6 (int) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*,int ,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (char*,char*,scalar_t__) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (int ,struct secure_receive_answer*,int ) ;
 struct secure_receive_answer* FUNC_13 (int) ;

int FUNC_14 (void **VAR_8, void **VAR_9, int VAR_10) {
  struct rpc_query *VAR_11 = *VAR_9;
  struct secure_receive_answer *VAR_12 = FUNC_13 (sizeof (*VAR_12));
  VAR_12->h = 0;
  VAR_12->qid = VAR_11->old_qid;
  VAR_12->pid = VAR_11->pid;
  VAR_12->answer_op = VAR_2;
  static char VAR_13 [1000];
  FUNC_9 (VAR_13 + 1, "Query timeout: working_time = %lf", VAR_5 - VAR_11->start_time);
  FUNC_11 (VAR_13 + 1, VAR_3);
  int VAR_14 = FUNC_10 (VAR_13 + 1) + 1;
  int VAR_15 = ((VAR_14 + 3) & ~3) - VAR_14;
  FUNC_8 (VAR_13 + VAR_14, 0, VAR_15);
  VAR_13[0] = VAR_14;
  VAR_14 += VAR_15;
  FUNC_1 (VAR_14 % 4 == 0);
  VAR_12->answer_len = 4 + VAR_14;
  VAR_12->answer = FUNC_6 (VAR_12->answer_len);
  VAR_12->binlog = 0;
  *(int *)VAR_12->answer = VAR_3;
  FUNC_7 (((char *)(VAR_12->answer)) + 4, VAR_13, VAR_14);
  VAR_7 = FUNC_12 (VAR_7, VAR_12, FUNC_5 ());
  VAR_6 ++;
  if (VAR_10) {
    VAR_12->binlog_pos = FUNC_4 ();
    FUNC_3 (VAR_12->binlog_pos, 0);
    struct lev_answer_tx *VAR_16 = FUNC_0 (VAR_0, sizeof (*VAR_16) + VAR_12->answer_len, 0);
    VAR_16->qid = VAR_12->qid;
    VAR_16->pid = VAR_12->pid;
    VAR_16->op = VAR_12->answer_op;
    VAR_16->answer_len = VAR_12->answer_len;
    FUNC_7 (VAR_16->answer, VAR_12->answer, VAR_12->answer_len);
    VAR_12->binlog = 1;
    if (VAR_4 & 2) {
      FUNC_2 (0);
    }
  }
  VAR_1;
}

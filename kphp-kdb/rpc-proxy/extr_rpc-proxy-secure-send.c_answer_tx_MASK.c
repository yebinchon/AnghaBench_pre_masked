
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct process_id {int dummy; } ;
struct secure_receive_answer {long long qid; int answer_op; int binlog; int answer_len; int binlog_pos; int answer; struct process_id pid; scalar_t__ h; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int ,struct secure_receive_answer*,int ) ;
 struct secure_receive_answer* FUNC_6 (int) ;

void FUNC_7 (long long VAR_2, struct process_id *VAR_3, int VAR_4, int VAR_5, int *VAR_6) {
  struct secure_receive_answer *VAR_7 = FUNC_6 (sizeof (*VAR_7));
  VAR_7->h = 0;
  VAR_7->qid = VAR_2;
  VAR_7->pid = *VAR_3;
  VAR_7->answer_op = VAR_4;
  VAR_7->binlog = 1;
  VAR_7->answer_len = VAR_5;
  VAR_7->answer = FUNC_3 (VAR_7->answer_len);
  FUNC_4 (VAR_7->answer, VAR_6, VAR_5);
  VAR_1 = FUNC_5 (VAR_1, VAR_7, FUNC_2 ());
  VAR_0 ++;
  FUNC_0 (FUNC_1 (), 1);
  VAR_7->binlog_pos = FUNC_1 ();
}

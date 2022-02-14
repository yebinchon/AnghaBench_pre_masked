
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_secure_receive_answer {struct secure_receive_answer* x; } ;
struct process_id {int dummy; } ;
struct secure_receive_answer {long long qid; int binlog_pos; scalar_t__ h; int answer; struct process_id pid; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,struct secure_receive_answer*) ;
 struct tree_secure_receive_answer* FUNC_4 (int ,struct secure_receive_answer*) ;
 int FUNC_5 (struct secure_receive_answer*,int) ;

void FUNC_6 (long long VAR_2, struct process_id *VAR_3) {
  struct secure_receive_answer VAR_4;
  VAR_4.qid = VAR_2;
  VAR_4.pid = *VAR_3;
  struct tree_secure_receive_answer *VAR_5 = FUNC_4 (VAR_1, &VAR_4);
  if (VAR_5) {
    VAR_1 = FUNC_3 (VAR_1, VAR_5->x);
    struct secure_receive_answer *VAR_6 = VAR_5->x;
    VAR_0 --;
    FUNC_1 (VAR_6->answer);
    if (VAR_6->h) {
      FUNC_2 (VAR_6->h);
    }
    FUNC_0 (VAR_6->binlog_pos, 1);
    FUNC_5 (VAR_6, sizeof (*VAR_6));
  }
}

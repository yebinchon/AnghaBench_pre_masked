
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_query_tx {int data_size; int data; int timeout; int cluster_id; int pid; int old_qid; int qid; } ;
struct lev_query_forget {int qid; } ;
struct lev_generic {int type; } ;
struct lev_answer_tx {int answer_len; int answer; int op; int pid; int qid; } ;
struct lev_answer_rx {int qid; } ;
struct lev_answer_forget {int pid; int qid; } ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ,int ,int ) ;
 int FUNC_3 (struct lev_generic*,int) ;
 int FUNC_4 (int ,char*,int,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int *,int ,int ,int ,int ) ;
 int VAR_0 ;

int FUNC_8 (struct lev_generic *VAR_1, int VAR_2) {
  switch (VAR_1->type) {
  case 130:
    return (VAR_2 < 24 ? -2 : 24);
  case 135:
  case 128:
  case 136:
  case 131:
  case 132:
  case 129:
  case 137:
    return FUNC_3 (VAR_1, VAR_2);
  case 134:
    {
      struct lev_query_forget *VAR_3 = (void *)VAR_1;
      if (VAR_2 < sizeof (*VAR_3)) { return -2; }
      FUNC_6 (VAR_3->qid);
      return sizeof (*VAR_3);
    }
  case 140:
    {
      struct lev_answer_forget *VAR_4 = (void *)VAR_1;
      if (VAR_2 < sizeof (*VAR_4)) { return -2; }
      FUNC_0 (VAR_4->qid, &VAR_4->pid);
      return sizeof (*VAR_4);
    }

  case 133:
    {
      struct lev_query_tx *VAR_5 = (void *)VAR_1;
      if (VAR_2 < sizeof (*VAR_5)) { return -2; }
      if (VAR_2 < sizeof (*VAR_5) + VAR_5->data_size) { return -2; }
      FUNC_7 (VAR_5->qid, VAR_5->old_qid, &VAR_5->pid, VAR_5->cluster_id, VAR_5->timeout, VAR_5->data_size, VAR_5->data);
      return sizeof (*VAR_5) + VAR_5->data_size;
    }
  case 138:
    {
      struct lev_answer_tx *VAR_6 = (void *)VAR_1;
      if (VAR_2 < sizeof (*VAR_6)) { return -2; }
      if (VAR_2 < sizeof (*VAR_6) + VAR_6->answer_len) { return -2; }
      FUNC_2 (VAR_6->qid, &VAR_6->pid, VAR_6->op, VAR_6->answer_len, VAR_6->answer);
      return sizeof (*VAR_6) + VAR_6->answer_len;
    }
  case 139:
    {
      struct lev_answer_rx *VAR_7 = (void *)VAR_1;
      if (VAR_2 < sizeof (*VAR_7)) { return -2; }
      FUNC_1 (VAR_7->qid);
      return sizeof (*VAR_7);
    }
  default:
    FUNC_4 (VAR_0, "unknown log event type %08x at position %d\n", VAR_1->type, FUNC_5());
    return -1;
  }
}

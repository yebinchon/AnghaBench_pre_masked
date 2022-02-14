
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct secure_send_extra {int data_size; int data; } ;
struct rpc_query {struct secure_send_extra* extra; int qid; } ;
struct process_id {int port; int ip; } ;
struct connection {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct connection* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct connection*,int ) ;
 int FUNC_4 (int ,int ) ;

void FUNC_5 (struct rpc_query *VAR_2, struct process_id *VAR_3) {
  VAR_1 ++;
  struct connection *VAR_4 = FUNC_0 (FUNC_1 (VAR_3->ip, VAR_3->port), 0);
  if (!VAR_4) { return; }
  FUNC_3 (VAR_4, VAR_2->qid);
  struct secure_send_extra *VAR_5 = VAR_2->extra;
  FUNC_4 (VAR_5->data, VAR_5->data_size);
  FUNC_2 (VAR_0);
}

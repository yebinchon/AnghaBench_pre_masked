
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_queue {int remaining; int completed; } ;
struct rpc_query {scalar_t__ status; scalar_t__ queue_id; int qid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct rpc_queue* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2 (struct rpc_query *VAR_2) {
  if (VAR_2->queue_id && (VAR_2->status == VAR_1 || VAR_2->status == VAR_0)) {
    struct rpc_queue *VAR_3 = FUNC_0 (VAR_2->queue_id);
    if (VAR_3) {
      VAR_3->completed = FUNC_1 (VAR_3->completed, VAR_2->qid);
      VAR_3->remaining --;
    }
    VAR_2->queue_id = 0;
  }
}

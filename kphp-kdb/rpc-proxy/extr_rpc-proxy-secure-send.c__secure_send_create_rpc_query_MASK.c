
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct secure_send_extra {scalar_t__ data_size; int binlog; int data; int timeout; int pid; int binlog_pos; scalar_t__ state; } ;
struct rpc_query {int old_qid; int qid; struct secure_send_extra* extra; } ;
struct lev_query_tx {scalar_t__ data_size; int data; int timeout; int pid; int cluster_id; int old_qid; int qid; } ;
struct TYPE_6__ {int id; int timeout; } ;
struct TYPE_5__ {int remote_pid; } ;
struct TYPE_4__ {scalar_t__ out_pos; } ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct lev_query_tx* FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 struct rpc_query* FUNC_3 (long long) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,int ,scalar_t__) ;
 int FUNC_9 (int ,int ,scalar_t__) ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 scalar_t__ FUNC_10 (int ,scalar_t__) ;
 scalar_t__ VAR_7 ;
 struct secure_send_extra* FUNC_11 (int) ;

struct rpc_query *FUNC_12 (long long VAR_8, int VAR_9) {
  struct rpc_query *VAR_10 = FUNC_3 (VAR_8);
  if (!VAR_10) { return VAR_10; }
  struct secure_send_extra *VAR_11 = FUNC_11 (sizeof (*VAR_11));
  VAR_11->state = 0;
  VAR_11->data_size = VAR_6.out_pos;
  VAR_11->data = FUNC_7 (VAR_11->data_size);
  FUNC_9 (VAR_11->data, 0, VAR_11->data_size);
  FUNC_2 (VAR_3 == VAR_7);
  VAR_11->pid = FUNC_0(VAR_2)->remote_pid;
  VAR_11->timeout = VAR_0->timeout;
  VAR_11->binlog = 0;
  FUNC_2 (FUNC_10 (VAR_11->data, VAR_11->data_size) == VAR_11->data_size);
  VAR_5 ++;





  VAR_10->extra = VAR_11;
  if (VAR_9) {
    VAR_11->binlog_pos = FUNC_6 ();
    FUNC_5 (VAR_11->binlog_pos, 0);
    struct lev_query_tx *VAR_12 = FUNC_1 (VAR_1, sizeof (*VAR_12) + VAR_11->data_size, 0);
    VAR_12->qid = VAR_10->qid;
    VAR_12->old_qid = VAR_10->old_qid;
    VAR_12->cluster_id = VAR_0->id;
    VAR_12->data_size = VAR_11->data_size;
    VAR_12->pid = VAR_11->pid;
    VAR_12->timeout = VAR_11->timeout;
    FUNC_8 (VAR_12->data, VAR_11->data, VAR_11->data_size);
    VAR_11->binlog = 1;
    if (VAR_4 & 2) {
      FUNC_4 (0);
    }
  }
  return VAR_10;
}

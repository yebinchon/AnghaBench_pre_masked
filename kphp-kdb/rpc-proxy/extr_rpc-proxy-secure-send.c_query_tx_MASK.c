
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct process_id {int dummy; } ;
struct secure_send_extra {int data_size; double timeout; int binlog; int binlog_pos; struct process_id pid; int data; scalar_t__ state; } ;
struct rpc_query_type {scalar_t__ on_free; scalar_t__ on_alarm; scalar_t__ on_answer; } ;
struct rpc_query {struct secure_send_extra* extra; } ;
struct TYPE_4__ {scalar_t__* fun_pos; scalar_t__ funs; } ;
struct TYPE_5__ {TYPE_1__ methods; } ;


 TYPE_2__* VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct rpc_query*) ;
 struct rpc_query* FUNC_1 (long long,struct process_id,long long,int ,struct rpc_query_type,double) ;
 TYPE_2__* FUNC_2 (long long) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int const*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 struct secure_send_extra* FUNC_7 (int) ;

void FUNC_8 (long long VAR_6, long long VAR_7, struct process_id *VAR_8, long long VAR_9, double VAR_10, int VAR_11, const int *VAR_12) {
  struct rpc_query_type VAR_13;
  VAR_0 = FUNC_2 (VAR_9);
  VAR_13.on_answer = VAR_0->methods.funs + VAR_0->methods.fun_pos[VAR_2];
  VAR_13.on_alarm = VAR_0->methods.funs + VAR_0->methods.fun_pos[VAR_1];
  VAR_13.on_free = VAR_0->methods.funs + VAR_0->methods.fun_pos[VAR_3];
  struct rpc_query *VAR_14 = FUNC_1 (VAR_6, *VAR_8, VAR_7, VAR_5, VAR_13, VAR_10);
  FUNC_0 (VAR_14);
  struct secure_send_extra *VAR_15 = FUNC_7 (sizeof (*VAR_15));
  VAR_15->state = 0;
  VAR_15->data_size = VAR_11;
  VAR_15->data = FUNC_5 (VAR_15->data_size);
  FUNC_6 (VAR_15->data, VAR_12, VAR_15->data_size);
  VAR_15->pid = *VAR_8;
  VAR_15->timeout = VAR_10;
  VAR_15->binlog = 1;
  VAR_14->extra = VAR_15;
  VAR_4 ++;
  FUNC_3 (FUNC_4 (), 1);
  VAR_15->binlog_pos = FUNC_4 ();
}

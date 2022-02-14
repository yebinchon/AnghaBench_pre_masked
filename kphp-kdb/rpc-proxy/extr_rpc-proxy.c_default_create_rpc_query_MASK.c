
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rpc_query_type {scalar_t__ on_free; scalar_t__ on_alarm; scalar_t__ on_answer; } ;
struct rpc_query {int dummy; } ;
struct TYPE_5__ {scalar_t__* fun_pos; scalar_t__ funs; } ;
struct TYPE_8__ {TYPE_1__ methods; } ;
struct TYPE_7__ {TYPE_2__* h; int in_type; int * remote_pid; } ;
struct TYPE_6__ {double custom_timeout; int qid; } ;


 TYPE_4__* VAR_0 ;
 TYPE_3__* VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 struct rpc_query* FUNC_0 (long long,int ,int ,int ,struct rpc_query_type,double) ;

struct rpc_query *FUNC_1 (long long VAR_5) {
  struct rpc_query_type VAR_6;
  VAR_6.on_answer = VAR_0->methods.funs + VAR_0->methods.fun_pos[VAR_3];
  VAR_6.on_alarm = VAR_0->methods.funs + VAR_0->methods.fun_pos[VAR_2];
  VAR_6.on_free = VAR_0->methods.funs + VAR_0->methods.fun_pos[VAR_4];
  return FUNC_0 (VAR_5, *VAR_1->remote_pid, VAR_1->h->qid, VAR_1->in_type, VAR_6, VAR_1->h->custom_timeout * 0.001);
}

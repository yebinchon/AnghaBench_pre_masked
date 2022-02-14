
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {TYPE_6__* ptr; } ;
struct TYPE_11__ {int state; } ;
struct TYPE_10__ {int tcp_est; int state; } ;
struct pf_state {int direction; TYPE_7__ rule; TYPE_5__** key; TYPE_4__* src_node; TYPE_3__ dst; TYPE_2__ src; int timeout; } ;
struct pf_overload_entry {int dir; TYPE_6__* rule; int af; int addr; } ;
struct TYPE_16__ {int * lcounters; } ;
struct TYPE_9__ {scalar_t__ limit; } ;
struct TYPE_14__ {scalar_t__ max_src_conn; int * overload_tbl; TYPE_1__ max_src_conn_rate; } ;
struct TYPE_13__ {int af; } ;
struct TYPE_12__ {scalar_t__ conn; int addr; int conn_rate; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 size_t VAR_5 ;
 int FUNC_2 (struct pf_state*) ;
 int FUNC_3 (int *,struct pf_overload_entry*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_8__ VAR_9 ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int ,int) ;
 struct pf_overload_entry* FUNC_6 (int,int ,int ) ;
 int VAR_10 ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;
 int VAR_11 ;

__attribute__((used)) static int
FUNC_10(struct pf_state **VAR_12)
{
 struct pf_overload_entry *VAR_13;
 int VAR_14 = 0;

 FUNC_2(*VAR_12);

 (*VAR_12)->src_node->conn++;
 (*VAR_12)->src.tcp_est = 1;
 FUNC_7(&(*VAR_12)->src_node->conn_rate);

 if ((*VAR_12)->rule.ptr->max_src_conn &&
     (*VAR_12)->rule.ptr->max_src_conn <
     (*VAR_12)->src_node->conn) {
  FUNC_5(VAR_9.lcounters[VAR_0], 1);
  VAR_14++;
 }

 if ((*VAR_12)->rule.ptr->max_src_conn_rate.limit &&
     FUNC_8(&(*VAR_12)->src_node->conn_rate)) {
  FUNC_5(VAR_9.lcounters[VAR_1], 1);
  VAR_14++;
 }

 if (!VAR_14)
  return (0);


 (*VAR_12)->timeout = VAR_4;
 (*VAR_12)->src.state = (*VAR_12)->dst.state = VAR_6;

 if ((*VAR_12)->rule.ptr->overload_tbl == ((void*)0))
  return (1);


 VAR_13 = FUNC_6(sizeof(*VAR_13), VAR_3, VAR_2);
 if (VAR_13 == ((void*)0))
  return (1);

 FUNC_4(&(*VAR_12)->src_node->addr, &VAR_13->addr, sizeof(VAR_13->addr));
 VAR_13->af = (*VAR_12)->key[VAR_5]->af;
 VAR_13->rule = (*VAR_12)->rule.ptr;
 VAR_13->dir = (*VAR_12)->direction;
 FUNC_0();
 FUNC_3(&VAR_7, VAR_13, VAR_10);
 FUNC_1();
 FUNC_9(VAR_11, &VAR_8);

 return (1);
}

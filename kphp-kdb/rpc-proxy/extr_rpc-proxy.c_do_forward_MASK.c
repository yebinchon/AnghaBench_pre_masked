
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct rpc_cluster_bucket {TYPE_1__* methods; } ;
struct rpc_cluster {int tot_buckets; struct rpc_cluster_bucket* buckets; } ;
struct TYPE_8__ {int s_addr; } ;
struct conn_target {int custom_field; int port; TYPE_2__ target; int ready_outbound_connections; int min_connections; } ;
struct TYPE_10__ {int (* forward ) () ;int * fun_pos; } ;
struct TYPE_12__ {TYPE_4__ methods; } ;
struct TYPE_11__ {TYPE_3__* h; int remote_pid; int in_type; } ;
struct TYPE_9__ {int qid; } ;
struct TYPE_7__ {int (* get_host ) (struct rpc_cluster_bucket*) ;int (* get_port ) (struct rpc_cluster_bucket*) ;int (* get_actor ) (struct rpc_cluster_bucket*) ;} ;


 TYPE_6__* VAR_0 ;
 TYPE_5__* VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ,int ) ;


 int VAR_5 ;
 int VAR_6 ;





 int VAR_7 ;
 int VAR_8 ;
 struct conn_target* VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct conn_target*) ;
 struct rpc_cluster* FUNC_2 (long long) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct rpc_cluster*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct rpc_cluster_bucket*) ;
 int FUNC_7 (struct rpc_cluster_bucket*) ;
 int FUNC_8 (struct rpc_cluster_bucket*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 long long FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 () ;
 int* FUNC_17 (int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int ) ;

int FUNC_20 (void) {
  int VAR_11 = FUNC_14 ();
  long long VAR_12;
  struct rpc_cluster *VAR_13;
  int VAR_14;
  switch (VAR_11) {
  case 134:
    FUNC_12 ();
    FUNC_11 ();

    FUNC_15 (VAR_1->in_type, VAR_1->remote_pid, VAR_1->h->qid);
    FUNC_18 (VAR_7);
    FUNC_16 ();
    return 0;
  case 131:
    FUNC_12 ();
    FUNC_11 ();

    FUNC_15 (VAR_1->in_type, VAR_1->remote_pid, VAR_1->h->qid);
    FUNC_10 ();
    FUNC_16 ();
    return 0;
  case 129:
    FUNC_12 ();
    VAR_12 = FUNC_13 ();
    FUNC_11 ();

    FUNC_15 (VAR_1->in_type, VAR_1->remote_pid, VAR_1->h->qid);

    VAR_13 = FUNC_2 (VAR_12);
    if (!VAR_13) {
      FUNC_18 (VAR_5);
    } else {
      FUNC_18 (VAR_6);
      FUNC_18 (VAR_13->tot_buckets);
    }
    FUNC_16 ();
    return 0;
  case 130:
    FUNC_12 ();
    VAR_12 = FUNC_13 ();
    FUNC_11 ();

    FUNC_15 (VAR_1->in_type, VAR_1->remote_pid, VAR_1->h->qid);
    VAR_13 = FUNC_2 (VAR_12);
    if (!VAR_13) {
      FUNC_18 (VAR_5);
    } else {
      FUNC_18 (VAR_6);
      FUNC_18 (VAR_13->tot_buckets);
      for (VAR_14 = 0; VAR_14 < VAR_13->tot_buckets; VAR_14++) {
        struct rpc_cluster_bucket *VAR_15 = &VAR_13->buckets[VAR_14];
        FUNC_18 (VAR_15->methods->get_host (VAR_15));
        FUNC_18 (VAR_15->methods->get_port (VAR_15));
        FUNC_19 (VAR_15->methods->get_actor (VAR_15));
      }
    }
    FUNC_16 ();
    return 0;
  case 128:
    FUNC_12 ();
    VAR_12 = FUNC_13 ();
    FUNC_11 ();

    FUNC_15 (VAR_1->in_type, VAR_1->remote_pid, VAR_1->h->qid);
    VAR_13 = FUNC_2 (VAR_12);
    if (!VAR_13) {
      FUNC_18 (VAR_5);
    } else {
      FUNC_18 (VAR_6);
      FUNC_4 (VAR_13);
    }
    FUNC_16 ();
    return 0;
  case 132:
    FUNC_12 ();
    FUNC_11 ();

    FUNC_15 (VAR_1->in_type, VAR_1->remote_pid, VAR_1->h->qid);
    FUNC_18 (VAR_8);
    {
      int *VAR_16 = FUNC_17 (4);
      *VAR_16 = 0;
      int VAR_17;
      for (VAR_17 = 0; VAR_17 < VAR_10; VAR_17++) {
        struct conn_target *VAR_18 = &VAR_9[VAR_17];
        FUNC_1 (VAR_18);
        if (VAR_18->min_connections > 0 && !VAR_18->ready_outbound_connections) {
          if (VAR_18->target.s_addr) {
            int VAR_19 = (VAR_18->target.s_addr);
            FUNC_18 (FUNC_3 (VAR_19));
          } else {
            FUNC_18 (VAR_18->custom_field);
          }
          FUNC_18 (VAR_18->port);
          (*VAR_16) ++;
        }
      }
    }
    FUNC_16 ();
    return 0;
  case 133:
    FUNC_12 ();
    FUNC_11 ();

    FUNC_15 (VAR_1->in_type, VAR_1->remote_pid, VAR_1->h->qid);
    FUNC_5 ();
    FUNC_16 ();
    return 0;
  }
  int VAR_20;
  VAR_20 = FUNC_0(VAR_0->methods.fun_pos[VAR_2], 0);
  if (VAR_20 < 0) { return VAR_20; }
  VAR_20 = FUNC_0(VAR_0->methods.fun_pos[VAR_3], 0);
  if (VAR_20 < 0) { return VAR_20; }
  VAR_20 = FUNC_0(VAR_0->methods.fun_pos[VAR_4], 0);
  if (VAR_20 < 0) { return VAR_20; }
  return VAR_0->methods.forward ();
}

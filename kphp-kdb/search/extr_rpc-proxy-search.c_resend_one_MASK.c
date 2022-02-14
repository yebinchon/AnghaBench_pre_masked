
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct search_extra {int limit; int mode; int op; } ;
struct rpc_query {scalar_t__ extra; } ;
struct gather {int wait_num; int in_type; int qid; int pid; TYPE_1__* List; int saved_query_len; TYPE_2__* saved_query; struct search_extra* extra; TYPE_2__* header; TYPE_5__* cluster; } ;
struct TYPE_8__ {int tot_buckets; int * buckets; } ;
struct TYPE_7__ {long long qid; } ;
struct TYPE_6__ {int bytes; int data; } ;


 TYPE_5__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 struct rpc_query* FUNC_1 (long long,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 long long FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int *,long long) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*,int ) ;

int FUNC_10 (struct gather *VAR_3, int VAR_4) {
  VAR_0 = VAR_3->cluster;
  if (VAR_4 >= VAR_0->tot_buckets) { return 0; }

  long long VAR_5 = FUNC_3 (VAR_3->qid);
  if (FUNC_5 (&VAR_0->buckets[VAR_4], VAR_5) <= 0) {
    return 0;
  }






  VAR_3->header->qid = VAR_5;
  FUNC_0 (VAR_3->header);
  FUNC_7 (VAR_3->header);

  FUNC_0 (VAR_3->saved_query);
  struct search_extra *VAR_6 = VAR_3->extra;
  FUNC_8 (VAR_6->op);
  FUNC_8 (VAR_6->mode);
  FUNC_8 (VAR_6->limit);
  FUNC_9 (VAR_3->saved_query, VAR_3->saved_query_len);


  FUNC_6 (VAR_1);
  if (VAR_3->List[VAR_4].bytes > 0) {
    FUNC_2 (VAR_3->List[VAR_4].data);
  }
  VAR_3->List[VAR_4].bytes = -2;

  struct rpc_query *VAR_7 = FUNC_1 (VAR_5, VAR_3->pid, VAR_3->qid, VAR_3->in_type, VAR_2, 0);
  VAR_7->extra = FUNC_4 (2 * sizeof (void *));
  ((void **)VAR_7->extra)[0] = VAR_3;
  ((void **)VAR_7->extra)[1] = (void *)(long)VAR_4;
  VAR_3->wait_num ++;
  return 1;
}

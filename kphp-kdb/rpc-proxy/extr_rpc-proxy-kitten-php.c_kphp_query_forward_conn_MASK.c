
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tl_query_header {long long qid; double custom_timeout; long long actor_id; int real_op; } ;
struct connection {int dummy; } ;
struct TYPE_4__ {int (* create_rpc_query ) (long long) ;} ;
struct TYPE_6__ {long long id; TYPE_1__ methods; int forwarded_queries; int timeout; } ;
struct TYPE_5__ {struct tl_query_header* h; } ;


 TYPE_3__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (long long) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct tl_query_header*) ;
 int FUNC_7 (struct connection*,long long) ;
 int FUNC_8 (int,char*,long long,int ) ;

int FUNC_9 (struct connection *VAR_3, long long VAR_4, long long VAR_5, int VAR_6) {
  FUNC_8 (1, "default_query_forward: CC->id = %lld, CC->timeout = %lf\n", VAR_0->id, VAR_0->timeout);
  FUNC_0 (VAR_3);
  if (FUNC_3 ()) {
    return -1;
  }
  VAR_0->forwarded_queries ++;
  VAR_2 ++;
  long long VAR_7 = VAR_1->h->qid;
  double VAR_8 = VAR_1->h->custom_timeout;
  VAR_1->h->custom_timeout *= 0.9;

  FUNC_7 (VAR_3, VAR_5);

  struct tl_query_header *VAR_9 = VAR_1->h;
  FUNC_0 (VAR_9->actor_id == VAR_0->id);
  VAR_9->qid = VAR_5;
  VAR_9->actor_id = VAR_4;
  FUNC_6 (VAR_9);
  VAR_9->qid = VAR_7;
  VAR_9->actor_id = VAR_0->id;
  VAR_9->custom_timeout = VAR_8;

  FUNC_2 (FUNC_4 (), VAR_6);
  VAR_0->methods.create_rpc_query (VAR_5);

  FUNC_5 (VAR_1->h->real_op);
  return 0;
}

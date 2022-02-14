
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct cache_mp_read_session_ {int current_item; struct cache_mp_entry_* parent_entry; } ;
struct TYPE_10__ {scalar_t__ tv_sec; } ;
struct TYPE_7__ {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_8__ {TYPE_2__ max_lifetime; } ;
struct cache_mp_entry_ {TYPE_5__ last_request_time; int (* get_time_func ) (TYPE_5__*) ;int rs_size; int rs_head; TYPE_4__* completed_write_session; TYPE_3__ mp_params; } ;
struct cache_entry_ {TYPE_1__* params; } ;
struct TYPE_9__ {int items; } ;
struct TYPE_6__ {scalar_t__ entry_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct cache_mp_read_session_*,int ) ;
 int FUNC_2 (struct cache_mp_read_session_* (*) (struct cache_entry_*)) ;
 int FUNC_3 (struct cache_mp_read_session_* (*) (struct cache_entry_*)) ;
 int FUNC_4 (int) ;
 struct cache_mp_read_session_* FUNC_5 (int,int) ;
 int VAR_1 ;
 int FUNC_6 (struct cache_entry_*) ;
 int FUNC_7 (TYPE_5__*) ;

struct cache_mp_read_session_ *
FUNC_8(struct cache_entry_ *VAR_2)
{
 struct cache_mp_entry_ *VAR_3;
 struct cache_mp_read_session_ *VAR_4;

 FUNC_2(FUNC_8);
 FUNC_4(VAR_2 != ((void*)0));
 FUNC_4(VAR_2->params->entry_type == VAR_0);
 VAR_3 = (struct cache_mp_entry_ *)VAR_2;

 if (VAR_3->completed_write_session == ((void*)0)) {
  FUNC_3(FUNC_8);
  return (((void*)0));
 }

 if ((VAR_3->mp_params.max_lifetime.tv_sec != 0)
  || (VAR_3->mp_params.max_lifetime.tv_usec != 0)) {
  if (VAR_3->last_request_time.tv_sec -
   VAR_3->last_request_time.tv_sec >
   VAR_3->mp_params.max_lifetime.tv_sec) {
   FUNC_6(VAR_2);
   FUNC_3(FUNC_8);
   return (((void*)0));
  }
 }

 VAR_4 = FUNC_5(1,
  sizeof(*VAR_4));
 FUNC_4(VAR_4 != ((void*)0));

 VAR_4->parent_entry = VAR_3;
 VAR_4->current_item = FUNC_0(
  &VAR_3->completed_write_session->items);

 FUNC_1(&VAR_3->rs_head, VAR_4, VAR_1);
 ++VAR_3->rs_size;

 VAR_3->get_time_func(&VAR_3->last_request_time);
 FUNC_3(FUNC_8);
 return (VAR_4);
}

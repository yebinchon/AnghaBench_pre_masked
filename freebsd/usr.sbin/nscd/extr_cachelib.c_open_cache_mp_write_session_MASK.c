
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cache_mp_write_session_ {struct cache_mp_entry_* parent_entry; int items; } ;
struct TYPE_4__ {scalar_t__ max_sessions; } ;
struct cache_mp_entry_ {scalar_t__ ws_size; int ws_head; TYPE_2__ mp_params; } ;
struct cache_entry_ {TYPE_1__* params; } ;
struct TYPE_3__ {scalar_t__ entry_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct cache_mp_write_session_*,int ) ;
 int FUNC_2 (struct cache_mp_write_session_* (*) (struct cache_entry_*)) ;
 int FUNC_3 (struct cache_mp_write_session_* (*) (struct cache_entry_*)) ;
 int FUNC_4 (int) ;
 struct cache_mp_write_session_* FUNC_5 (int,int) ;
 int VAR_1 ;

struct cache_mp_write_session_ *
FUNC_6(struct cache_entry_ *VAR_2)
{
 struct cache_mp_entry_ *VAR_3;
 struct cache_mp_write_session_ *VAR_4;

 FUNC_2(FUNC_6);
 FUNC_4(VAR_2 != ((void*)0));
 FUNC_4(VAR_2->params->entry_type == VAR_0);
 VAR_3 = (struct cache_mp_entry_ *)VAR_2;

 if ((VAR_3->mp_params.max_sessions > 0) &&
  (VAR_3->ws_size == VAR_3->mp_params.max_sessions)) {
  FUNC_3(FUNC_6);
  return (((void*)0));
 }

 VAR_4 = FUNC_5(1,
  sizeof(*VAR_4));
 FUNC_4(VAR_4 != ((void*)0));

 FUNC_0(&VAR_4->items);
 VAR_4->parent_entry = VAR_3;

 FUNC_1(&VAR_3->ws_head, VAR_4, VAR_1);
 ++VAR_3->ws_size;

 FUNC_3(FUNC_6);
 return (VAR_4);
}

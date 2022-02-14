
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cache_mp_read_session_ {TYPE_1__* parent_entry; } ;
struct TYPE_2__ {scalar_t__ rs_size; int * pending_write_session; int * completed_write_session; int rs_head; } ;


 int FUNC_0 (int *,struct cache_mp_read_session_*,int ) ;
 int FUNC_1 (void (*) (struct cache_mp_read_session_*)) ;
 int FUNC_2 (void (*) (struct cache_mp_read_session_*)) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct cache_mp_read_session_*) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;

void
FUNC_6(struct cache_mp_read_session_ *VAR_1)
{

 FUNC_1(FUNC_6);
 FUNC_3(VAR_1 != ((void*)0));
 FUNC_3(VAR_1->parent_entry != ((void*)0));

 FUNC_0(&VAR_1->parent_entry->rs_head, VAR_1, VAR_0);
 --VAR_1->parent_entry->rs_size;

 if ((VAR_1->parent_entry->rs_size == 0) &&
  (VAR_1->parent_entry->pending_write_session != ((void*)0))) {
  FUNC_5(
   VAR_1->parent_entry->completed_write_session);
  VAR_1->parent_entry->completed_write_session =
   VAR_1->parent_entry->pending_write_session;
  VAR_1->parent_entry->pending_write_session = ((void*)0);
 }

 FUNC_4(VAR_1);
 FUNC_2(FUNC_6);
}

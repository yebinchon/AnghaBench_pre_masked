
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cache_mp_write_session_ {TYPE_2__* parent_entry; } ;
struct TYPE_4__ {int ws_size; int ws_head; TYPE_1__* params; } ;
struct TYPE_3__ {scalar_t__ entry_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct cache_mp_write_session_*,int ) ;
 int FUNC_1 (void (*) (struct cache_mp_write_session_*)) ;
 int FUNC_2 (void (*) (struct cache_mp_write_session_*)) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct cache_mp_write_session_*) ;
 int VAR_1 ;

void
FUNC_5(struct cache_mp_write_session_ *VAR_2)
{

 FUNC_1(FUNC_5);
 FUNC_3(VAR_2 != ((void*)0));
 FUNC_3(VAR_2->parent_entry != ((void*)0));
 FUNC_3(VAR_2->parent_entry->params->entry_type == VAR_0);

 FUNC_0(&VAR_2->parent_entry->ws_head, VAR_2, VAR_1);
 --VAR_2->parent_entry->ws_size;

 FUNC_4(VAR_2);
 FUNC_2(FUNC_5);
}

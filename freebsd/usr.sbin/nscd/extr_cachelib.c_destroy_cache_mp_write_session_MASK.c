
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_mp_write_session_ {struct cache_mp_write_session_* value; int items; } ;
struct cache_mp_data_item_ {struct cache_mp_data_item_* value; int items; } ;


 int FUNC_0 (int *) ;
 struct cache_mp_write_session_* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct cache_mp_write_session_*,int ) ;
 int FUNC_3 (void (*) (struct cache_mp_write_session_*)) ;
 int FUNC_4 (void (*) (struct cache_mp_write_session_*)) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int FUNC_6 (struct cache_mp_write_session_*) ;

__attribute__((used)) static void
FUNC_7(struct cache_mp_write_session_ *VAR_1)
{

 struct cache_mp_data_item_ *VAR_2;

 FUNC_3(FUNC_7);
 FUNC_5(VAR_1 != ((void*)0));
 while (!FUNC_0(&VAR_1->items)) {
  VAR_2 = FUNC_1(&VAR_1->items);
  FUNC_2(&VAR_1->items, VAR_2, VAR_0);
  FUNC_6(VAR_2->value);
  FUNC_6(VAR_2);
 }

 FUNC_6(VAR_1);
 FUNC_4(FUNC_7);
}

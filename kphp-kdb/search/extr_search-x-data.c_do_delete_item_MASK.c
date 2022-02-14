
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_search_delete_item {long long obj_id; } ;


 int VAR_0 ;
 struct lev_search_delete_item* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct lev_search_delete_item*) ;
 int FUNC_2 (long long) ;
 int FUNC_3 (long long) ;

int FUNC_4 (long long VAR_1) {
  if (!FUNC_3 (VAR_1)) { return 0; }
  struct lev_search_delete_item *VAR_2 = FUNC_0(VAR_0, 12, 0);
  FUNC_1 (VAR_2);
  VAR_2->obj_id = VAR_1;
  return FUNC_2 (VAR_1);
}

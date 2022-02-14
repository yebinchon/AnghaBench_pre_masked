
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int rtree_t ;
struct TYPE_4__ {int child; } ;
typedef TYPE_1__ rtree_node_elm_t ;
typedef int rtree_leaf_elm_t ;


 int FUNC_0 (int) ;
 int * FUNC_1 (TYPE_1__*,int) ;
 int * FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static rtree_leaf_elm_t *
FUNC_5(tsdn_t *VAR_0, rtree_t *VAR_1, rtree_node_elm_t *VAR_2,
    unsigned VAR_3, bool VAR_4) {
 rtree_leaf_elm_t *VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_4);
 if (!VAR_4 && FUNC_4(!FUNC_3(VAR_5))) {
  VAR_5 = FUNC_2(VAR_0, VAR_1, &VAR_2->child);
 }
 FUNC_0(!VAR_4 || VAR_5 != ((void*)0));
 return VAR_5;
}

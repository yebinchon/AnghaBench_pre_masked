
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int rtree_ctx_t ;
typedef int extent_t ;
typedef int extent_hooks_t ;
struct TYPE_6__ {int mtx; int delay_coalesce; int npages; int lru; } ;
typedef TYPE_1__ eset_t ;
typedef int arena_t ;


 int VAR_0 ;
 size_t FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *) ;




 int FUNC_5 (int *,int const) ;
 scalar_t__ FUNC_6 (int *,int *,int **,int *,TYPE_1__*,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 () ;
 int * FUNC_10 (int *,int *) ;

extent_t *
FUNC_11(tsdn_t *VAR_1, arena_t *VAR_2, extent_hooks_t **VAR_3,
    eset_t *VAR_4, size_t VAR_5) {
 rtree_ctx_t VAR_6;
 rtree_ctx_t *VAR_7 = FUNC_10(VAR_1, &VAR_6);

 FUNC_7(VAR_1, &VAR_4->mtx);





 extent_t *VAR_8;
 while (1) {

  VAR_8 = FUNC_4(&VAR_4->lru);
  if (VAR_8 == ((void*)0)) {
   goto label_return;
  }

  size_t VAR_9 = FUNC_0(&VAR_4->npages,
      VAR_0);
  if (VAR_9 <= VAR_5) {
   VAR_8 = ((void*)0);
   goto label_return;
  }
  FUNC_1(VAR_1, VAR_4, VAR_8);
  if (!VAR_4->delay_coalesce) {
   break;
  }

  if (FUNC_6(VAR_1, VAR_2, VAR_3,
      VAR_7, VAR_4, VAR_8)) {
   break;
  }




 }





 switch (FUNC_2(VAR_4)) {
 case 131:
  FUNC_9();
 case 130:
 case 129:
  FUNC_5(VAR_8, 131);
  break;
 case 128:
  FUNC_3(VAR_1, VAR_8);
  break;
 default:
  FUNC_9();
 }

label_return:
 FUNC_8(VAR_1, &VAR_4->mtx);
 return VAR_8;
}

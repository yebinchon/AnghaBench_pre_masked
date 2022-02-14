
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int rtree_ctx_t ;
typedef int extent_t ;
typedef int extent_hooks_t ;
struct TYPE_6__ {int mtx; } ;
typedef TYPE_1__ eset_t ;
typedef int arena_t ;


 size_t VAR_0 ;
 void* FUNC_0 (void*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_2 ;
 int * FUNC_3 (int *,TYPE_1__*,size_t,size_t) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int *,TYPE_1__*,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 void* FUNC_7 (int *) ;
 int FUNC_8 (int *,int **) ;
 int * FUNC_9 (int *,int *,void*,int) ;
 size_t FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int ,int) ;

__attribute__((used)) static extent_t *
FUNC_17(tsdn_t *VAR_3, arena_t *VAR_4,
    extent_hooks_t **VAR_5, rtree_ctx_t *VAR_6, eset_t *VAR_7,
    void *VAR_8, size_t VAR_9, size_t VAR_10, size_t VAR_11, bool VAR_12,
    bool VAR_13) {
 FUNC_16(FUNC_15(VAR_3),
     VAR_1, VAR_13 ? 1 : 0);
 FUNC_2(VAR_11 > 0);
 if (VAR_2 && VAR_8 != ((void*)0)) {
  FUNC_2(FUNC_0(VAR_8) == VAR_8);
  FUNC_2(VAR_10 == 0);
  FUNC_2(VAR_11 <= VAR_0);
 }

 size_t VAR_14 = VAR_9 + VAR_10;
 FUNC_13(VAR_3, &VAR_7->mtx);
 FUNC_8(VAR_4, VAR_5);
 extent_t *VAR_15;
 if (VAR_8 != ((void*)0)) {
  VAR_15 = FUNC_9(VAR_3, VAR_6, VAR_8,
      0);
  if (VAR_15 != ((void*)0)) {




   extent_t *VAR_16 = VAR_15;
   FUNC_2(FUNC_7(VAR_15) == VAR_8);
   if (FUNC_6(VAR_15)
       != FUNC_1(VAR_4) ||
       FUNC_10(VAR_15) < VAR_14 ||
       FUNC_11(VAR_15) !=
       FUNC_4(VAR_7)) {
    VAR_15 = ((void*)0);
   }
   FUNC_12(VAR_3, VAR_16);
  }
 } else {
  VAR_15 = FUNC_3(VAR_3, VAR_7, VAR_14, VAR_11);
 }
 if (VAR_15 == ((void*)0)) {
  FUNC_14(VAR_3, &VAR_7->mtx);
  return ((void*)0);
 }

 FUNC_5(VAR_3, VAR_4, VAR_7, VAR_15);
 FUNC_14(VAR_3, &VAR_7->mtx);

 return VAR_15;
}

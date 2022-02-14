
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsdn_t ;
typedef int szind_t ;
typedef int rtree_ctx_t ;
typedef int extent_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int VAR_4 ;
 size_t FUNC_3 (int *,void*) ;
 int FUNC_4 (int *,size_t) ;
 int * FUNC_5 (int *,int *,int *,uintptr_t,int) ;
 int FUNC_6 (int *,int *,int *,uintptr_t,int ,int) ;
 int FUNC_7 (void*,size_t,size_t) ;
 int FUNC_8 (size_t) ;
 int * FUNC_9 (int *,int *) ;

void
FUNC_10(tsdn_t *VAR_5, void *VAR_6, size_t VAR_7) {
 FUNC_1(VAR_3);
 FUNC_0(VAR_6 != ((void*)0));
 FUNC_0(FUNC_3(VAR_5, VAR_6) == VAR_0);
 FUNC_0(VAR_7 <= VAR_1);

 if (VAR_2) {
  FUNC_7(VAR_6, VAR_7, VAR_0);
 }

 rtree_ctx_t VAR_8;
 rtree_ctx_t *VAR_9 = FUNC_9(VAR_5, &VAR_8);

 extent_t *VAR_10 = FUNC_5(VAR_5, &VAR_4, VAR_9,
     (uintptr_t)VAR_6, 1);

 szind_t VAR_11 = FUNC_8(VAR_7);
 FUNC_2(VAR_10, VAR_11);
 FUNC_6(VAR_5, &VAR_4, VAR_9, (uintptr_t)VAR_6,
     VAR_11, 0);

 FUNC_4(VAR_5, VAR_7);

 FUNC_0(FUNC_3(VAR_5, VAR_6) == VAR_7);
}

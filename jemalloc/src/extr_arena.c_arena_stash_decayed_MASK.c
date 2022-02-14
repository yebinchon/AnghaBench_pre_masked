
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsdn_t ;
typedef int extent_t ;
typedef int extent_list_t ;
typedef int extent_hooks_t ;
typedef int eset_t ;
typedef int arena_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 size_t FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *,int **,int *,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static size_t
FUNC_5(tsdn_t *VAR_2, arena_t *VAR_3,
    extent_hooks_t **VAR_4, eset_t *VAR_5, size_t VAR_6,
 size_t VAR_7, extent_list_t *VAR_8) {
 FUNC_4(FUNC_3(VAR_2),
     VAR_1, 0);


 size_t VAR_9 = 0;
 extent_t *VAR_10;
 while (VAR_9 < VAR_7 &&
     (VAR_10 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5,
     VAR_6)) != ((void*)0)) {
  FUNC_0(VAR_8, VAR_10);
  VAR_9 += FUNC_1(VAR_10) >> VAR_0;
 }
 return VAR_9;
}

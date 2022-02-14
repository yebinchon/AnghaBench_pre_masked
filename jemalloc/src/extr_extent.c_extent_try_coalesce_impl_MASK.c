
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int rtree_ctx_t ;
typedef int extent_t ;
typedef int extent_hooks_t ;
struct TYPE_5__ {scalar_t__ delay_coalesce; } ;
typedef TYPE_1__ eset_t ;
typedef int arena_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*,int *,int *) ;
 int FUNC_2 (int *,int *,int **,TYPE_1__*,int *,int *,int,int) ;
 int * FUNC_3 (int *,int *,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static extent_t *
FUNC_6(tsdn_t *VAR_0, arena_t *VAR_1,
    extent_hooks_t **VAR_2, rtree_ctx_t *VAR_3, eset_t *VAR_4,
    extent_t *VAR_5, bool *VAR_6, bool VAR_7,
    bool VAR_8) {
 bool VAR_9;
 do {
  VAR_9 = 0;


  extent_t *VAR_10 = FUNC_3(VAR_0, VAR_3,
      FUNC_4(VAR_5), VAR_8);
  if (VAR_10 != ((void*)0)) {





   bool VAR_11 = FUNC_1(VAR_1, VAR_4,
       VAR_5, VAR_10);

   FUNC_5(VAR_0, VAR_10);

   if (VAR_11 && !FUNC_2(VAR_0, VAR_1,
       VAR_2, VAR_4, VAR_5, VAR_10, 1,
       VAR_7)) {
    if (VAR_4->delay_coalesce) {

     *VAR_6 = 1;
     return VAR_5;
    }
    VAR_9 = 1;
   }
  }


  extent_t *VAR_12 = FUNC_3(VAR_0, VAR_3,
      FUNC_0(VAR_5), VAR_8);
  if (VAR_12 != ((void*)0)) {
   bool VAR_13 = FUNC_1(VAR_1, VAR_4,
       VAR_5, VAR_12);
   FUNC_5(VAR_0, VAR_12);

   if (VAR_13 && !FUNC_2(VAR_0, VAR_1,
       VAR_2, VAR_4, VAR_5, VAR_12, 0,
       VAR_7)) {
    VAR_5 = VAR_12;
    if (VAR_4->delay_coalesce) {

     *VAR_6 = 1;
     return VAR_5;
    }
    VAR_9 = 1;
   }
  }
 } while (VAR_9);

 if (VAR_4->delay_coalesce) {
  *VAR_6 = 0;
 }
 return VAR_5;
}

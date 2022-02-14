
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tsdn_t ;
typedef size_t pszind_t ;
typedef int extent_t ;
struct TYPE_4__ {scalar_t__ state; int npages; int lru; int * heaps; int bitmap; int mtx; } ;
typedef TYPE_1__ eset_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,size_t,int ) ;
 int FUNC_3 (int ,int *,size_t) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*,size_t,size_t) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 size_t FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 size_t FUNC_11 (size_t) ;
 size_t FUNC_12 (size_t) ;

void
FUNC_13(tsdn_t *VAR_4, eset_t *VAR_5, extent_t *VAR_6) {
 FUNC_10(VAR_4, &VAR_5->mtx);
 FUNC_0(FUNC_9(VAR_6) == VAR_5->state);

 size_t VAR_7 = FUNC_8(VAR_6);
 size_t VAR_8 = FUNC_12(VAR_7);
 pszind_t VAR_9 = FUNC_11(VAR_8);
 if (FUNC_5(&VAR_5->heaps[VAR_9])) {
  FUNC_3(VAR_5->bitmap, &VAR_3,
      (size_t)VAR_9);
 }
 FUNC_6(&VAR_5->heaps[VAR_9], VAR_6);

 if (VAR_2) {
  FUNC_4(VAR_5, VAR_9, VAR_7);
 }

 FUNC_7(&VAR_5->lru, VAR_6);
 size_t VAR_10 = VAR_7 >> VAR_1;





 size_t VAR_11 =
     FUNC_1(&VAR_5->npages, VAR_0);
 FUNC_2(&VAR_5->npages, VAR_11 + VAR_10,
     VAR_0);
}

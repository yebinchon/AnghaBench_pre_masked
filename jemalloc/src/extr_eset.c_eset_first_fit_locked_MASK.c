
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tsdn_t ;
typedef size_t pszind_t ;
typedef int extent_t ;
struct TYPE_3__ {scalar_t__ delay_coalesce; int * heaps; int bitmap; } ;
typedef TYPE_1__ eset_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int *,size_t) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 size_t FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t FUNC_6 (size_t) ;
 size_t FUNC_7 (int ) ;
 int FUNC_8 (size_t) ;

__attribute__((used)) static extent_t *
FUNC_9(tsdn_t *VAR_5, eset_t *VAR_6, size_t VAR_7) {
 extent_t *VAR_8 = ((void*)0);

 pszind_t VAR_9 = FUNC_7(FUNC_8(VAR_7));

 if (!VAR_2 && !VAR_4) {




  return FUNC_2(&VAR_6->heaps[VAR_9]) ? ((void*)0) :
      FUNC_3(&VAR_6->heaps[VAR_9]);
 }

 for (pszind_t VAR_10 = (pszind_t)FUNC_1(VAR_6->bitmap,
     &VAR_1, (size_t)VAR_9);
     VAR_10 < VAR_0 + 1;
     VAR_10 = (pszind_t)FUNC_1(VAR_6->bitmap, &VAR_1,
     (size_t)VAR_10+1)) {
  FUNC_0(!FUNC_2(&VAR_6->heaps[VAR_10]));
  extent_t *VAR_11 = FUNC_3(&VAR_6->heaps[VAR_10]);
  FUNC_0(FUNC_4(VAR_11) >= VAR_7);






  if (VAR_6->delay_coalesce &&
      (FUNC_6(VAR_10) >> VAR_3) > VAR_7) {
   break;
  }
  if (VAR_8 == ((void*)0) || FUNC_5(VAR_11, VAR_8) < 0) {
   VAR_8 = VAR_11;
  }
  if (VAR_10 == VAR_0) {
   break;
  }
  FUNC_0(VAR_10 < VAR_0);
 }

 return VAR_8;
}

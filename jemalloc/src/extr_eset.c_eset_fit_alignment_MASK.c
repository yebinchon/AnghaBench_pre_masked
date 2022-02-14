
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t pszind_t ;
typedef int extent_t ;
struct TYPE_3__ {int * heaps; int bitmap; } ;
typedef TYPE_1__ eset_t ;


 uintptr_t FUNC_0 (uintptr_t,int ) ;
 int FUNC_1 (size_t) ;
 size_t VAR_0 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int *,size_t) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 size_t FUNC_7 (int *) ;
 size_t FUNC_8 (int ) ;
 int FUNC_9 (size_t) ;

__attribute__((used)) static extent_t *
FUNC_10(eset_t *VAR_2, size_t VAR_3, size_t VAR_4,
    size_t VAR_5) {
        pszind_t VAR_6 = FUNC_8(FUNC_9(VAR_3));
        pszind_t VAR_7 = FUNC_8(FUNC_9(VAR_4));

 for (pszind_t VAR_8 = (pszind_t)FUNC_3(VAR_2->bitmap,
     &VAR_1, (size_t)VAR_6); VAR_8 < VAR_7; VAR_8 =
     (pszind_t)FUNC_3(VAR_2->bitmap, &VAR_1,
     (size_t)VAR_8+1)) {
  FUNC_2(VAR_8 < VAR_0);
  FUNC_2(!FUNC_5(&VAR_2->heaps[VAR_8]));
  extent_t *VAR_9 = FUNC_6(&VAR_2->heaps[VAR_8]);
  uintptr_t VAR_10 = (uintptr_t)FUNC_4(VAR_9);
  size_t VAR_11 = FUNC_7(VAR_9);
  FUNC_2(VAR_11 >= VAR_3);

  uintptr_t VAR_12 = FUNC_0((uintptr_t)VAR_10,
      FUNC_1(VAR_5));
  if (VAR_10 > VAR_12 || VAR_10 + VAR_11 <= VAR_12) {

   continue;
  }

  size_t VAR_13 = VAR_12 - VAR_10;
  if (VAR_11 - VAR_13 >= VAR_3) {
   return VAR_9;
  }
 }

 return ((void*)0);
}

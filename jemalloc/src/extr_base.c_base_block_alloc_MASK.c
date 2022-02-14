
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int pszind_t ;
typedef int extent_hooks_t ;
struct TYPE_6__ {int mtx; scalar_t__ auto_thp_switched; } ;
typedef TYPE_1__ base_t ;
struct TYPE_7__ {size_t size; int extent; int * next; } ;
typedef TYPE_2__ base_block_t ;


 size_t FUNC_0 (size_t,size_t) ;
 size_t FUNC_1 (int ) ;
 uintptr_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (size_t*,int *,void*,size_t) ;
 scalar_t__ FUNC_5 (int *,int *,unsigned int,size_t) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ VAR_5 ;
 int FUNC_9 (void*,size_t) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (size_t) ;
 int FUNC_12 (size_t) ;

__attribute__((used)) static base_block_t *
FUNC_13(tsdn_t *VAR_6, base_t *VAR_7, extent_hooks_t *VAR_8,
    unsigned VAR_9, pszind_t *VAR_10, size_t *VAR_11, size_t VAR_12,
    size_t VAR_13) {
 VAR_13 = FUNC_0(VAR_13, VAR_1);
 size_t VAR_14 = FUNC_0(VAR_12, VAR_13);
 size_t VAR_15 = sizeof(base_block_t);
 size_t VAR_16 = FUNC_0(VAR_15, VAR_13) -
     VAR_15;







 size_t VAR_17 = FUNC_1(FUNC_12(VAR_15 + VAR_16
     + VAR_14));
 pszind_t VAR_18 = (*VAR_10 + 1 < FUNC_11(VAR_2)) ?
     *VAR_10 + 1 : *VAR_10;
 size_t VAR_19 = FUNC_1(FUNC_10(VAR_18));
 size_t VAR_20 = (VAR_17 > VAR_19) ? VAR_17
     : VAR_19;
 base_block_t *VAR_21 = (base_block_t *)FUNC_5(VAR_6, VAR_8, VAR_9,
     VAR_20);
 if (VAR_21 == ((void*)0)) {
  return ((void*)0);
 }

 if (FUNC_8()) {
  void *VAR_22 = (void *)VAR_21;
  FUNC_2(((uintptr_t)VAR_22 & VAR_0) == 0 &&
      (VAR_20 & VAR_0) == 0);
  if (VAR_5 == VAR_3) {
   FUNC_9(VAR_22, VAR_20);
  } else if (VAR_5 == VAR_4 &&
      VAR_7 != ((void*)0)) {

   FUNC_6(VAR_6, &VAR_7->mtx);
   FUNC_3(VAR_6, VAR_7);
   if (VAR_7->auto_thp_switched) {
    FUNC_9(VAR_22, VAR_20);
   }
   FUNC_7(VAR_6, &VAR_7->mtx);
  }
 }

 *VAR_10 = FUNC_11(VAR_20);
 VAR_21->size = VAR_20;
 VAR_21->next = ((void*)0);
 FUNC_2(VAR_20 >= VAR_15);
 FUNC_4(VAR_11, &VAR_21->extent,
     (void *)((uintptr_t)VAR_21 + VAR_15), VAR_20 - VAR_15);
 return VAR_21;
}

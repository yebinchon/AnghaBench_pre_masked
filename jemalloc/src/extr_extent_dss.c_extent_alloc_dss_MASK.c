
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsdn_t ;
typedef int extent_t ;
typedef int extent_hooks_t ;
typedef int arena_t ;


 size_t FUNC_0 (uintptr_t,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_1 (uintptr_t) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *,void*,int ) ;
 int FUNC_8 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *,int *) ;
 int FUNC_11 (int *,int *,int *) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 void* FUNC_14 (void*) ;
 void* FUNC_15 (intptr_t) ;
 int FUNC_16 (int *,int ,void*,size_t,size_t,int,int,int ,int,int,int,int ) ;
 scalar_t__ FUNC_17 (int *,int *,int **,int *,int ,size_t) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_18 (void*,int ,size_t) ;
 int FUNC_19 (void*,size_t) ;

void *
FUNC_20(tsdn_t *VAR_10, arena_t *VAR_11, void *VAR_12, size_t VAR_13,
    size_t VAR_14, bool *VAR_15, bool *VAR_16) {
 extent_t *VAR_17;

 FUNC_8(VAR_9);
 FUNC_4(VAR_13 > 0);
 FUNC_4(VAR_14 == FUNC_0(VAR_14, VAR_4));





 if ((intptr_t)VAR_13 < 0) {
  return ((void*)0);
 }

 VAR_17 = FUNC_9(VAR_10, VAR_11);
 if (VAR_17 == ((void*)0)) {
  return ((void*)0);
 }

 FUNC_13();
 if (!FUNC_5(&VAR_6, VAR_0)) {





  while (1) {
   void *VAR_18 = FUNC_14(VAR_12);
   if (VAR_18 == ((void*)0)) {
    goto label_oom;
   }






   void *VAR_19 = (void *)(FUNC_1(
       (uintptr_t)VAR_18));
   void *VAR_20 = (void *)FUNC_0(
       (uintptr_t)VAR_19, VAR_14);
   size_t VAR_21 = (uintptr_t)VAR_20 -
       (uintptr_t)VAR_19;
   if (VAR_21 != 0) {
    FUNC_16(VAR_17, FUNC_3(VAR_11),
        VAR_19, VAR_21, 0,
        VAR_5, FUNC_2(VAR_11),
        VAR_8, 0, 1, 1,
        VAR_3);
   }




   void *VAR_22 = (void *)((uintptr_t)VAR_20 + VAR_13);
   if ((uintptr_t)VAR_20 < (uintptr_t)VAR_18 ||
       (uintptr_t)VAR_22 < (uintptr_t)VAR_18) {
    goto label_oom;
   }

   void *VAR_23 = VAR_18;
   size_t VAR_24 = (uintptr_t)VAR_20 -
       (uintptr_t)VAR_23;
   intptr_t VAR_25 = VAR_24 + VAR_13;

   FUNC_4((uintptr_t)VAR_18 + VAR_25 == (uintptr_t)VAR_20 +
       VAR_13);


   void *VAR_26 = FUNC_15(VAR_25);
   if (VAR_26 == VAR_18) {

    FUNC_7(&VAR_7, VAR_22,
        VAR_1);
    FUNC_12();

    if (VAR_21 != 0) {
     FUNC_11(VAR_10, VAR_11, VAR_17);
    } else {
     FUNC_10(VAR_10, VAR_11, VAR_17);
    }
    if (!*VAR_16) {
     *VAR_16 = FUNC_19(VAR_20, VAR_13);
    }
    if (*VAR_15 && *VAR_16) {
     extent_hooks_t *VAR_27 =
         VAR_2;
     extent_t VAR_28;

     FUNC_16(&VAR_28,
         FUNC_3(VAR_11), VAR_20, VAR_13,
         VAR_13, 0, VAR_5,
         VAR_8, 0, 1,
         1, VAR_3);
     if (FUNC_17(VAR_10,
         VAR_11, &VAR_27, &VAR_28, 0,
         VAR_13)) {
      FUNC_18(VAR_20, 0, VAR_13);
     }
    }
    return VAR_20;
   }




   if (VAR_26 == (void *)-1) {

    FUNC_6(&VAR_6, 1,
        VAR_1);
    goto label_oom;
   }
  }
 }
label_oom:
 FUNC_12();
 FUNC_10(VAR_10, VAR_11, VAR_17);
 return ((void*)0);
}

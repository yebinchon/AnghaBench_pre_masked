
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int tcache_t ;
struct TYPE_3__ {int args; scalar_t__ is_realloc; } ;
typedef TYPE_1__ hook_ralloc_args_t ;
typedef int extent_t ;
typedef int arena_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int *) ;
 size_t FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,void*,uintptr_t,int ) ;
 int FUNC_4 (int ,void*,int ) ;
 int FUNC_5 (int ,void*,size_t,size_t,uintptr_t,int ) ;
 int * FUNC_6 (int *,void*) ;
 int FUNC_7 (int *,void*,size_t,int *,int *,int) ;
 void* FUNC_8 (int *,int *,size_t,size_t,int) ;
 int FUNC_9 (int *,int *,size_t,size_t,int) ;
 int FUNC_10 (void*,void*,size_t) ;

void *
FUNC_11(tsdn_t *VAR_8, arena_t *VAR_9, void *VAR_10, size_t VAR_11,
    size_t VAR_12, bool VAR_13, tcache_t *VAR_14,
    hook_ralloc_args_t *VAR_15) {
 extent_t *VAR_16 = FUNC_6(VAR_8, VAR_10);

 size_t VAR_17 = FUNC_2(VAR_16);

 FUNC_0(VAR_11 > 0 && VAR_11 <= VAR_0);

 FUNC_0(VAR_17 >= VAR_1
     && VAR_11 >= VAR_1);


 if (!FUNC_9(VAR_8, VAR_16, VAR_11, VAR_11, VAR_13)) {
  FUNC_5(VAR_15->is_realloc
      ? VAR_7 : VAR_6, VAR_10, VAR_17,
      VAR_11, (uintptr_t)VAR_10, VAR_15->args);
  return FUNC_1(VAR_16);
 }






 void *VAR_18 = FUNC_8(VAR_8, VAR_9, VAR_11, VAR_12,
     VAR_13);
 if (VAR_18 == ((void*)0)) {
  return ((void*)0);
 }

 FUNC_3(VAR_15->is_realloc
     ? VAR_3 : VAR_2, VAR_18, (uintptr_t)VAR_18,
     VAR_15->args);
 FUNC_4(VAR_15->is_realloc
     ? VAR_5 : VAR_4, VAR_10, VAR_15->args);

 size_t VAR_19 = (VAR_11 < VAR_17) ? VAR_11 : VAR_17;
 FUNC_10(VAR_18, FUNC_1(VAR_16), VAR_19);
 FUNC_7(VAR_8, FUNC_1(VAR_16), VAR_17, VAR_14, ((void*)0), 1);
 return VAR_18;
}

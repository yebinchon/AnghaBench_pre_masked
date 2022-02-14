
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int szind_t ;
typedef int extent_t ;
struct TYPE_5__ {void* (* alloc ) (TYPE_1__*,void*,size_t,size_t,int*,int*,int ) ;} ;
typedef TYPE_1__ extent_hooks_t ;
typedef int arena_t ;


 size_t FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *,size_t) ;
 int * FUNC_4 (int *,int *) ;
 void* FUNC_5 (int *,int *,void*,size_t,size_t,int*,int*) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 TYPE_1__ VAR_2 ;
 int FUNC_9 (int *,int ,void*,size_t,int,int ,int ,int ,int,int,int,int ) ;
 scalar_t__ FUNC_10 (int *,int *) ;
 int VAR_3 ;
 void* FUNC_11 (TYPE_1__*,void*,size_t,size_t,int*,int*,int ) ;

__attribute__((used)) static extent_t *
FUNC_12(tsdn_t *VAR_4, arena_t *VAR_5,
    extent_hooks_t **VAR_6, void *VAR_7, size_t VAR_8, size_t VAR_9,
    size_t VAR_10, bool VAR_11, szind_t VAR_12, bool *VAR_13, bool *VAR_14) {
 size_t VAR_15 = VAR_8 + VAR_9;
 extent_t *VAR_16 = FUNC_4(VAR_4, VAR_5);
 if (VAR_16 == ((void*)0)) {
  return ((void*)0);
 }
 void *VAR_17;
 size_t VAR_18 = FUNC_0(VAR_10, VAR_1);
 if (*VAR_6 == &VAR_2) {

  VAR_17 = FUNC_5(VAR_4, VAR_5, VAR_7, VAR_15,
      VAR_18, VAR_13, VAR_14);
 } else {
  FUNC_8(VAR_4, VAR_5);
  VAR_17 = (*VAR_6)->alloc(*VAR_6, VAR_7,
      VAR_15, VAR_18, VAR_13, VAR_14, FUNC_2(VAR_5));
  FUNC_7(VAR_4);
 }
 if (VAR_17 == ((void*)0)) {
  FUNC_6(VAR_4, VAR_5, VAR_16);
  return ((void*)0);
 }
 FUNC_9(VAR_16, FUNC_2(VAR_5), VAR_17, VAR_15, VAR_11, VAR_12,
     FUNC_1(VAR_5), VAR_3, *VAR_13, *VAR_14,
     1, VAR_0);
 if (VAR_9 != 0) {
  FUNC_3(VAR_4, VAR_5, VAR_16, VAR_10);
 }
 if (FUNC_10(VAR_4, VAR_16)) {
  FUNC_6(VAR_4, VAR_5, VAR_16);
  return ((void*)0);
 }

 return VAR_16;
}

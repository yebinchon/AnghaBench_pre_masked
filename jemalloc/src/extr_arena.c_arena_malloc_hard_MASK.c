
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsdn_t ;
typedef int szind_t ;
typedef int arena_t ;


 size_t VAR_0 ;
 int * FUNC_0 (int ,int *,size_t) ;
 void* FUNC_1 (int *,int *,int ,int) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int *,int *,int ,int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ) ;

void *
FUNC_9(tsdn_t *VAR_1, arena_t *VAR_2, size_t VAR_3, szind_t VAR_4,
    bool VAR_5) {
 FUNC_2(!FUNC_6(VAR_1) || VAR_2 != ((void*)0));

 if (FUNC_4(!FUNC_6(VAR_1))) {
  VAR_2 = FUNC_0(FUNC_7(VAR_1), VAR_2, VAR_3);
 }
 if (FUNC_8(VAR_2 == ((void*)0))) {
  return ((void*)0);
 }

 if (FUNC_4(VAR_3 <= VAR_0)) {
  return FUNC_1(VAR_1, VAR_2, VAR_4, VAR_5);
 }
 return FUNC_3(VAR_1, VAR_2, FUNC_5(VAR_4), VAR_5);
}

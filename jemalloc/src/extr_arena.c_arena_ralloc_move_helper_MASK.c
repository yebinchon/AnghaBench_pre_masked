
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsdn_t ;
typedef int tcache_t ;
typedef int arena_t ;


 size_t VAR_0 ;
 void* FUNC_0 (int *,int *,size_t,int ,int,int *,int) ;
 void* FUNC_1 (int *,size_t,size_t,int,int *,int *) ;
 size_t FUNC_2 (size_t,size_t) ;
 int FUNC_3 (size_t) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void *
FUNC_5(tsdn_t *VAR_1, arena_t *VAR_2, size_t VAR_3,
    size_t VAR_4, bool VAR_5, tcache_t *VAR_6) {
 if (VAR_4 == 0) {
  return FUNC_0(VAR_1, VAR_2, VAR_3, FUNC_3(VAR_3),
      VAR_5, VAR_6, 1);
 }
 VAR_3 = FUNC_2(VAR_3, VAR_4);
 if (FUNC_4(VAR_3 == 0 || VAR_3 > VAR_0)) {
  return ((void*)0);
 }
 return FUNC_1(VAR_1, VAR_3, VAR_4, VAR_5, VAR_6, VAR_2);
}

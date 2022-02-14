
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsdn_t ;
typedef int arena_t ;


 size_t VAR_0 ;
 void* FUNC_0 (int *,int *,size_t,int) ;
 void* FUNC_1 (int *,int *,size_t,size_t,int) ;

__attribute__((used)) static void *
FUNC_2(tsdn_t *VAR_1, arena_t *VAR_2, size_t VAR_3,
    size_t VAR_4, bool VAR_5) {
 if (VAR_4 <= VAR_0) {
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_5);
 }
 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}

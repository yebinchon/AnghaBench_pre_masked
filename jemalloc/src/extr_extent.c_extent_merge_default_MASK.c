
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsdn_t ;
typedef int extent_t ;
typedef int extent_hooks_t ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (void*,void*) ;
 int * FUNC_2 (int *,void*) ;
 int VAR_0 ;
 int * FUNC_3 () ;

__attribute__((used)) static bool
FUNC_4(extent_hooks_t *VAR_1, void *VAR_2, size_t VAR_3,
    void *VAR_4, size_t VAR_5, bool VAR_6, unsigned VAR_7) {
 if (!VAR_0) {
  tsdn_t *VAR_8 = FUNC_3();
  extent_t *VAR_9 = FUNC_2(VAR_8, VAR_2);
  extent_t *VAR_10 = FUNC_2(VAR_8, VAR_4);
  if (FUNC_0(VAR_9, VAR_10)) {
   return 1;
  }
 }
 return FUNC_1(VAR_2, VAR_4);
}

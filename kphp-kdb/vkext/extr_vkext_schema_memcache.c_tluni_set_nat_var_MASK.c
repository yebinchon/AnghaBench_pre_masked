
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef void tl_tree ;


 int FUNC_0 (void*) ;
 int VAR_0 ;
 void* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (void*) ;

void *FUNC_3 (void **VAR_1, void **VAR_2, zval **VAR_3, struct tl_tree **VAR_4) {
  long VAR_5 = (long)*(VAR_1 ++);
  if (VAR_4[VAR_5]) {
    FUNC_0 (VAR_4[VAR_5]);
  }
  VAR_4[VAR_5] = 0;
  void *VAR_6 = *(--VAR_2);
  void *VAR_7 = FUNC_1 (FUNC_2 (VAR_6) + (long)*(VAR_1 ++));




  if (FUNC_2 (VAR_7) < 0) {
    FUNC_0 (VAR_7);
    return 0;
  }
  VAR_4[VAR_5] = VAR_7;
  VAR_0;
}

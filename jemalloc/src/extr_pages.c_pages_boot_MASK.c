
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_6 () ;
 void* FUNC_7 (int *,scalar_t__,scalar_t__,int*) ;
 int FUNC_8 (void*,scalar_t__) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_9 (void*,scalar_t__) ;

bool
FUNC_10(void) {
 VAR_7 = FUNC_6();
 if (VAR_7 > VAR_3) {
  FUNC_3("<jemalloc>: Unsupported system page size\n");
  if (VAR_5) {
   FUNC_0();
  }
  return 1;
 }


 VAR_4 = VAR_2 | VAR_0;
 VAR_6 = 0;


 FUNC_2();







 if (VAR_8) {
  bool VAR_10 = 0;
  void *VAR_11 = FUNC_7(((void*)0), VAR_3, VAR_3, &VAR_10);
  if (VAR_11 == ((void*)0)) {
   return 1;
  }
  FUNC_1(VAR_9);
  if (FUNC_9(VAR_11, VAR_3)) {
   VAR_9 = 0;
  }
  FUNC_8(VAR_11, VAR_3);
 }


 return 0;
}

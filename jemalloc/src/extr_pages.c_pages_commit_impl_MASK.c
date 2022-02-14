
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (void*) ;
 size_t FUNC_1 (size_t) ;
 int VAR_6 ;
 void* FUNC_2 (void*,size_t,int ,int ) ;
 int FUNC_3 (void*,size_t,int ) ;
 int FUNC_4 (int) ;
 void* FUNC_5 (void*,size_t,int,int,int,int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (void*,size_t) ;

__attribute__((used)) static bool
FUNC_7(void *VAR_9, size_t VAR_10, bool VAR_11) {
 FUNC_4(FUNC_0(VAR_9) == VAR_9);
 FUNC_4(FUNC_1(VAR_10) == VAR_10);

 if (VAR_8) {
  return 1;
 }





 {
  int VAR_12 = VAR_11 ? VAR_4 : VAR_5;
  void *VAR_13 = FUNC_5(VAR_9, VAR_10, VAR_12, VAR_7 | VAR_1,
      -1, 0);
  if (VAR_13 == VAR_0) {
   return 1;
  }
  if (VAR_13 != VAR_9) {




   FUNC_6(VAR_13, VAR_10);
   return 1;
  }
  return 0;
 }

}

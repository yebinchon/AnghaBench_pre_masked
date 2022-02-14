
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 void* FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (void*,void*) ;
 int VAR_3 ;

bool
FUNC_3(void *VAR_4, void *VAR_5) {
 void *VAR_6;

 FUNC_1(VAR_3);

 if ((uintptr_t)VAR_4 < (uintptr_t)VAR_1 && (uintptr_t)VAR_5 <
     (uintptr_t)VAR_1) {
  return 1;
 }

 VAR_6 = FUNC_0(&VAR_2, VAR_0);
 return (FUNC_2(VAR_4, VAR_6) ==
     FUNC_2(VAR_5, VAR_6));
}

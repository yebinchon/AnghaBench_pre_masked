
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
typedef int rpc_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char**,char*,int,int,int,int,int,int,int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;

rpc_status FUNC_7(char **VAR_2) {
  if (!VAR_2) {
    return VAR_0;
  }







  static bool VAR_3 = 0;
  if (!VAR_3) {
    VAR_3 = 1;
    FUNC_3(FUNC_4(((void*)0)));
  }
  if (FUNC_0(VAR_2, "%x%x-%x-%x-%x-%x%x%x",
      FUNC_2(), FUNC_2(), FUNC_2(),
      ((FUNC_2() & 0x0fff) | 0x4000),
      FUNC_2() % 0x3fff + 0x8000,
      FUNC_2(), FUNC_2(), FUNC_2()) < 0) {
    return VAR_0;
  }

  return VAR_1;
}

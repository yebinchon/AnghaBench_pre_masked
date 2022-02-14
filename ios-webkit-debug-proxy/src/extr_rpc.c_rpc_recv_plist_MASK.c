
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rpc_t ;
typedef int rpc_status ;
typedef int plist_t ;


 int FUNC_0 (int const,char*) ;
 int FUNC_1 (int ,char**) ;
 int FUNC_2 (int ,char*,int ) ;

rpc_status FUNC_3(rpc_t VAR_0, const plist_t VAR_1) {
  char *VAR_2 = ((void*)0);
  FUNC_1(FUNC_0(VAR_1, "__selector"), &VAR_2);
  plist_t VAR_3 = FUNC_0(VAR_1, "__argument");
  return FUNC_2(VAR_0, VAR_2, VAR_3);
}

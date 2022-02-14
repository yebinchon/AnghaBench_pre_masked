
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rpc_t ;
typedef int rpc_status ;
typedef int plist_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ,char const*,int ) ;

rpc_status FUNC_3(rpc_t VAR_1,
    const char *VAR_2) {
  if (!VAR_2) {
    return VAR_0;
  }
  const char *VAR_3 = "_rpc_getConnectedApplications:";
  plist_t VAR_4 = FUNC_1(VAR_2);
  rpc_status VAR_5 = FUNC_2(VAR_1, VAR_3, VAR_4);
  FUNC_0(VAR_4);
  return VAR_5;
}

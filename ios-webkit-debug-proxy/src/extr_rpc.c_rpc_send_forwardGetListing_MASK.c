
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rpc_t ;
typedef int rpc_status ;
typedef int plist_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int ,char const*,int ) ;

rpc_status FUNC_5(rpc_t VAR_1, const char *VAR_2,
    const char *VAR_3) {
  if (!VAR_2 || !VAR_3) {
    return VAR_0;
  }
  const char *VAR_4 = "_rpc_forwardGetListing:";
  plist_t VAR_5 = FUNC_3(VAR_2);
  FUNC_0(VAR_5, "WIRApplicationIdentifierKey",
      FUNC_2(VAR_3));
  rpc_status VAR_6 = FUNC_4(VAR_1, VAR_4, VAR_5);
  FUNC_1(VAR_5);
  return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int rpc_t ;
typedef int rpc_status ;
typedef int plist_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int ,char const*,int ) ;

rpc_status FUNC_7(rpc_t VAR_1, const char *VAR_2,
    const char *VAR_3, uint32_t VAR_4, bool VAR_5) {
  if (!VAR_2 || !VAR_3) {
    return VAR_0;
  }
  const char *VAR_6 = "_rpc_forwardIndicateWebView:";
  plist_t VAR_7 = FUNC_5(VAR_2);
  FUNC_0(VAR_7, "WIRApplicationIdentifierKey",
      FUNC_3(VAR_3));
  FUNC_0(VAR_7, "WIRPageIdentifierKey",
      FUNC_4(VAR_4));
  FUNC_0(VAR_7, "WIRIndicateEnabledKey",
      FUNC_2(VAR_5));
  rpc_status VAR_8 = FUNC_6(VAR_1, VAR_6, VAR_7);
  FUNC_1(VAR_7);
  return VAR_8;
}

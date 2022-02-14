
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
 int FUNC_2 (char const*,size_t) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int ,char const*,int ) ;

rpc_status FUNC_7(rpc_t VAR_1, const char *VAR_2,
    const char *VAR_3, uint32_t VAR_4, const char *VAR_5,
    const char *VAR_6, size_t VAR_7) {
  if (!VAR_2 || !VAR_3 || !VAR_5 || !VAR_6) {
    return VAR_0;
  }
  const char *VAR_8 = "_rpc_forwardSocketData:";
  plist_t VAR_9 = FUNC_5(VAR_2);
  FUNC_0(VAR_9, "WIRApplicationIdentifierKey",
      FUNC_3(VAR_3));
  FUNC_0(VAR_9, "WIRPageIdentifierKey",
      FUNC_4(VAR_4));
  FUNC_0(VAR_9, "WIRSenderKey",
      FUNC_3(VAR_5));
  FUNC_0(VAR_9, "WIRSocketDataKey",
      FUNC_2(VAR_6, VAR_7));
  rpc_status VAR_10 = FUNC_6(VAR_1, VAR_8, VAR_9);
  FUNC_1(VAR_9);
  return VAR_10;
}

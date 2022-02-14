
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int rpc_status ;
typedef int plist_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const,char const*) ;
 int FUNC_1 (int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (int ) ;

rpc_status FUNC_3(const plist_t VAR_3, const char *VAR_4,
    bool *VAR_5) {
  if (!VAR_3 || !VAR_4 || !VAR_5) {
    return VAR_1;
  }
  plist_t VAR_6 = FUNC_0(VAR_3, VAR_4);
  if (FUNC_2(VAR_6) != VAR_0) {
    return VAR_1;
  }
  uint8_t VAR_7 = 0;
  FUNC_1(VAR_6, &VAR_7);
  *VAR_5 = (VAR_7 ? 1 : 0);
  return VAR_2;
}

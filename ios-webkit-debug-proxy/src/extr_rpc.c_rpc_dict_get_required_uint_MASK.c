
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int rpc_status ;
typedef int plist_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int const,char const*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__*) ;

rpc_status FUNC_3(const plist_t VAR_4, const char *VAR_5,
    uint32_t *VAR_6) {
  if (!VAR_4 || !VAR_5 || !VAR_6) {
    return VAR_1;
  }
  plist_t VAR_7 = FUNC_0(VAR_4, VAR_5);
  if (FUNC_1(VAR_7) != VAR_0) {
    return VAR_1;
  }
  uint64_t VAR_8;
  FUNC_2(VAR_7, &VAR_8);
  if (VAR_8 > VAR_3) {
    return VAR_1;
  }
  *VAR_6 = (uint32_t)VAR_8;
  return VAR_2;
}

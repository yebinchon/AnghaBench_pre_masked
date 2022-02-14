
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rpc_status ;
typedef int plist_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const,char const*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char**) ;

rpc_status FUNC_3(const plist_t VAR_3, const char *VAR_4,
    char **VAR_5) {
  if (!VAR_3 || !VAR_4 || !VAR_5) {
    return VAR_1;
  }
  plist_t VAR_6 = FUNC_0(VAR_3, VAR_4);
  if (FUNC_1(VAR_6) != VAR_0) {
    return VAR_1;
  }
  FUNC_2(VAR_6, VAR_5);
  return VAR_2;
}

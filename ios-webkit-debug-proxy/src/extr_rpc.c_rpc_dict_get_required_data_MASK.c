
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int rpc_status ;
typedef int plist_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int const,char const*) ;
 int FUNC_2 (int ,char**,scalar_t__*) ;
 scalar_t__ FUNC_3 (int ) ;

rpc_status FUNC_4(const plist_t VAR_4, const char *VAR_5,
    char **VAR_6, size_t *VAR_7) {
  if (!VAR_4 || !VAR_5 || !VAR_6 || !VAR_7) {
    return VAR_1;
  }
  *VAR_6 = ((void*)0);
  *VAR_7 = 0;
  plist_t VAR_8 = FUNC_1(VAR_4, VAR_5);
  if (FUNC_3(VAR_8) != VAR_0) {
    return VAR_1;
  }
  char *VAR_9 = ((void*)0);
  uint64_t VAR_10 = 0;
  FUNC_2(VAR_8, &VAR_9, &VAR_10);
  if (VAR_10 > VAR_3) {
    FUNC_0(VAR_9);
    return VAR_1;
  }
  *VAR_6 = VAR_9;
  *VAR_7 = (size_t)VAR_10;
  return VAR_2;
}

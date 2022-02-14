
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rpc_status ;
typedef int plist_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int const,char const*) ;
 int FUNC_1 (int const,char const*,int*) ;

rpc_status FUNC_2(const plist_t VAR_2, const char *VAR_3,
    bool *VAR_4) {
  if (!VAR_2 || !VAR_3 || !VAR_4) {
    return VAR_0;
  }
  return (FUNC_0(VAR_2, VAR_3) ?
      FUNC_1(VAR_2, VAR_3, VAR_4) : VAR_1);
}

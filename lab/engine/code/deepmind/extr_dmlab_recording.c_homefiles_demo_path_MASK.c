
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 char const* FUNC_1 (char*) ;
 char* FUNC_2 (char*,char const*,int,char const*,char const*) ;

__attribute__((used)) static const char* FUNC_3(const char* VAR_0, int VAR_1) {
  const char* VAR_2 = "dm_";
  const char* VAR_3 = FUNC_0("com_protocol");

  char* VAR_4 =
      FUNC_2("demos/%s/%05d.%s%s", VAR_0, VAR_1, VAR_2, VAR_3);
  return FUNC_1(VAR_4);
}

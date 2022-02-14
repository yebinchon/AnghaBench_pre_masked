
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* FUNC_0 (char*) ;
 char* FUNC_1 (char*,char const*,int,char const*) ;

__attribute__((used)) static const char* FUNC_2(const char* VAR_0,
                                        int VAR_1) {
  const char* VAR_2 = "avi";

  char* VAR_3 = FUNC_1("videos/%s/%05d.%s", VAR_0, VAR_1, VAR_2);
  return FUNC_0(VAR_3);
}

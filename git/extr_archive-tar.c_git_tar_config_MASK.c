
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (char const*,char const*,void*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1, const char *VAR_2, void *VAR_3)
{
 if (!FUNC_1(VAR_1, "tar.umask")) {
  if (VAR_2 && !FUNC_1(VAR_2, "user")) {
   VAR_0 = FUNC_3(0);
   FUNC_3(VAR_0);
  } else {
   VAR_0 = FUNC_0(VAR_1, VAR_2);
  }
  return 0;
 }

 return FUNC_2(VAR_1, VAR_2, VAR_3);
}

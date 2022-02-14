
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static const char *FUNC_2(const char *VAR_0)
{







 if (FUNC_0(VAR_0))
  return "UTF-8";





 if (!FUNC_1(VAR_0, "latin-1"))
  return "ISO-8859-1";

 return VAR_0;
}

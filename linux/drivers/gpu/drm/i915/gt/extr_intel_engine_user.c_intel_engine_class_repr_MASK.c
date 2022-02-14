
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;


 size_t FUNC_0 (char const* const*) ;





const char *FUNC_1(u8 VAR_0)
{
 static const char * const VAR_1[] = {
  [130] = "rcs",
  [131] = "bcs",
  [129] = "vcs",
  [128] = "vecs",
 };

 if (VAR_0 >= FUNC_0(VAR_1) || !VAR_1[VAR_0])
  return "xxx";

 return VAR_1[VAR_0];
}

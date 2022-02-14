
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (char const*,char*,char const**) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, unsigned VAR_1)
{







 if (*VAR_0 == '\0' || FUNC_1(*VAR_0))
  return 0;

 switch (*VAR_0) {
 case 'g':
 case 'G':
  if (VAR_0[1] != 'i' && VAR_0[1] != 'I')
   break;
  if (VAR_0[2] != 't' && VAR_0[2] != 'T')
   break;
  if (VAR_0[3] == '\0' || FUNC_1(VAR_0[3]))
   return 0;
  if (FUNC_0(VAR_1)) {
   VAR_0 += 3;
   if (FUNC_2(VAR_0, "modules", &VAR_0) &&
       (*VAR_0 == '\0' || FUNC_1(*VAR_0)))
    return 0;
  }
  break;
 case '.':
  if (VAR_0[1] == '\0' || FUNC_1(VAR_0[1]))
   return 0;
 }
 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 long VAR_1 ;
 char* FUNC_0 (char const*,long*,int *) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char*,char const*,...) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_2, const char *VAR_3[], uint32_t *VAR_4,
    uint32_t *VAR_5, int VAR_6)
{
 long VAR_7;
 char *VAR_8;

 if (FUNC_1(VAR_2, VAR_3[0]) != 0)
  return (VAR_0);

 VAR_8 = FUNC_0(VAR_3[1], &VAR_7, ((void*)0));
 if (VAR_7 >= 0 && VAR_7 <= VAR_1) {
  *VAR_4 = (uint32_t)VAR_7;
  if (VAR_8 > VAR_3[1]) {
   if (VAR_8[0] == 0) {
    *VAR_5 = ~0;
    return (0);
   }

   if (VAR_8[0] == ':' && VAR_8[1] != 0) {
    if (VAR_6) {
     FUNC_2("param %s: mask not allowed for "
         "hashfilter or nat params", VAR_2);
     return (VAR_0);
    }
    VAR_8 = FUNC_0(VAR_8 + 1, &VAR_7, ((void*)0));
    if (VAR_7 >= 0 && VAR_7 <= VAR_1 && VAR_8[0] == 0) {
     *VAR_5 = (uint32_t)VAR_7;
     return (0);
    }
   }
  }
 }

 FUNC_2("parameter \"%s\" has bad \"value[:mask]\" %s",
     VAR_3[0], VAR_3[1]);

 return (VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 long VAR_1 ;
 char* FUNC_0 (char const*,long*,int *) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char*,char const*,char const*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_2, const char *VAR_3[], uint32_t *VAR_4)
{
 char *VAR_5;
 long VAR_6;

 if (FUNC_1(VAR_2, VAR_3[0]) != 0)
  return (VAR_0);

 VAR_5 = FUNC_0(VAR_3[1], &VAR_6, ((void*)0));
 if (*VAR_5 || VAR_6 < 0 || VAR_6 > VAR_1) {
  FUNC_2("parameter \"%s\" has bad \"value\" %s", VAR_3[0], VAR_3[1]);
  return (VAR_0);
 }

 *VAR_4 = (uint32_t)VAR_6;
 return (0);
}

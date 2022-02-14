
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char const*,char**,int ) ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0, uint32_t *VAR_1)
{
 char *VAR_2;

 *VAR_1 = FUNC_0(VAR_0, &VAR_2, 0);
 if (*VAR_2) {
  FUNC_1("bad parameter \"%s\"", VAR_0);
  return -1;
 }
 return 0;
}

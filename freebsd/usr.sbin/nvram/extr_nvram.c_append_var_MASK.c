
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const uint8_t ;


 int FUNC_0 (char const*,char*,char const*,char const*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int
FUNC_2(uint8_t *VAR_0, int VAR_1, const char *VAR_2, const char *VAR_3)
{
 int VAR_4, VAR_5;

 while (VAR_1 > 0) {
  VAR_4 = FUNC_1(VAR_0) + 1;
  if (VAR_4 == 1)
   break;
  VAR_1 -= VAR_4;
  VAR_0 += VAR_4;
 }
 VAR_5 = FUNC_1(VAR_2) + FUNC_1(VAR_3) + 2;
 if (VAR_1 < VAR_5)
  return -1;
 FUNC_0(VAR_0, "%s=%s", VAR_2, VAR_3);
 return 0;
}

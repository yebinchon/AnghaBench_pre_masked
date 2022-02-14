
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 char* FUNC_0 (int) ;

__attribute__((used)) static char *
FUNC_1(int VAR_0, uint32_t VAR_1)
{
 char *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 == ((void*)0))
  return (VAR_2);

 if (VAR_0 == 1)
  VAR_2[0] = VAR_1 & 0xff;
 else if (VAR_0 == 2) {
  VAR_2[0] = (VAR_1 >> 8) & 0xff;
  VAR_2[1] = VAR_1 & 0xff;
 }

 return (VAR_2);
}

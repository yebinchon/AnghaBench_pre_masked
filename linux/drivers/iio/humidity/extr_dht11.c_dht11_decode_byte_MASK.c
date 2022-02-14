
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned char FUNC_0(char *VAR_0)
{
 unsigned char VAR_1 = 0;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 8; ++VAR_2) {
  VAR_1 <<= 1;
  if (VAR_0[VAR_2])
   ++VAR_1;
 }

 return VAR_1;
}

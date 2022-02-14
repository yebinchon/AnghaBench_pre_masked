
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;



__attribute__((used)) static void
FUNC_0(uint8_t *VAR_0, const char *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if (*VAR_1)
   VAR_0[VAR_3] = *VAR_1++;
  else
   VAR_0[VAR_3] = ' ';
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static int FUNC_0(uint32_t VAR_0)
{
 int VAR_1, VAR_2, VAR_3;
 VAR_1 = 0;
 for (VAR_2 = 0; VAR_2 < 6; VAR_2++) {
  VAR_3 = (VAR_0 >> (VAR_2 * 3)) & 0x7;
  if (VAR_3 > 4)
   continue;
  VAR_1 += VAR_3;
 }
 return VAR_1;
}

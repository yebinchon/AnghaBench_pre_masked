
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static u32 FUNC_0(int VAR_0, int VAR_1, int VAR_2)
{
 u32 VAR_3;
 int VAR_4;
 int VAR_5;

 if (VAR_0 <= VAR_1)
  return 0;
 VAR_3 = 1;
 VAR_4 = VAR_0 - VAR_1;
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  VAR_3 = VAR_3 * VAR_2;

 return VAR_3;
}

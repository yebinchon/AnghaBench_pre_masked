
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(u32 *VAR_0)
{
 int VAR_1, VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < 4; VAR_1++) {
  if (VAR_0[VAR_1] + 1 != 0)
   return VAR_2 + FUNC_0(VAR_0[VAR_1]++);

  VAR_0[VAR_1] = 0;
  VAR_2 += 32;
 }






 return 127;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpudata {int dummy; } ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct cpudata*,int ) ;

__attribute__((used)) static int FUNC_2(struct cpudata *VAR_6)
{
 s16 VAR_7;
 int VAR_8 = -VAR_0;

 VAR_7 = FUNC_1(VAR_6, 0);
 if (VAR_7 < 0)
  return VAR_7;

 if (FUNC_0(VAR_5)) {
  if (VAR_7 == VAR_3)
   return 1;
  if (VAR_7 <= VAR_1)
   return 2;
  if (VAR_7 <= VAR_2)
   return 3;
  else
   return 4;
 } else if (FUNC_0(VAR_4)) {
  VAR_8 = (VAR_7 >> 2) + 1;
 }

 return VAR_8;
}

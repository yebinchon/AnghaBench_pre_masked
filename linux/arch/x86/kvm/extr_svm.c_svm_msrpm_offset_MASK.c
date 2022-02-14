
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;

__attribute__((used)) static u32 FUNC_0(u32 VAR_5)
{
 u32 VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  if (VAR_5 < VAR_4[VAR_7] ||
      VAR_5 >= VAR_4[VAR_7] + VAR_0)
   continue;

  VAR_6 = (VAR_5 - VAR_4[VAR_7]) / 4;
  VAR_6 += (VAR_7 * VAR_1);


  return VAR_6 / 4;
 }


 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83795_data {int has_temp; int has_dts; } ;


 int VAR_0 ;
 int** VAR_1 ;

__attribute__((used)) static int FUNC_0(const struct w83795_data *VAR_2, int VAR_3)
{
 int VAR_4 = 0, VAR_5;

 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
  if (VAR_1[VAR_5][VAR_3] == VAR_0)
   continue;
  if (VAR_1[VAR_5][VAR_3] < 6)
   VAR_4 += (VAR_2->has_temp >> VAR_1[VAR_5][VAR_3]) & 1;
  else
   VAR_4 += (VAR_2->has_dts >> (VAR_1[VAR_5][VAR_3] - 6)) & 1;
 }

 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl6030_ideal_code {int channel; } ;



__attribute__((used)) static int FUNC_0(const struct twl6030_ideal_code *VAR_0,
  int VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  if (VAR_0[VAR_3].channel == VAR_1)
   break;

 return VAR_3;
}

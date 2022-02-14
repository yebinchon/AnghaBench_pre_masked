
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct device {int dummy; } ;
struct creg_gpio {TYPE_1__* layout; } ;
struct TYPE_2__ {int ngpio; scalar_t__* bit_per_gpio; scalar_t__* shift; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct device*,struct creg_gpio*,int) ;
 int FUNC_1 (struct device*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2, struct creg_gpio *VAR_3,
         u32 VAR_4)
{
 u32 VAR_5 = 0;
 int VAR_6;

 if (VAR_3->layout->ngpio < 1 || VAR_3->layout->ngpio > VAR_1)
  return -VAR_0;

 if (VAR_4 < 1 || VAR_4 > VAR_3->layout->ngpio) {
  FUNC_1(VAR_2, "ngpios must be in [1:%u]\n", VAR_3->layout->ngpio);
  return -VAR_0;
 }

 for (VAR_6 = 0; VAR_6 < VAR_3->layout->ngpio; VAR_6++) {
  if (FUNC_0(VAR_2, VAR_3, VAR_6))
   return -VAR_0;

  VAR_5 += VAR_3->layout->shift[VAR_6] + VAR_3->layout->bit_per_gpio[VAR_6];
 }


 if (VAR_5 > 32)
  return -VAR_0;

 return 0;
}

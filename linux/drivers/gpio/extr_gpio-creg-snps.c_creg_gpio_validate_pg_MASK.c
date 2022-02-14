
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct creg_layout {int* bit_per_gpio; int* on; int* off; } ;
struct creg_gpio {struct creg_layout* layout; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_1, struct creg_gpio *VAR_2,
     int VAR_3)
{
 const struct creg_layout *VAR_4 = VAR_2->layout;

 if (VAR_4->bit_per_gpio[VAR_3] < 1 || VAR_4->bit_per_gpio[VAR_3] > 8)
  return -VAR_0;


 if (FUNC_0(31, VAR_4->bit_per_gpio[VAR_3]) & VAR_4->on[VAR_3])
  return -VAR_0;


 if (FUNC_0(31, VAR_4->bit_per_gpio[VAR_3]) & VAR_4->off[VAR_3])
  return -VAR_0;

 if (VAR_4->on[VAR_3] == VAR_4->off[VAR_3])
  return -VAR_0;

 return 0;
}

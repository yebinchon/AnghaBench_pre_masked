
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct touchscreen_properties {unsigned int max_x; unsigned int max_y; scalar_t__ swap_x_y; scalar_t__ invert_y; scalar_t__ invert_x; } ;


 int FUNC_0 (unsigned int,unsigned int) ;

__attribute__((used)) static void
FUNC_1(const struct touchscreen_properties *VAR_0,
         unsigned int *VAR_1, unsigned int *VAR_2)
{
 if (VAR_0->invert_x)
  *VAR_1 = VAR_0->max_x - *VAR_1;

 if (VAR_0->invert_y)
  *VAR_2 = VAR_0->max_y - *VAR_2;

 if (VAR_0->swap_x_y)
  FUNC_0(*VAR_1, *VAR_2);
}

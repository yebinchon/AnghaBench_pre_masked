
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w8001 {unsigned int max_pen_x; unsigned int max_touch_x; unsigned int max_pen_y; unsigned int max_touch_y; } ;



__attribute__((used)) static void FUNC_0(struct w8001 *VAR_0,
        unsigned int *VAR_1, unsigned int *VAR_2)
{
 if (VAR_0->max_pen_x && VAR_0->max_touch_x)
  *VAR_1 = *VAR_1 * VAR_0->max_pen_x / VAR_0->max_touch_x;

 if (VAR_0->max_pen_y && VAR_0->max_touch_y)
  *VAR_2 = *VAR_2 * VAR_0->max_pen_y / VAR_0->max_touch_y;
}

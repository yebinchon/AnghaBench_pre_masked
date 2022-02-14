
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct touchscreen_properties {int dummy; } ;
struct input_mt_pos {unsigned int x; unsigned int y; } ;


 int FUNC_0 (struct touchscreen_properties const*,unsigned int*,unsigned int*) ;

void FUNC_1(struct input_mt_pos *VAR_0,
       const struct touchscreen_properties *VAR_1,
       unsigned int VAR_2, unsigned int VAR_3)
{
 FUNC_0(VAR_1, &VAR_2, &VAR_3);
 VAR_0->x = VAR_2;
 VAR_0->y = VAR_3;
}

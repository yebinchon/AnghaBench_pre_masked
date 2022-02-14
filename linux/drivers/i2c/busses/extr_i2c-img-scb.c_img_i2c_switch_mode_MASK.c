
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct img_i2c {int mode; scalar_t__ line_status; int int_enable; } ;
typedef enum img_i2c_mode { ____Placeholder_img_i2c_mode } img_i2c_mode ;


 int * VAR_0 ;

__attribute__((used)) static void FUNC_0(struct img_i2c *VAR_1, enum img_i2c_mode VAR_2)
{
 VAR_1->mode = VAR_2;
 VAR_1->int_enable = VAR_0[VAR_2];
 VAR_1->line_status = 0;
}

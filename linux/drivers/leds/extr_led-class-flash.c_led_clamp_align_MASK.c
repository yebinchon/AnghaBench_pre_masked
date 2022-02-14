
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct led_flash_setting {int val; int step; int min; int max; } ;


 int FUNC_0 (int,int,int ) ;

__attribute__((used)) static void FUNC_1(struct led_flash_setting *VAR_0)
{
 u32 VAR_1, VAR_2;

 VAR_1 = VAR_0->val + VAR_0->step / 2;
 VAR_1 = FUNC_0(VAR_1, VAR_0->min, VAR_0->max);
 VAR_2 = VAR_1 - VAR_0->min;
 VAR_2 = VAR_0->step * (VAR_2 / VAR_0->step);
 VAR_0->val = VAR_0->min + VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct matrix_keypad_platform_data {int active_low; int * row_gpios; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(const struct matrix_keypad_platform_data *VAR_0,
    int VAR_1)
{
 return FUNC_0(VAR_0->row_gpios[VAR_1]) ?
   !VAR_0->active_low : VAR_0->active_low;
}

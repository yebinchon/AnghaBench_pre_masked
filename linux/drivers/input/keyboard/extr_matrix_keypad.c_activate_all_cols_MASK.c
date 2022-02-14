
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct matrix_keypad_platform_data {int num_col_gpios; } ;


 int FUNC_0 (struct matrix_keypad_platform_data const*,int,int) ;

__attribute__((used)) static void FUNC_1(const struct matrix_keypad_platform_data *VAR_0,
         bool VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_col_gpios; VAR_2++)
  FUNC_0(VAR_0, VAR_2, VAR_1);
}

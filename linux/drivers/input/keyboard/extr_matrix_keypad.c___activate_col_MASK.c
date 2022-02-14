
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct matrix_keypad_platform_data {int * col_gpios; int drive_inactive_cols; int active_low; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(const struct matrix_keypad_platform_data *VAR_0,
      int VAR_1, bool VAR_2)
{
 bool VAR_3 = !VAR_0->active_low;

 if (VAR_2) {
  FUNC_1(VAR_0->col_gpios[VAR_1], VAR_3);
 } else {
  FUNC_2(VAR_0->col_gpios[VAR_1], !VAR_3);
  if (!VAR_0->drive_inactive_cols)
   FUNC_0(VAR_0->col_gpios[VAR_1]);
 }
}

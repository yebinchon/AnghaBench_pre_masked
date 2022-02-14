
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct matrix_keypad_platform_data {scalar_t__ col_scan_delay_us; } ;


 int FUNC_0 (struct matrix_keypad_platform_data const*,int,int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(const struct matrix_keypad_platform_data *VAR_0,
    int VAR_1, bool VAR_2)
{
 FUNC_0(VAR_0, VAR_1, VAR_2);

 if (VAR_2 && VAR_0->col_scan_delay_us)
  FUNC_1(VAR_0->col_scan_delay_us);
}

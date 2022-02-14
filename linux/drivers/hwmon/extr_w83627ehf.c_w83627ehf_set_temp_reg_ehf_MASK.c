
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83627ehf_data {int * reg_temp_config; int * reg_temp_hyst; int * reg_temp_over; int * reg_temp; } ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static void
FUNC_0(struct w83627ehf_data *VAR_4, int VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  VAR_4->reg_temp[VAR_6] = VAR_0[VAR_6];
  VAR_4->reg_temp_over[VAR_6] = VAR_3[VAR_6];
  VAR_4->reg_temp_hyst[VAR_6] = VAR_2[VAR_6];
  VAR_4->reg_temp_config[VAR_6] = VAR_1[VAR_6];
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83627ehf_data {int * reg_temp_config; int * reg_temp_hyst; int * reg_temp_over; int * reg_temp; int * temp_src; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct w83627ehf_data *VAR_0,
       int VAR_1, int VAR_2)
{
 FUNC_0(VAR_0->temp_src[VAR_1], VAR_0->temp_src[VAR_2]);
 FUNC_0(VAR_0->reg_temp[VAR_1], VAR_0->reg_temp[VAR_2]);
 FUNC_0(VAR_0->reg_temp_over[VAR_1], VAR_0->reg_temp_over[VAR_2]);
 FUNC_0(VAR_0->reg_temp_hyst[VAR_1], VAR_0->reg_temp_hyst[VAR_2]);
 FUNC_0(VAR_0->reg_temp_config[VAR_1], VAR_0->reg_temp_config[VAR_2]);
}

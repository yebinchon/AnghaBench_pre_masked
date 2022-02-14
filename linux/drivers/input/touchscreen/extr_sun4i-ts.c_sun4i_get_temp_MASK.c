
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_ts_data {int temp_data; int temp_step; int temp_offset; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const struct sun4i_ts_data *VAR_1, int *VAR_2)
{

 if (VAR_1->temp_data == -1)
  return -VAR_0;

 *VAR_2 = VAR_1->temp_data * VAR_1->temp_step - VAR_1->temp_offset;

 return 0;
}

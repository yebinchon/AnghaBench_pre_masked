
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ssp_data {int * delay_buf; } ;
typedef enum ssp_sensor_type { ____Placeholder_ssp_sensor_type } ssp_sensor_type ;



u32 FUNC_0(struct ssp_data *VAR_0, enum ssp_sensor_type VAR_1)
{
 return VAR_0->delay_buf[VAR_1];
}

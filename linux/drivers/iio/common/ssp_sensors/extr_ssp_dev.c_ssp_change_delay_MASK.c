
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int to_send ;
struct ssp_instruction {int c; void* b; void* a; } ;
struct ssp_data {int * delay_buf; TYPE_1__* spi; int * batch_opt_buf; int * batch_latency_buf; } ;
typedef enum ssp_sensor_type { ____Placeholder_ssp_sensor_type } ssp_sensor_type ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct ssp_data*,int ,int,int *,int) ;

int FUNC_3(struct ssp_data *VAR_1, enum ssp_sensor_type VAR_2,
       u32 VAR_3)
{
 int VAR_4;
 struct ssp_instruction VAR_5;

 VAR_5.a = FUNC_0(VAR_3);
 VAR_5.b = FUNC_0(VAR_1->batch_latency_buf[VAR_2]);
 VAR_5.c = VAR_1->batch_opt_buf[VAR_2];

 VAR_4 = FUNC_2(VAR_1, VAR_0, VAR_2,
       (u8 *)&VAR_5, sizeof(VAR_5));
 if (VAR_4 < 0) {
  FUNC_1(&VAR_1->spi->dev, "Changing sensor delay failed\n");
  return VAR_4;
 }

 VAR_1->delay_buf[VAR_2] = VAR_3;

 return 0;
}

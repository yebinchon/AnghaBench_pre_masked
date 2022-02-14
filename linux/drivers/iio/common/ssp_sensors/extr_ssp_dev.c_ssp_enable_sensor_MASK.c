
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int to_send ;
struct ssp_instruction {int c; void* b; void* a; } ;
struct ssp_data {int* check_status; int enable_refcount; int * delay_buf; TYPE_1__* spi; int sensor_enable; int * batch_opt_buf; int * batch_latency_buf; } ;
typedef enum ssp_sensor_type { ____Placeholder_ssp_sensor_type } ssp_sensor_type ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_1 (int *) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct ssp_data*) ;
 int FUNC_5 (struct ssp_data*,int ,int,int *,int) ;

int FUNC_6(struct ssp_data *VAR_3, enum ssp_sensor_type VAR_4,
        u32 VAR_5)
{
 int VAR_6;
 struct ssp_instruction VAR_7;

 VAR_7.a = FUNC_2(VAR_5);
 VAR_7.b = FUNC_2(VAR_3->batch_latency_buf[VAR_4]);
 VAR_7.c = VAR_3->batch_opt_buf[VAR_4];

 switch (VAR_3->check_status[VAR_4]) {
 case 129:

 case 130:
  VAR_6 = FUNC_5(VAR_3,
        VAR_0,
        VAR_4,
        (u8 *)&VAR_7, sizeof(VAR_7));
  if (VAR_6 < 0) {
   FUNC_3(&VAR_3->spi->dev, "Enabling sensor failed\n");
   VAR_3->check_status[VAR_4] = VAR_2;
   goto derror;
  }

  VAR_3->sensor_enable |= FUNC_0(VAR_4);
  VAR_3->check_status[VAR_4] = 128;
  break;
 case 128:
  VAR_6 = FUNC_5(VAR_3,
        VAR_1, VAR_4,
        (u8 *)&VAR_7, sizeof(VAR_7));
  if (VAR_6 < 0) {
   FUNC_3(&VAR_3->spi->dev,
    "Changing sensor delay failed\n");
   goto derror;
  }
  break;
 default:
  VAR_3->check_status[VAR_4] = 130;
  break;
 }

 VAR_3->delay_buf[VAR_4] = VAR_5;

 if (FUNC_1(&VAR_3->enable_refcount) == 1)
  FUNC_4(VAR_3);

 return 0;

derror:
 return VAR_6;
}

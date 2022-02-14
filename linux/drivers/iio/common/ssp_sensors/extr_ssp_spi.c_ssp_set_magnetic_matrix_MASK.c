
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssp_msg {int dummy; } ;
struct ssp_data {TYPE_1__* sensorhub_info; } ;
struct TYPE_2__ {int mag_length; int mag_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ssp_msg*) ;
 struct ssp_msg* FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct ssp_msg*,int ,int ,int ) ;
 int FUNC_3 (struct ssp_data*,struct ssp_msg*,int) ;

int FUNC_4(struct ssp_data *VAR_3)
{
 int VAR_4;
 struct ssp_msg *VAR_5;

 VAR_5 = FUNC_1(VAR_2,
        VAR_3->sensorhub_info->mag_length, VAR_1,
        0);
 if (!VAR_5)
  return -VAR_0;

 FUNC_2(VAR_5, 0, VAR_3->sensorhub_info->mag_table,
   VAR_3->sensorhub_info->mag_length);

 VAR_4 = FUNC_3(VAR_3, VAR_5, 1000);
 FUNC_0(VAR_5);

 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssp_data {int available_sensors; TYPE_1__* spi; int mcu_dump_mode; int * delay_buf; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct ssp_data*,int ,int ) ;
 int FUNC_3 (struct ssp_data*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct ssp_data *VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
  if (VAR_2->available_sensors & FUNC_0(VAR_3)) {
   VAR_4 = FUNC_3(VAR_2, VAR_3, VAR_2->delay_buf[VAR_3]);
   if (VAR_4 < 0) {
    FUNC_1(&VAR_2->spi->dev,
     "Sync sensor nr: %d fail\n", VAR_3);
    continue;
   }
  }
 }

 VAR_4 = FUNC_2(VAR_2, VAR_0,
     VAR_2->mcu_dump_mode);
 if (VAR_4 < 0)
  FUNC_1(&VAR_2->spi->dev,
   "SSP_MSG2SSP_AP_MCU_SET_DUMPMODE failed\n");
}

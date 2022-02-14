
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ssp_data {scalar_t__ cur_firm_rev; TYPE_2__* sensorhub_info; TYPE_1__* spi; } ;
struct TYPE_4__ {scalar_t__ fw_rev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,char*,int) ;
 scalar_t__ FUNC_3 (struct ssp_data*) ;

__attribute__((used)) static int FUNC_4(struct ssp_data *VAR_4)
{
 int VAR_5 = 0;

 while (VAR_5++ < 5) {
  VAR_4->cur_firm_rev = FUNC_3(VAR_4);
  if (VAR_4->cur_firm_rev == VAR_2 ||
      VAR_4->cur_firm_rev == VAR_3) {
   FUNC_2(&VAR_4->spi->dev,
     "Invalid revision, trying %d time\n", VAR_5);
  } else {
   break;
  }
 }

 if (VAR_4->cur_firm_rev == VAR_2 ||
     VAR_4->cur_firm_rev == VAR_3) {
  FUNC_0(&VAR_4->spi->dev, "SSP_INVALID_REVISION\n");
  return VAR_0;
 }

 FUNC_1(&VAR_4->spi->dev,
   "MCU Firm Rev : Old = %8u, New = %8u\n",
   VAR_4->cur_firm_rev,
   VAR_4->sensorhub_info->fw_rev);

 if (VAR_4->cur_firm_rev != VAR_4->sensorhub_info->fw_rev)
  return VAR_0;

 return VAR_1;
}

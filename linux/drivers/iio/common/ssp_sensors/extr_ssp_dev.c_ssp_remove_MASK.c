
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssp_data {int pending_lock; int comm_lock; int work_wdt; int wdt_timer; TYPE_1__* spi; } ;
struct spi_device {int dev; } ;
struct TYPE_2__ {int irq; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,struct ssp_data*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct ssp_data* FUNC_6 (struct spi_device*) ;
 int FUNC_7 (struct ssp_data*) ;
 scalar_t__ FUNC_8 (struct ssp_data*,int ,int ) ;
 int FUNC_9 (struct ssp_data*) ;
 int FUNC_10 (struct ssp_data*,int) ;

__attribute__((used)) static int FUNC_11(struct spi_device *VAR_1)
{
 struct ssp_data *VAR_2 = FUNC_6(VAR_1);

 if (FUNC_8(VAR_2, VAR_0, 0) < 0)
  FUNC_2(&VAR_2->spi->dev,
   "SSP_MSG2SSP_AP_STATUS_SHUTDOWN failed\n");

 FUNC_10(VAR_2, 0);
 FUNC_9(VAR_2);

 FUNC_7(VAR_2);

 FUNC_3(VAR_2->spi->irq, VAR_2);

 FUNC_1(&VAR_2->wdt_timer);
 FUNC_0(&VAR_2->work_wdt);

 FUNC_5(&VAR_2->comm_lock);
 FUNC_5(&VAR_2->pending_lock);

 FUNC_4(&VAR_1->dev);

 return 0;
}

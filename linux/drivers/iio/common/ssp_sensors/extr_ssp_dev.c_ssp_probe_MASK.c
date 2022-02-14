
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssp_data {scalar_t__ fw_dl_state; int* delay_buf; int time_syncing; int shut_down; int comm_lock; int pending_lock; struct spi_device* spi; int wdt_timer; int work_refresh; int work_wdt; int enable_refcount; int pending_list; int * check_status; scalar_t__* batch_opt_buf; scalar_t__* batch_latency_buf; } ;
struct spi_device {int dev; int irq; int mode; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,struct ssp_data*) ;
 int FUNC_8 (int *,int,int ,int ,int *,int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int *,int ,int,char*,struct ssp_data*) ;
 int VAR_10 ;
 int FUNC_12 (struct spi_device*,struct ssp_data*) ;
 int FUNC_13 (struct spi_device*) ;
 scalar_t__ FUNC_14 (struct ssp_data*) ;
 int FUNC_15 (struct ssp_data*) ;
 int VAR_11 ;
 struct ssp_data* FUNC_16 (int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_17 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_18(struct spi_device *VAR_15)
{
 int VAR_16, VAR_17;
 struct ssp_data *VAR_18;

 VAR_18 = FUNC_16(&VAR_15->dev);
 if (!VAR_18) {
  FUNC_5(&VAR_15->dev, "Failed to find platform data\n");
  return -VAR_0;
 }

 VAR_16 = FUNC_8(&VAR_15->dev, -1, VAR_10,
         FUNC_0(VAR_10), ((void*)0), 0, ((void*)0));
 if (VAR_16 < 0) {
  FUNC_5(&VAR_15->dev, "mfd add devices fail\n");
  return VAR_16;
 }

 VAR_15->mode = VAR_4;
 VAR_16 = FUNC_13(VAR_15);
 if (VAR_16 < 0) {
  FUNC_5(&VAR_15->dev, "Failed to setup spi\n");
  return VAR_16;
 }

 VAR_18->fw_dl_state = VAR_7;
 VAR_18->spi = VAR_15;
 FUNC_12(VAR_15, VAR_18);

 FUNC_10(&VAR_18->comm_lock);

 for (VAR_17 = 0; VAR_17 < VAR_9; ++VAR_17) {
  VAR_18->delay_buf[VAR_17] = VAR_6;
  VAR_18->batch_latency_buf[VAR_17] = 0;
  VAR_18->batch_opt_buf[VAR_17] = 0;
  VAR_18->check_status[VAR_17] = VAR_8;
 }

 VAR_18->delay_buf[VAR_5] = 100;

 VAR_18->time_syncing = 1;

 FUNC_10(&VAR_18->pending_lock);
 FUNC_2(&VAR_18->pending_list);

 FUNC_4(&VAR_18->enable_refcount, 0);

 FUNC_3(&VAR_18->work_wdt, VAR_14);
 FUNC_1(&VAR_18->work_refresh, VAR_12);

 FUNC_17(&VAR_18->wdt_timer, VAR_13, 0);

 VAR_16 = FUNC_11(VAR_18->spi->irq, ((void*)0),
       VAR_11,
       VAR_3 | VAR_2,
       "SSP_Int", VAR_18);
 if (VAR_16 < 0) {
  FUNC_5(&VAR_15->dev, "Irq request fail\n");
  goto err_setup_irq;
 }


 VAR_18->shut_down = 0;


 FUNC_6(VAR_18->spi->irq);

 VAR_18->fw_dl_state = FUNC_14(VAR_18);
 if (VAR_18->fw_dl_state == VAR_7) {
  VAR_16 = FUNC_15(VAR_18);
  if (VAR_16 < 0) {
   FUNC_5(&VAR_15->dev, "Initialize_mcu failed\n");
   goto err_read_reg;
  }
 } else {
  FUNC_5(&VAR_15->dev, "Firmware version not supported\n");
  VAR_16 = -VAR_1;
  goto err_read_reg;
 }

 return 0;

err_read_reg:
 FUNC_7(VAR_18->spi->irq, VAR_18);
err_setup_irq:
 FUNC_9(&VAR_18->pending_lock);
 FUNC_9(&VAR_18->comm_lock);

 FUNC_5(&VAR_15->dev, "Probe failed!\n");

 return VAR_16;
}

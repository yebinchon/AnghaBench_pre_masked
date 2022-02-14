
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct spi_device_id {size_t driver_data; int name; } ;
struct TYPE_7__ {int of_node; } ;
struct spi_device {TYPE_2__ dev; } ;
struct TYPE_6__ {TYPE_2__* parent; } ;
struct iio_dev {int * info; int modes; int name; TYPE_1__ dev; } ;
struct ad7124_state {int * vref; int mclk; int sd; int * chip_info; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct iio_dev*,int ) ;
 int * VAR_6 ;
 int FUNC_5 (struct ad7124_state*) ;
 int VAR_7 ;
 int FUNC_6 (struct ad7124_state*) ;
 int FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (int *,struct iio_dev*,struct spi_device*,int *) ;
 int FUNC_9 (struct iio_dev*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_2__*,char*) ;
 int FUNC_13 (TYPE_2__*,char*) ;
 struct iio_dev* FUNC_14 (TYPE_2__*,int) ;
 int FUNC_15 (TYPE_2__*,int ) ;
 int FUNC_16 (struct iio_dev*) ;
 struct ad7124_state* FUNC_17 (struct iio_dev*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 struct spi_device_id* FUNC_20 (struct spi_device*) ;
 int FUNC_21 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_22(struct spi_device *VAR_8)
{
 const struct spi_device_id *VAR_9;
 struct ad7124_state *VAR_10;
 struct iio_dev *VAR_11;
 int VAR_12, VAR_13;

 VAR_11 = FUNC_14(&VAR_8->dev, sizeof(*VAR_10));
 if (!VAR_11)
  return -VAR_2;

 VAR_10 = FUNC_17(VAR_11);

 VAR_9 = FUNC_20(VAR_8);
 VAR_10->chip_info = &VAR_4[VAR_9->driver_data];

 FUNC_8(&VAR_10->sd, VAR_11, VAR_8, &VAR_7);

 FUNC_21(VAR_8, VAR_11);

 VAR_11->dev.parent = &VAR_8->dev;
 VAR_11->name = FUNC_20(VAR_8)->name;
 VAR_11->modes = VAR_3;
 VAR_11->info = &VAR_5;

 VAR_13 = FUNC_4(VAR_11, VAR_8->dev.of_node);
 if (VAR_13 < 0)
  return VAR_13;

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_10->vref); VAR_12++) {
  if (VAR_12 == VAR_0)
   continue;

  VAR_10->vref[VAR_12] = FUNC_15(&VAR_8->dev,
      VAR_6[VAR_12]);
  if (FUNC_3(VAR_10->vref[VAR_12]) == -VAR_1)
   continue;
  else if (FUNC_1(VAR_10->vref[VAR_12]))
   return FUNC_3(VAR_10->vref[VAR_12]);

  VAR_13 = FUNC_19(VAR_10->vref[VAR_12]);
  if (VAR_13)
   return VAR_13;
 }

 VAR_10->mclk = FUNC_13(&VAR_8->dev, "mclk");
 if (FUNC_1(VAR_10->mclk)) {
  VAR_13 = FUNC_3(VAR_10->mclk);
  goto error_regulator_disable;
 }

 VAR_13 = FUNC_11(VAR_10->mclk);
 if (VAR_13 < 0)
  goto error_regulator_disable;

 VAR_13 = FUNC_6(VAR_10);
 if (VAR_13 < 0)
  goto error_clk_disable_unprepare;

 VAR_13 = FUNC_5(VAR_10);
 if (VAR_13 < 0)
  goto error_clk_disable_unprepare;

 VAR_13 = FUNC_9(VAR_11);
 if (VAR_13 < 0)
  goto error_clk_disable_unprepare;

 VAR_13 = FUNC_16(VAR_11);
 if (VAR_13 < 0) {
  FUNC_12(&VAR_8->dev, "Failed to register iio device\n");
  goto error_remove_trigger;
 }

 return 0;

error_remove_trigger:
 FUNC_7(VAR_11);
error_clk_disable_unprepare:
 FUNC_10(VAR_10->mclk);
error_regulator_disable:
 for (VAR_12 = FUNC_0(VAR_10->vref) - 1; VAR_12 >= 0; VAR_12--) {
  if (!FUNC_2(VAR_10->vref[VAR_12]))
   FUNC_18(VAR_10->vref[VAR_12]);
 }

 return VAR_13;
}

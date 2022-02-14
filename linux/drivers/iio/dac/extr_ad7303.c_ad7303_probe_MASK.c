
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct spi_device_id {int name; } ;
struct TYPE_5__ {struct ad7303_platform_data* platform_data; scalar_t__ of_node; } ;
struct spi_device {TYPE_2__ dev; } ;
struct TYPE_4__ {TYPE_2__* parent; } ;
struct iio_dev {int num_channels; int channels; int modes; int * info; int name; TYPE_1__ dev; } ;
struct ad7303_state {void* vdd_reg; void* vref_reg; int config; struct spi_device* spi; } ;
struct ad7303_platform_data {scalar_t__ use_external_ref; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct iio_dev* FUNC_3 (TYPE_2__*,int) ;
 void* FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (struct iio_dev*) ;
 struct ad7303_state* FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (scalar_t__,char*) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*) ;
 struct spi_device_id* FUNC_10 (struct spi_device*) ;
 int FUNC_11 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_12(struct spi_device *VAR_5)
{
 const struct spi_device_id *VAR_6 = FUNC_10(VAR_5);
 struct iio_dev *VAR_7;
 struct ad7303_state *VAR_8;
 bool VAR_9;
 int VAR_10;

 VAR_7 = FUNC_3(&VAR_5->dev, sizeof(*VAR_8));
 if (VAR_7 == ((void*)0))
  return -VAR_1;

 VAR_8 = FUNC_6(VAR_7);
 FUNC_11(VAR_5, VAR_7);

 VAR_8->spi = VAR_5;

 VAR_8->vdd_reg = FUNC_4(&VAR_5->dev, "Vdd");
 if (FUNC_1(VAR_8->vdd_reg))
  return FUNC_2(VAR_8->vdd_reg);

 VAR_10 = FUNC_9(VAR_8->vdd_reg);
 if (VAR_10)
  return VAR_10;

 if (VAR_5->dev.of_node) {
  VAR_9 = FUNC_7(VAR_5->dev.of_node,
    "REF-supply");
 } else {
  struct ad7303_platform_data *VAR_11 = VAR_5->dev.platform_data;
  if (VAR_11 && VAR_11->use_external_ref)
   VAR_9 = 1;
  else
      VAR_9 = 0;
 }

 if (VAR_9) {
  VAR_8->vref_reg = FUNC_4(&VAR_5->dev, "REF");
  if (FUNC_1(VAR_8->vref_reg)) {
   VAR_10 = FUNC_2(VAR_8->vref_reg);
   goto err_disable_vdd_reg;
  }

  VAR_10 = FUNC_9(VAR_8->vref_reg);
  if (VAR_10)
   goto err_disable_vdd_reg;

  VAR_8->config |= VAR_0;
 }

 VAR_7->dev.parent = &VAR_5->dev;
 VAR_7->name = VAR_6->name;
 VAR_7->info = &VAR_4;
 VAR_7->modes = VAR_2;
 VAR_7->channels = VAR_3;
 VAR_7->num_channels = FUNC_0(VAR_3);

 VAR_10 = FUNC_5(VAR_7);
 if (VAR_10)
  goto err_disable_vref_reg;

 return 0;

err_disable_vref_reg:
 if (VAR_8->vref_reg)
  FUNC_8(VAR_8->vref_reg);
err_disable_vdd_reg:
 FUNC_8(VAR_8->vdd_reg);
 return VAR_10;
}

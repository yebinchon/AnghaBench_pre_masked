
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int of_node; } ;
struct spi_device {TYPE_4__ dev; } ;
struct TYPE_9__ {int of_node; TYPE_4__* parent; } ;
struct iio_dev {int num_channels; int channels; int * info; int modes; int name; TYPE_1__ dev; } ;
struct TYPE_10__ {int len; int rx_buf; int tx_buf; } ;
struct adc084s021 {int lock; int reg; TYPE_2__ spi_trans; int message; int rx_buf; int tx_buf; struct spi_device* spi; } ;
struct TYPE_11__ {int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_4__*,char*) ;
 struct iio_dev* FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (TYPE_4__*,struct iio_dev*) ;
 int FUNC_6 (TYPE_4__*,struct iio_dev*,int *,int ,int *) ;
 int FUNC_7 (TYPE_4__*,char*) ;
 struct adc084s021* FUNC_8 (struct iio_dev*) ;
 int FUNC_9 (int *) ;
 TYPE_3__* FUNC_10 (struct spi_device*) ;
 int FUNC_11 (int *,TYPE_2__*,int) ;
 int FUNC_12 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_13(struct spi_device *VAR_6)
{
 struct iio_dev *VAR_7;
 struct adc084s021 *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_4(&VAR_6->dev, sizeof(*VAR_8));
 if (!VAR_7) {
  FUNC_3(&VAR_6->dev, "Failed to allocate IIO device\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_8(VAR_7);
 VAR_8->spi = VAR_6;


 FUNC_12(VAR_6, VAR_7);


 VAR_7->dev.parent = &VAR_6->dev;
 VAR_7->dev.of_node = VAR_6->dev.of_node;
 VAR_7->name = FUNC_10(VAR_6)->name;
 VAR_7->modes = VAR_1;
 VAR_7->info = &VAR_5;
 VAR_7->channels = VAR_4;
 VAR_7->num_channels = FUNC_0(VAR_4);


 VAR_8->spi_trans.tx_buf = VAR_8->tx_buf;
 VAR_8->spi_trans.rx_buf = VAR_8->rx_buf;
 VAR_8->spi_trans.len = 4;
 FUNC_11(&VAR_8->message, &VAR_8->spi_trans, 1);

 VAR_8->reg = FUNC_7(&VAR_6->dev, "vref");
 if (FUNC_1(VAR_8->reg))
  return FUNC_2(VAR_8->reg);

 FUNC_9(&VAR_8->lock);


 VAR_9 = FUNC_6(&VAR_6->dev, VAR_7, ((void*)0),
         VAR_3,
         &VAR_2);
 if (VAR_9) {
  FUNC_3(&VAR_6->dev, "Failed to setup triggered buffer\n");
  return VAR_9;
 }

 return FUNC_5(&VAR_6->dev, VAR_7);
}

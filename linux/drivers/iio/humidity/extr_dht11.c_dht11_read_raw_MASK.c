
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int name; } ;
struct iio_chan_spec {scalar_t__ type; } ;
struct dht11 {scalar_t__ timestamp; int num_edges; int temperature; int humidity; int lock; int dev; int irq; int completion; int gpiod; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct dht11*,int) ;
 int FUNC_4 (struct dht11*) ;
 int VAR_17 ;
 int FUNC_5 (int ,struct iio_dev*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 struct dht11* FUNC_8 (struct iio_dev*) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int ,int,int ,struct iio_dev*) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int *,int ) ;

__attribute__((used)) static int FUNC_17(struct iio_dev *VAR_18,
     const struct iio_chan_spec *VAR_19,
   int *VAR_20, int *VAR_21, long VAR_22)
{
 struct dht11 *VAR_23 = FUNC_8(VAR_18);
 int VAR_24, VAR_25, VAR_26;

 FUNC_11(&VAR_23->lock);
 if (VAR_23->timestamp + VAR_2 < FUNC_9()) {
  VAR_25 = FUNC_10();
  FUNC_0(VAR_23->dev, "current timeresolution: %dns\n", VAR_25);
  if (VAR_25 > VAR_5) {
   FUNC_1(VAR_23->dev, "timeresolution %dns too low\n",
    VAR_25);




   VAR_24 = -VAR_8;
   goto err;
  }
  if (VAR_25 > VAR_1 && VAR_25 < VAR_0)
   FUNC_2(VAR_23->dev,
     "timeresolution: %dns - decoding ambiguous\n",
     VAR_25);

  FUNC_13(&VAR_23->completion);

  VAR_23->num_edges = 0;
  VAR_24 = FUNC_7(VAR_23->gpiod, 0);
  if (VAR_24)
   goto err;
  FUNC_15(VAR_7,
        VAR_6);
  VAR_24 = FUNC_6(VAR_23->gpiod);
  if (VAR_24)
   goto err;

  VAR_24 = FUNC_14(VAR_23->irq, VAR_17,
      VAR_16 | VAR_15,
      VAR_18->name, VAR_18);
  if (VAR_24)
   goto err;

  VAR_24 = FUNC_16(&VAR_23->completion,
          VAR_11);

  FUNC_5(VAR_23->irq, VAR_18);





  if (VAR_24 == 0 && VAR_23->num_edges < VAR_3 - 1) {
   FUNC_1(VAR_23->dev, "Only %d signal edges detected\n",
    VAR_23->num_edges);
   VAR_24 = -VAR_10;
  }
  if (VAR_24 < 0)
   goto err;

  VAR_26 = VAR_4 +
    VAR_23->num_edges - VAR_3;
  for (; VAR_26 >= 0; --VAR_26) {
   VAR_24 = FUNC_3(VAR_23, VAR_26);
   if (!VAR_24)
    break;
  }

  if (VAR_24)
   goto err;
 }

 VAR_24 = VAR_14;
 if (VAR_19->type == VAR_13)
  *VAR_20 = VAR_23->temperature;
 else if (VAR_19->type == VAR_12)
  *VAR_20 = VAR_23->humidity;
 else
  VAR_24 = -VAR_9;
err:
 VAR_23->num_edges = -1;
 FUNC_12(&VAR_23->lock);
 return VAR_24;
}

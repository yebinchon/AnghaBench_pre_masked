
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int of_node; } ;
struct spi_device {TYPE_2__ dev; } ;
struct max11100_state {int vref_reg; struct spi_device* spi; } ;
struct TYPE_4__ {int of_node; TYPE_2__* parent; } ;
struct iio_dev {char* name; int num_channels; int channels; int modes; int * info; TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct iio_dev* FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (struct iio_dev*) ;
 struct max11100_state* FUNC_6 (struct iio_dev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_10(struct spi_device *VAR_4)
{
 int VAR_5;
 struct iio_dev *VAR_6;
 struct max11100_state *VAR_7;

 VAR_6 = FUNC_3(&VAR_4->dev, sizeof(*VAR_7));
 if (!VAR_6)
  return -VAR_0;

 FUNC_9(VAR_4, VAR_6);

 VAR_7 = FUNC_6(VAR_6);
 VAR_7->spi = VAR_4;

 VAR_6->dev.parent = &VAR_4->dev;
 VAR_6->dev.of_node = VAR_4->dev.of_node;
 VAR_6->name = "max11100";
 VAR_6->info = &VAR_3;
 VAR_6->modes = VAR_1;
 VAR_6->channels = VAR_2;
 VAR_6->num_channels = FUNC_0(VAR_2);

 VAR_7->vref_reg = FUNC_4(&VAR_4->dev, "vref");
 if (FUNC_1(VAR_7->vref_reg))
  return FUNC_2(VAR_7->vref_reg);

 VAR_5 = FUNC_8(VAR_7->vref_reg);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_5(VAR_6);
 if (VAR_5)
  goto disable_regulator;

 return 0;

disable_regulator:
 FUNC_7(VAR_7->vref_reg);

 return VAR_5;
}

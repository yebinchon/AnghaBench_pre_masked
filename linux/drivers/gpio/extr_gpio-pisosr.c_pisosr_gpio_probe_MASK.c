
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device {int of_node; } ;
struct spi_device {struct device dev; } ;
struct TYPE_3__ {int ngpio; struct device* parent; } ;
struct pisosr_gpio {int buffer_size; TYPE_1__ chip; int lock; int load_gpio; void* buffer; struct spi_device* spi; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*,int ) ;
 void* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (TYPE_1__*,struct pisosr_gpio*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char*,int *) ;
 int FUNC_9 (struct spi_device*,struct pisosr_gpio*) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static int FUNC_10(struct spi_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct pisosr_gpio *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_5(VAR_6, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_0;

 FUNC_9(VAR_5, VAR_7);

 VAR_7->chip = VAR_4;
 VAR_7->chip.parent = VAR_6;
 FUNC_8(VAR_6->of_node, "ngpios", &VAR_7->chip.ngpio);

 VAR_7->spi = VAR_5;

 VAR_7->buffer_size = FUNC_0(VAR_7->chip.ngpio, 8);
 VAR_7->buffer = FUNC_5(VAR_6, VAR_7->buffer_size, VAR_2);
 if (!VAR_7->buffer)
  return -VAR_0;

 VAR_7->load_gpio = FUNC_4(VAR_6, "load", VAR_3);
 if (FUNC_1(VAR_7->load_gpio)) {
  VAR_8 = FUNC_2(VAR_7->load_gpio);
  if (VAR_8 != -VAR_1)
   FUNC_3(VAR_6, "Unable to allocate load GPIO\n");
  return VAR_8;
 }

 FUNC_7(&VAR_7->lock);

 VAR_8 = FUNC_6(&VAR_7->chip, VAR_7);
 if (VAR_8 < 0) {
  FUNC_3(VAR_6, "Unable to register gpiochip\n");
  return VAR_8;
 }

 return 0;
}

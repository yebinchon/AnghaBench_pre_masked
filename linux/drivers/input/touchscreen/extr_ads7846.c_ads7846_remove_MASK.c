
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int kobj; } ;
struct spi_device {TYPE_2__ dev; } ;
struct ads7846 {struct ads7846* packet; int filter_data; int (* filter_cleanup ) (int ) ;int gpio_pendown; int get_pendown_state; int reg; int input; TYPE_1__* spi; } ;
struct TYPE_3__ {int irq; } ;


 int FUNC_0 (struct ads7846*) ;
 int VAR_0 ;
 int FUNC_1 (struct spi_device*,struct ads7846*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (int ,struct ads7846*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ads7846*) ;
 int FUNC_7 (int ) ;
 struct ads7846* FUNC_8 (struct spi_device*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int *) ;

__attribute__((used)) static int FUNC_11(struct spi_device *VAR_1)
{
 struct ads7846 *VAR_2 = FUNC_8(VAR_1);

 FUNC_10(&VAR_1->dev.kobj, &VAR_0);

 FUNC_0(VAR_2);
 FUNC_3(VAR_2->spi->irq, VAR_2);

 FUNC_5(VAR_2->input);

 FUNC_1(VAR_1, VAR_2);

 FUNC_7(VAR_2->reg);

 if (!VAR_2->get_pendown_state) {




  FUNC_4(VAR_2->gpio_pendown);
 }

 if (VAR_2->filter_cleanup)
  VAR_2->filter_cleanup(VAR_2->filter_data);

 FUNC_6(VAR_2->packet);
 FUNC_6(VAR_2);

 FUNC_2(&VAR_1->dev, "unregistered touchscreen\n");

 return 0;
}

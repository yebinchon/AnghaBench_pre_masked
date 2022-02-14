
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {int irq; int dev; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int *) ;
 TYPE_1__* FUNC_1 (struct spi_device*) ;

__attribute__((used)) static int FUNC_2(struct spi_device *VAR_1)
{
 return FUNC_0(&VAR_1->dev, FUNC_1(VAR_1)->name, VAR_1->irq,
   &VAR_0);
}

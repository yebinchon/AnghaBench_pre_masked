
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssp_data {int shut_down; TYPE_1__* spi; } ;
struct TYPE_2__ {int dev; int irq; } ;


 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *,char*,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct ssp_data *VAR_0, bool VAR_1)
{
 FUNC_0(&VAR_0->spi->dev, "current shutdown = %d, old = %d\n", VAR_1,
   VAR_0->shut_down);

 if (VAR_1 && VAR_0->shut_down) {
  VAR_0->shut_down = 0;
  FUNC_4(VAR_0->spi->irq);
  FUNC_5(VAR_0->spi->irq);
 } else if (!VAR_1 && !VAR_0->shut_down) {
  VAR_0->shut_down = 1;
  FUNC_2(VAR_0->spi->irq);
  FUNC_3(VAR_0->spi->irq);
 } else {
  FUNC_1(&VAR_0->spi->dev, "current shutdown = %d, old = %d\n",
    VAR_1, VAR_0->shut_down);
 }
}

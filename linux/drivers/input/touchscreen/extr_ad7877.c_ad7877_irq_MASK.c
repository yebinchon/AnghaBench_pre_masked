
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ad7877 {int lock; int timer; TYPE_1__* spi; int msg; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ad7877*) ;
 int FUNC_1 (int *,char*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_3, void *VAR_4)
{
 struct ad7877 *VAR_5 = VAR_4;
 unsigned long VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_5->spi, &VAR_5->msg);
 if (VAR_7) {
  FUNC_1(&VAR_5->spi->dev, "spi_sync --> %d\n", VAR_7);
  goto out;
 }

 FUNC_4(&VAR_5->lock, VAR_6);
 VAR_7 = FUNC_0(VAR_5);
 if (!VAR_7)
  FUNC_2(&VAR_5->timer, VAR_2 + VAR_1);
 FUNC_5(&VAR_5->lock, VAR_6);

out:
 return VAR_0;
}

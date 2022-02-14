
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct moxtet {int lock; int dev; int dev_irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,struct moxtet*) ;
 int FUNC_2 (struct moxtet*) ;
 int FUNC_3 (struct moxtet*) ;
 int FUNC_4 (int *) ;
 struct moxtet* FUNC_5 (struct spi_device*) ;

__attribute__((used)) static int FUNC_6(struct spi_device *VAR_1)
{
 struct moxtet *VAR_2 = FUNC_5(VAR_1);

 FUNC_1(VAR_2->dev_irq, VAR_2);

 FUNC_2(VAR_2);

 FUNC_3(VAR_2);

 FUNC_0(VAR_2->dev, ((void*)0), VAR_0);

 FUNC_4(&VAR_2->lock);

 return 0;
}

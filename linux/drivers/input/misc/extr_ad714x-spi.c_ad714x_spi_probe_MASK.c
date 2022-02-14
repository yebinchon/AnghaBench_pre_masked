
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int bits_per_word; int irq; int dev; } ;
struct ad714x_chip {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ad714x_chip*) ;
 int FUNC_1 (struct ad714x_chip*) ;
 struct ad714x_chip* FUNC_2 (int *,int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct spi_device*,struct ad714x_chip*) ;
 int FUNC_4 (struct spi_device*) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_3)
{
 struct ad714x_chip *VAR_4;
 int VAR_5;

 VAR_3->bits_per_word = 8;
 VAR_5 = FUNC_4(VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4 = FUNC_2(&VAR_3->dev, VAR_0, VAR_3->irq,
       VAR_1, VAR_2);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 FUNC_3(VAR_3, VAR_4);

 return 0;
}

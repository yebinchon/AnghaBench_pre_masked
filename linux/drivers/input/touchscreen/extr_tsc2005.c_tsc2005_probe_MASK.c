
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int bits_per_word; int irq; int dev; scalar_t__ max_speed_hz; int mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct spi_device*,int *) ;
 int FUNC_1 (struct spi_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ,int *,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_5)
{
 int VAR_6;

 VAR_5->mode = VAR_0;
 VAR_5->bits_per_word = 8;
 if (!VAR_5->max_speed_hz)
  VAR_5->max_speed_hz = VAR_1;

 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6)
  return VAR_6;

 return FUNC_2(&VAR_5->dev, VAR_5->irq, &VAR_3,
        FUNC_0(VAR_5, &VAR_4),
        VAR_2);
}

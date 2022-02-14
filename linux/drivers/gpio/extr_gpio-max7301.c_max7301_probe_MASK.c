
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int bits_per_word; int dev; } ;
struct max7301 {int * dev; int write; int read; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct max7301*) ;
 struct max7301* FUNC_1 (int *,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct spi_device*) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_4)
{
 struct max7301 *VAR_5;
 int VAR_6;


 VAR_4->bits_per_word = 16;
 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5 = FUNC_1(&VAR_4->dev, sizeof(struct max7301), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->read = VAR_2;
 VAR_5->write = VAR_3;
 VAR_5->dev = &VAR_4->dev;

 VAR_6 = FUNC_0(VAR_5);
 return VAR_6;
}

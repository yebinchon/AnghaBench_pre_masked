
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;
struct device {int dummy; } ;
typedef int __be16 ;


 unsigned short FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct spi_device*,void*,int) ;
 struct spi_device* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0,
     int VAR_1, void *VAR_2)
{
 struct spi_device *VAR_3 = FUNC_3(VAR_0);
 int VAR_4, VAR_5;
 unsigned short *VAR_6 = VAR_2;
 __be16 *VAR_7 = VAR_2;

 VAR_5 = FUNC_2(VAR_3, VAR_2, VAR_1 * 2);
 if (VAR_5 < 0) {
  FUNC_1(&VAR_3->dev, "SPI read error\n");
  return VAR_5;
 }

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  VAR_6[VAR_4] = FUNC_0(VAR_7[VAR_4]);

 return 0;
}

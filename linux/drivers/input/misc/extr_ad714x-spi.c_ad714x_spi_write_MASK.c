
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dummy; } ;
struct ad714x_chip {int dev; void** xfer_buf; } ;


 unsigned short VAR_0 ;
 void* FUNC_0 (unsigned short) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct spi_device*,int *,int) ;
 struct spi_device* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct ad714x_chip *VAR_1,
       unsigned short VAR_2, unsigned short VAR_3)
{
 struct spi_device *VAR_4 = FUNC_3(VAR_1->dev);
 int VAR_5;

 VAR_1->xfer_buf[0] = FUNC_0(VAR_0 | VAR_2);
 VAR_1->xfer_buf[1] = FUNC_0(VAR_3);

 VAR_5 = FUNC_2(VAR_4, (u8 *)VAR_1->xfer_buf,
     2 * sizeof(*VAR_1->xfer_buf));
 if (FUNC_4(VAR_5)) {
  FUNC_1(VAR_1->dev, "SPI write error: %d\n", VAR_5);
  return VAR_5;
 }

 return 0;
}

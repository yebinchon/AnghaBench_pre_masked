
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfer ;
struct spi_transfer {int len; int * rx_buf; int * tx_buf; } ;
struct spi_message {int dummy; } ;
struct spi_device {int dummy; } ;
struct ad714x_chip {int * xfer_buf; int dev; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short FUNC_0 (int ) ;
 int FUNC_1 (unsigned short) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct spi_transfer*,int ,int) ;
 int FUNC_4 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_5 (struct spi_message*) ;
 int FUNC_6 (struct spi_device*,struct spi_message*) ;
 struct spi_device* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct ad714x_chip *VAR_2,
      unsigned short VAR_3, unsigned short *VAR_4, size_t VAR_5)
{
 struct spi_device *VAR_6 = FUNC_7(VAR_2->dev);
 struct spi_message VAR_7;
 struct spi_transfer VAR_8[2];
 int VAR_9;
 int VAR_10;

 FUNC_5(&VAR_7);
 FUNC_3(VAR_8, 0, sizeof(VAR_8));

 VAR_2->xfer_buf[0] = FUNC_1(VAR_0 |
     VAR_1 | VAR_3);
 VAR_8[0].tx_buf = &VAR_2->xfer_buf[0];
 VAR_8[0].len = sizeof(VAR_2->xfer_buf[0]);
 FUNC_4(&VAR_8[0], &VAR_7);

 VAR_8[1].rx_buf = &VAR_2->xfer_buf[1];
 VAR_8[1].len = sizeof(VAR_2->xfer_buf[1]) * VAR_5;
 FUNC_4(&VAR_8[1], &VAR_7);

 VAR_10 = FUNC_6(VAR_6, &VAR_7);
 if (FUNC_8(VAR_10)) {
  FUNC_2(VAR_2->dev, "SPI read error: %d\n", VAR_10);
  return VAR_10;
 }

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
  VAR_4[VAR_9] = FUNC_0(VAR_2->xfer_buf[VAR_9 + 1]);

 return 0;
}

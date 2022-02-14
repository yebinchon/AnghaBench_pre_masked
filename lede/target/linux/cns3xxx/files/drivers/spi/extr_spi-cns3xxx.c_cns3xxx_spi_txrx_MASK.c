
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct spi_transfer {int* tx_buf; int* rx_buf; int len; scalar_t__ last_in_message_list; } ;
struct spi_device {int dev; int chip_select; } ;
struct cns3xxx_spi {int* tx; int* rx; int len; int done; scalar_t__ last_in_message_list; scalar_t__ count; } ;


 int FUNC_0 (struct cns3xxx_spi*,int ,int,int,void**) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *) ;
 struct cns3xxx_spi* FUNC_3 (struct spi_device*) ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_0, struct spi_transfer *VAR_1)
{
 struct cns3xxx_spi *VAR_2 = FUNC_3(VAR_0);

 FUNC_1(&VAR_0->dev, "txrx: tx %p, rx %p, len %d\n", VAR_1->tx_buf, VAR_1->rx_buf,
  VAR_1->len);

 VAR_2->tx = VAR_1->tx_buf;
 VAR_2->rx = VAR_1->rx_buf;
 VAR_2->len = VAR_1->len;
 VAR_2->count = 0;
 VAR_2->last_in_message_list = VAR_1->last_in_message_list;

 FUNC_2(&VAR_2->done);

 if (VAR_2->tx) {
  int VAR_3;
  u32 VAR_4;
  for (VAR_3 = 0; VAR_3 < (VAR_2->len - 1); VAR_3++) {
   FUNC_1(&VAR_0->dev,
    "[SPI_CNS3XXX_DEBUG] hw->tx[%02d]: 0x%02x\n", VAR_3,
    VAR_2->tx[VAR_3]);
   FUNC_0(VAR_2, VAR_0->chip_select, 0, VAR_2->tx[VAR_3],
       &VAR_4);
   if (VAR_2->rx) {
    VAR_2->rx[VAR_3] = VAR_4;
    FUNC_1(&VAR_0->dev,
     "[SPI_CNS3XXX_DEBUG] hw->rx[%02d]: 0x%02x\n",
     VAR_3, VAR_2->rx[VAR_3]);
   }
  }

  if (VAR_1->last_in_message_list) {
   FUNC_0(VAR_2, VAR_0->chip_select, 1, VAR_2->tx[VAR_3],
       &VAR_4);
   if (VAR_2->rx) {
    VAR_2->rx[VAR_3] = VAR_4;
    FUNC_1(&VAR_0->dev,
     "[SPI_CNS3XXX_DEBUG] hw->rx[%02d]: 0x%02x\n",
     VAR_3, VAR_2->rx[VAR_3]);
   }
  } else {
   FUNC_0(VAR_2, VAR_0->chip_select, 0, VAR_2->tx[VAR_3],
       &VAR_4);
  }
  goto done;
 }

 if (VAR_2->rx) {
  int VAR_5;
  u32 VAR_6;
  for (VAR_5 = 0; VAR_5 < (VAR_2->len - 1); VAR_5++) {
   FUNC_0(VAR_2, VAR_0->chip_select, 0, 0xff, &VAR_6);
   VAR_2->rx[VAR_5] = VAR_6;
   FUNC_1(&VAR_0->dev,
    "[SPI_CNS3XXX_DEBUG] hw->rx[%02d]: 0x%02x\n", VAR_5,
    VAR_2->rx[VAR_5]);
  }

  if (VAR_1->last_in_message_list) {
   FUNC_0(VAR_2, VAR_0->chip_select, 1, 0xff, &VAR_6);
  } else {
   FUNC_0(VAR_2, VAR_0->chip_select, 0, 0xff, &VAR_6);
  }
  VAR_2->rx[VAR_5] = VAR_6;
  FUNC_1(&VAR_0->dev, "[SPI_CNS3XXX_DEBUG] hw->rx[%02d]: 0x%02x\n",
   VAR_5, VAR_2->rx[VAR_5]);
 }
done:
 return VAR_2->len;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int len; int * rx_buf; int * tx_buf; } ;
struct spi_message {int dummy; } ;
struct max1111_data {int * rx_buf; int * tx_buf; struct spi_transfer* xfer; struct spi_message msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_1 (struct spi_message*) ;

__attribute__((used)) static int FUNC_2(struct max1111_data *VAR_2)
{
 struct spi_message *VAR_3;
 struct spi_transfer *VAR_4;

 VAR_3 = &VAR_2->msg;
 VAR_4 = &VAR_2->xfer[0];

 FUNC_1(VAR_3);

 VAR_4->tx_buf = &VAR_2->tx_buf[0];
 VAR_4->len = VAR_1;
 FUNC_0(VAR_4, VAR_3);

 VAR_4++;
 VAR_4->rx_buf = &VAR_2->rx_buf[0];
 VAR_4->len = VAR_0;
 FUNC_0(VAR_4, VAR_3);

 return 0;
}

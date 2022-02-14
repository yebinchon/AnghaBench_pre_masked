
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct spi_transfer {int dummy; } ;
struct spi_device {int dev; } ;
struct TYPE_4__ {scalar_t__ write_delay_us; scalar_t__ read_delay_us; } ;
struct TYPE_5__ {TYPE_1__ spi_data; } ;
struct TYPE_6__ {TYPE_2__ pdata; } ;
struct rmi_spi_xport {int xfer_buf_size; int rx_xfer_count; int tx_xfer_count; struct spi_transfer* tx_xfers; struct spi_transfer* rx_xfers; TYPE_3__ xport; int * rx_buf; int * tx_buf; struct spi_device* spi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int *,int,int,int) ;
 int FUNC_1 (int *,void*) ;

__attribute__((used)) static int FUNC_2(struct rmi_spi_xport *VAR_5, int VAR_6)
{
 struct spi_device *VAR_7 = VAR_5->spi;
 int VAR_8 = VAR_5->xfer_buf_size
  ? VAR_5->xfer_buf_size : VAR_3;
 struct spi_transfer *VAR_9;
 void *VAR_10;
 void *VAR_11;

 while (VAR_8 < VAR_6)
  VAR_8 *= 2;

 if (VAR_8 > VAR_4)
  VAR_8 = VAR_4;

 VAR_11 = VAR_5->rx_buf;
 VAR_10 = FUNC_0(&VAR_7->dev, VAR_8, 2,
    VAR_2 | VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_5->rx_buf = VAR_10;
 VAR_5->tx_buf = &VAR_5->rx_buf[VAR_8];
 VAR_5->xfer_buf_size = VAR_8;

 if (VAR_11)
  FUNC_1(&VAR_7->dev, VAR_11);

 if (VAR_5->xport.pdata.spi_data.read_delay_us)
  VAR_5->rx_xfer_count = VAR_8;
 else
  VAR_5->rx_xfer_count = 1;

 if (VAR_5->xport.pdata.spi_data.write_delay_us)
  VAR_5->tx_xfer_count = VAR_8;
 else
  VAR_5->tx_xfer_count = 1;





 VAR_11 = VAR_5->rx_xfers;
 VAR_9 = FUNC_0(&VAR_7->dev,
  VAR_5->rx_xfer_count + VAR_5->tx_xfer_count,
  sizeof(struct spi_transfer),
  VAR_2);
 if (!VAR_9)
  return -VAR_0;

 VAR_5->rx_xfers = VAR_9;
 VAR_5->tx_xfers = &VAR_9[VAR_5->rx_xfer_count];

 if (VAR_11)
  FUNC_1(&VAR_7->dev, VAR_11);

 return 0;
}

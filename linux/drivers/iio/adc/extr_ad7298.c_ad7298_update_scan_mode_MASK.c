
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int masklength; } ;
struct ad7298_state {unsigned short ext_ref; TYPE_1__* ring_xfer; int ring_msg; int * rx_buf; int * tx_buf; } ;
struct TYPE_2__ {int len; int cs_change; int * rx_buf; int * tx_buf; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned short VAR_1 ;
 int FUNC_1 (unsigned long const*,int ) ;
 int FUNC_2 (unsigned short) ;
 struct ad7298_state* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int,unsigned long const*) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_2,
 const unsigned long *VAR_3)
{
 struct ad7298_state *VAR_4 = FUNC_3(VAR_2);
 int VAR_5, VAR_6;
 unsigned short VAR_7;
 int VAR_8;


 VAR_8 = FUNC_1(VAR_3, VAR_2->masklength);

 VAR_7 = VAR_1 | VAR_4->ext_ref;

 for (VAR_5 = 0, VAR_6 = FUNC_0(0); VAR_5 < VAR_0; VAR_5++, VAR_6 >>= 1)
  if (FUNC_6(VAR_5, VAR_3))
   VAR_7 |= VAR_6;

 VAR_4->tx_buf[0] = FUNC_2(VAR_7);


 VAR_4->ring_xfer[0].tx_buf = &VAR_4->tx_buf[0];
 VAR_4->ring_xfer[0].len = 2;
 VAR_4->ring_xfer[0].cs_change = 1;
 VAR_4->ring_xfer[1].tx_buf = &VAR_4->tx_buf[1];
 VAR_4->ring_xfer[1].len = 2;
 VAR_4->ring_xfer[1].cs_change = 1;

 FUNC_5(&VAR_4->ring_msg);
 FUNC_4(&VAR_4->ring_xfer[0], &VAR_4->ring_msg);
 FUNC_4(&VAR_4->ring_xfer[1], &VAR_4->ring_msg);

 for (VAR_5 = 0; VAR_5 < VAR_8; VAR_5++) {
  VAR_4->ring_xfer[VAR_5 + 2].rx_buf = &VAR_4->rx_buf[VAR_5];
  VAR_4->ring_xfer[VAR_5 + 2].len = 2;
  VAR_4->ring_xfer[VAR_5 + 2].cs_change = 1;
  FUNC_4(&VAR_4->ring_xfer[VAR_5 + 2], &VAR_4->ring_msg);
 }

 VAR_4->ring_xfer[VAR_5 + 1].cs_change = 0;

 return 0;
}

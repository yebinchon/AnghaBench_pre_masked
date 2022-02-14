
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct iio_dev {int num_channels; } ;
struct adis {int msg; TYPE_2__* xfer; scalar_t__* buffer; TYPE_1__* burst; } ;
struct TYPE_6__ {int bits_per_word; int len; scalar_t__* rx_buf; scalar_t__* tx_buf; } ;
struct TYPE_5__ {int reg_cmd; scalar_t__ extra_len; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct adis* FUNC_1 (struct iio_dev*) ;
 TYPE_2__* FUNC_2 (int,int,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__* FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_2,
 const unsigned long *VAR_3)
{
 struct adis *VAR_4 = FUNC_1(VAR_2);
 unsigned int VAR_5;
 u8 *VAR_6;


 VAR_5 = (VAR_2->num_channels - 1) * sizeof(u16);
 VAR_5 += VAR_4->burst->extra_len;

 VAR_4->xfer = FUNC_2(2, sizeof(*VAR_4->xfer), VAR_1);
 if (!VAR_4->xfer)
  return -VAR_0;

 VAR_4->buffer = FUNC_4(VAR_5 + sizeof(u16), VAR_1);
 if (!VAR_4->buffer) {
  FUNC_3(VAR_4->xfer);
  VAR_4->xfer = ((void*)0);
  return -VAR_0;
 }

 VAR_6 = VAR_4->buffer + VAR_5;
 VAR_6[0] = FUNC_0(VAR_4->burst->reg_cmd);
 VAR_6[1] = 0;

 VAR_4->xfer[0].tx_buf = VAR_6;
 VAR_4->xfer[0].bits_per_word = 8;
 VAR_4->xfer[0].len = 2;
 VAR_4->xfer[1].rx_buf = VAR_4->buffer;
 VAR_4->xfer[1].bits_per_word = 8;
 VAR_4->xfer[1].len = VAR_5;

 FUNC_6(&VAR_4->msg);
 FUNC_5(&VAR_4->xfer[0], &VAR_4->msg);
 FUNC_5(&VAR_4->xfer[1], &VAR_4->msg);

 return 0;
}

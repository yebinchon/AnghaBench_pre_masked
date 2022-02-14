
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct spi_device {int dummy; } ;
struct device {int dummy; } ;
struct ads7846 {int lock; } ;
struct ads7845_ser_req {int * sample; int msg; TYPE_1__* xfer; scalar_t__* command; } ;
struct TYPE_2__ {int len; int * rx_buf; scalar_t__* tx_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ads7846*) ;
 int FUNC_1 (struct ads7846*) ;
 int FUNC_2 (int ) ;
 struct ads7846* FUNC_3 (struct device*) ;
 int FUNC_4 (struct ads7845_ser_req*) ;
 struct ads7845_ser_req* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct spi_device*,int *) ;
 struct spi_device* FUNC_11 (struct device*) ;

__attribute__((used)) static int FUNC_12(struct device *VAR_2, unsigned VAR_3)
{
 struct spi_device *VAR_4 = FUNC_11(VAR_2);
 struct ads7846 *VAR_5 = FUNC_3(VAR_2);
 struct ads7845_ser_req *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_5(sizeof *VAR_6, VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_9(&VAR_6->msg);

 VAR_6->command[0] = (u8) VAR_3;
 VAR_6->xfer[0].tx_buf = VAR_6->command;
 VAR_6->xfer[0].rx_buf = VAR_6->sample;
 VAR_6->xfer[0].len = 3;
 FUNC_8(&VAR_6->xfer[0], &VAR_6->msg);

 FUNC_6(&VAR_5->lock);
 FUNC_1(VAR_5);
 VAR_7 = FUNC_10(VAR_4, &VAR_6->msg);
 FUNC_0(VAR_5);
 FUNC_7(&VAR_5->lock);

 if (VAR_7 == 0) {

  VAR_7 = FUNC_2(*((u16 *)&VAR_6->sample[1]));
  VAR_7 = VAR_7 >> 3;
  VAR_7 &= 0x0fff;
 }

 FUNC_4(VAR_6);
 return VAR_7;
}

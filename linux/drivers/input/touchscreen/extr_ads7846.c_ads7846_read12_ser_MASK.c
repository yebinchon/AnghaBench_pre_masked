
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct spi_device {int dummy; } ;
struct ser_req {int sample; int msg; TYPE_1__* xfer; int scratch; scalar_t__ ref_off; scalar_t__ command; scalar_t__ ref_on; } ;
struct device {int dummy; } ;
struct ads7846 {int lock; int vref_delay_usecs; scalar_t__ use_internal; } ;
struct TYPE_3__ {int len; int * rx_buf; scalar_t__* tx_buf; int delay_usecs; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (TYPE_1__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct ads7846*) ;
 int FUNC_2 (struct ads7846*) ;
 int FUNC_3 (int ) ;
 struct ads7846* FUNC_4 (struct device*) ;
 int FUNC_5 (struct ser_req*) ;
 struct ser_req* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct spi_device*,int *) ;
 struct spi_device* FUNC_12 (struct device*) ;

__attribute__((used)) static int FUNC_13(struct device *VAR_6, unsigned VAR_7)
{
 struct spi_device *VAR_8 = FUNC_12(VAR_6);
 struct ads7846 *VAR_9 = FUNC_4(VAR_6);
 struct ser_req *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_6(sizeof *VAR_10, VAR_3);
 if (!VAR_10)
  return -VAR_2;

 FUNC_10(&VAR_10->msg);


 if (VAR_9->use_internal) {
  VAR_10->ref_on = VAR_5;
  VAR_10->xfer[0].tx_buf = &VAR_10->ref_on;
  VAR_10->xfer[0].len = 1;
  FUNC_9(&VAR_10->xfer[0], &VAR_10->msg);

  VAR_10->xfer[1].rx_buf = &VAR_10->scratch;
  VAR_10->xfer[1].len = 2;


  VAR_10->xfer[1].delay_usecs = VAR_9->vref_delay_usecs;
  FUNC_9(&VAR_10->xfer[1], &VAR_10->msg);


  VAR_7 |= VAR_1;
 }


 VAR_7 |= VAR_0;


 VAR_10->command = (u8) VAR_7;
 VAR_10->xfer[2].tx_buf = &VAR_10->command;
 VAR_10->xfer[2].len = 1;
 FUNC_9(&VAR_10->xfer[2], &VAR_10->msg);

 VAR_10->xfer[3].rx_buf = &VAR_10->sample;
 VAR_10->xfer[3].len = 2;
 FUNC_9(&VAR_10->xfer[3], &VAR_10->msg);




 VAR_10->ref_off = VAR_4;
 VAR_10->xfer[4].tx_buf = &VAR_10->ref_off;
 VAR_10->xfer[4].len = 1;
 FUNC_9(&VAR_10->xfer[4], &VAR_10->msg);

 VAR_10->xfer[5].rx_buf = &VAR_10->scratch;
 VAR_10->xfer[5].len = 2;
 FUNC_0(VAR_10->xfer[5]);
 FUNC_9(&VAR_10->xfer[5], &VAR_10->msg);

 FUNC_7(&VAR_9->lock);
 FUNC_2(VAR_9);
 VAR_11 = FUNC_11(VAR_8, &VAR_10->msg);
 FUNC_1(VAR_9);
 FUNC_8(&VAR_9->lock);

 if (VAR_11 == 0) {

  VAR_11 = FUNC_3(VAR_10->sample);
  VAR_11 = VAR_11 >> 3;
  VAR_11 &= 0x0fff;
 }

 FUNC_5(VAR_10);
 return VAR_11;
}

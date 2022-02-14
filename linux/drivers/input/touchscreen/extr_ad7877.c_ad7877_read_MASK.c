
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct spi_device {int dummy; } ;
struct ser_req {int sample; int msg; TYPE_1__* xfer; scalar_t__ command; } ;
struct TYPE_2__ {int len; int cs_change; int* rx_buf; scalar_t__* tx_buf; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct ser_req*) ;
 struct ser_req* FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct spi_device*,int *) ;

__attribute__((used)) static int FUNC_7(struct spi_device *VAR_3, u16 VAR_4)
{
 struct ser_req *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = FUNC_3(sizeof *VAR_5, VAR_2);
 if (!VAR_5)
  return -VAR_1;

 FUNC_5(&VAR_5->msg);

 VAR_5->command = (u16) (FUNC_1(VAR_0) |
   FUNC_0(VAR_4));
 VAR_5->xfer[0].tx_buf = &VAR_5->command;
 VAR_5->xfer[0].len = 2;
 VAR_5->xfer[0].cs_change = 1;

 VAR_5->xfer[1].rx_buf = &VAR_5->sample;
 VAR_5->xfer[1].len = 2;

 FUNC_4(&VAR_5->xfer[0], &VAR_5->msg);
 FUNC_4(&VAR_5->xfer[1], &VAR_5->msg);

 VAR_6 = FUNC_6(VAR_3, &VAR_5->msg);
 VAR_7 = VAR_6 ? : VAR_5->sample;

 FUNC_2(VAR_5);

 return VAR_7;
}

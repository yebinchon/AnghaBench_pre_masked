
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct spi_device {int dummy; } ;
struct ser_req {int command; int msg; TYPE_1__* xfer; } ;
struct TYPE_2__ {int* tx_buf; int len; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ser_req*) ;
 struct ser_req* FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct spi_device*,int *) ;

__attribute__((used)) static int FUNC_6(struct spi_device *VAR_3, u16 VAR_4, u16 VAR_5)
{
 struct ser_req *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(sizeof *VAR_6, VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_4(&VAR_6->msg);

 VAR_6->command = (u16) (FUNC_0(VAR_4) | (VAR_5 & VAR_2));
 VAR_6->xfer[0].tx_buf = &VAR_6->command;
 VAR_6->xfer[0].len = 2;

 FUNC_3(&VAR_6->xfer[0], &VAR_6->msg);

 VAR_7 = FUNC_5(VAR_3, &VAR_6->msg);

 FUNC_1(VAR_6);

 return VAR_7;
}

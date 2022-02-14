
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_packet {scalar_t__ device; } ;
struct message {int rsp_buf_len; int type; int length; int tp_info; } ;
struct applespi_data {TYPE_1__* spi; int work; int rcvd_tp_info; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct applespi_data *VAR_2,
      struct spi_packet *VAR_3,
      struct message *VAR_4)
{
 if (VAR_3->device == VAR_0 &&
     FUNC_2(VAR_4->type) == 0x1020) {




  VAR_2->rcvd_tp_info = VAR_4->tp_info;
  FUNC_3(&VAR_2->work);
  return;
 }

 if (FUNC_2(VAR_4->length) != 0x0000) {
  FUNC_1(&VAR_2->spi->dev,
         "Received unexpected write response: length=%x\n",
         FUNC_2(VAR_4->length));
  return;
 }

 if (VAR_3->device == VAR_1 &&
     FUNC_2(VAR_4->type) == 0x0252 &&
     FUNC_2(VAR_4->rsp_buf_len) == 0x0002)
  FUNC_0(&VAR_2->spi->dev, "modeswitch done.\n");
}

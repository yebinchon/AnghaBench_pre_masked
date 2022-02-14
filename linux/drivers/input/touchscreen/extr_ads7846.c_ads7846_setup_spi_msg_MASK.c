
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_transfer {int len; int * rx_buf; void** tx_buf; scalar_t__ delay_usecs; } ;
struct spi_message {struct ads7846* context; } ;
struct ads7846_platform_data {int keep_vref_on; scalar_t__ settle_delay_usecs; } ;
struct TYPE_2__ {int z2; int z1; int x; int * x_buf; int y; int * y_buf; } ;
struct ads7846_packet {int dummy; void* pwrdown; void** pwrdown_cmd; TYPE_1__ tc; void* read_z2; void* read_z1; void* read_x; void** read_x_cmd; void* read_y; void** read_y_cmd; } ;
struct ads7846 {int model; int msg_count; struct ads7846_packet* packet; struct spi_transfer* xfer; struct spi_message* msg; } ;


 int FUNC_0 (struct spi_transfer) ;
 void* VAR_0 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_6 (struct spi_message*) ;

__attribute__((used)) static void FUNC_7(struct ads7846 *VAR_1,
      const struct ads7846_platform_data *VAR_2)
{
 struct spi_message *VAR_3 = &VAR_1->msg[0];
 struct spi_transfer *VAR_4 = VAR_1->xfer;
 struct ads7846_packet *VAR_5 = VAR_1->packet;
 int VAR_6 = VAR_2->keep_vref_on;

 if (VAR_1->model == 7873) {





  VAR_1->model = 7846;
  VAR_6 = 0;
 }

 VAR_1->msg_count = 1;
 FUNC_6(VAR_3);
 VAR_3->context = VAR_1;

 if (VAR_1->model == 7845) {
  VAR_5->read_y_cmd[0] = FUNC_2(VAR_6);
  VAR_5->read_y_cmd[1] = 0;
  VAR_5->read_y_cmd[2] = 0;
  VAR_4->tx_buf = &VAR_5->read_y_cmd[0];
  VAR_4->rx_buf = &VAR_5->tc.y_buf[0];
  VAR_4->len = 3;
  FUNC_5(VAR_4, VAR_3);
 } else {

  VAR_5->read_y = FUNC_2(VAR_6);
  VAR_4->tx_buf = &VAR_5->read_y;
  VAR_4->len = 1;
  FUNC_5(VAR_4, VAR_3);

  VAR_4++;
  VAR_4->rx_buf = &VAR_5->tc.y;
  VAR_4->len = 2;
  FUNC_5(VAR_4, VAR_3);
 }






 if (VAR_2->settle_delay_usecs) {
  VAR_4->delay_usecs = VAR_2->settle_delay_usecs;

  VAR_4++;
  VAR_4->tx_buf = &VAR_5->read_y;
  VAR_4->len = 1;
  FUNC_5(VAR_4, VAR_3);

  VAR_4++;
  VAR_4->rx_buf = &VAR_5->tc.y;
  VAR_4->len = 2;
  FUNC_5(VAR_4, VAR_3);
 }

 VAR_1->msg_count++;
 VAR_3++;
 FUNC_6(VAR_3);
 VAR_3->context = VAR_1;

 if (VAR_1->model == 7845) {
  VAR_4++;
  VAR_5->read_x_cmd[0] = FUNC_1(VAR_6);
  VAR_5->read_x_cmd[1] = 0;
  VAR_5->read_x_cmd[2] = 0;
  VAR_4->tx_buf = &VAR_5->read_x_cmd[0];
  VAR_4->rx_buf = &VAR_5->tc.x_buf[0];
  VAR_4->len = 3;
  FUNC_5(VAR_4, VAR_3);
 } else {

  VAR_4++;
  VAR_5->read_x = FUNC_1(VAR_6);
  VAR_4->tx_buf = &VAR_5->read_x;
  VAR_4->len = 1;
  FUNC_5(VAR_4, VAR_3);

  VAR_4++;
  VAR_4->rx_buf = &VAR_5->tc.x;
  VAR_4->len = 2;
  FUNC_5(VAR_4, VAR_3);
 }


 if (VAR_2->settle_delay_usecs) {
  VAR_4->delay_usecs = VAR_2->settle_delay_usecs;

  VAR_4++;
  VAR_4->tx_buf = &VAR_5->read_x;
  VAR_4->len = 1;
  FUNC_5(VAR_4, VAR_3);

  VAR_4++;
  VAR_4->rx_buf = &VAR_5->tc.x;
  VAR_4->len = 2;
  FUNC_5(VAR_4, VAR_3);
 }


 if (VAR_1->model == 7846) {
  VAR_1->msg_count++;
  VAR_3++;
  FUNC_6(VAR_3);
  VAR_3->context = VAR_1;

  VAR_4++;
  VAR_5->read_z1 = FUNC_3(VAR_6);
  VAR_4->tx_buf = &VAR_5->read_z1;
  VAR_4->len = 1;
  FUNC_5(VAR_4, VAR_3);

  VAR_4++;
  VAR_4->rx_buf = &VAR_5->tc.z1;
  VAR_4->len = 2;
  FUNC_5(VAR_4, VAR_3);


  if (VAR_2->settle_delay_usecs) {
   VAR_4->delay_usecs = VAR_2->settle_delay_usecs;

   VAR_4++;
   VAR_4->tx_buf = &VAR_5->read_z1;
   VAR_4->len = 1;
   FUNC_5(VAR_4, VAR_3);

   VAR_4++;
   VAR_4->rx_buf = &VAR_5->tc.z1;
   VAR_4->len = 2;
   FUNC_5(VAR_4, VAR_3);
  }

  VAR_1->msg_count++;
  VAR_3++;
  FUNC_6(VAR_3);
  VAR_3->context = VAR_1;

  VAR_4++;
  VAR_5->read_z2 = FUNC_4(VAR_6);
  VAR_4->tx_buf = &VAR_5->read_z2;
  VAR_4->len = 1;
  FUNC_5(VAR_4, VAR_3);

  VAR_4++;
  VAR_4->rx_buf = &VAR_5->tc.z2;
  VAR_4->len = 2;
  FUNC_5(VAR_4, VAR_3);


  if (VAR_2->settle_delay_usecs) {
   VAR_4->delay_usecs = VAR_2->settle_delay_usecs;

   VAR_4++;
   VAR_4->tx_buf = &VAR_5->read_z2;
   VAR_4->len = 1;
   FUNC_5(VAR_4, VAR_3);

   VAR_4++;
   VAR_4->rx_buf = &VAR_5->tc.z2;
   VAR_4->len = 2;
   FUNC_5(VAR_4, VAR_3);
  }
 }


 VAR_1->msg_count++;
 VAR_3++;
 FUNC_6(VAR_3);
 VAR_3->context = VAR_1;

 if (VAR_1->model == 7845) {
  VAR_4++;
  VAR_5->pwrdown_cmd[0] = VAR_0;
  VAR_5->pwrdown_cmd[1] = 0;
  VAR_5->pwrdown_cmd[2] = 0;
  VAR_4->tx_buf = &VAR_5->pwrdown_cmd[0];
  VAR_4->len = 3;
 } else {
  VAR_4++;
  VAR_5->pwrdown = VAR_0;
  VAR_4->tx_buf = &VAR_5->pwrdown;
  VAR_4->len = 1;
  FUNC_5(VAR_4, VAR_3);

  VAR_4++;
  VAR_4->rx_buf = &VAR_5->dummy;
  VAR_4->len = 2;
 }

 FUNC_0(*VAR_4);
 FUNC_5(VAR_4, VAR_3);
}

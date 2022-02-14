
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_message {int dummy; } ;
struct TYPE_3__ {int ignore; } ;
struct ads7846_packet {TYPE_1__ tc; } ;
struct ads7846 {int msg_count; int (* filter ) (int ,int,int*) ;int filter_data; TYPE_2__* spi; struct spi_message* msg; int (* wait_for_sync ) () ;struct ads7846_packet* packet; } ;
struct TYPE_4__ {int dev; } ;





 int FUNC_0 () ;
 int FUNC_1 (struct ads7846*,struct spi_message*) ;
 int FUNC_2 (struct spi_message*,int) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (TYPE_2__*,struct spi_message*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int,int*) ;

__attribute__((used)) static void FUNC_7(struct ads7846 *VAR_0)
{
 struct ads7846_packet *VAR_1 = VAR_0->packet;
 struct spi_message *VAR_2;
 int VAR_3 = 0;
 int VAR_4;
 int VAR_5;
 int VAR_6;

 while (VAR_3 < VAR_0->msg_count) {

  VAR_0->wait_for_sync();

  VAR_2 = &VAR_0->msg[VAR_3];
  VAR_6 = FUNC_4(VAR_0->spi, VAR_2);
  if (VAR_6) {
   FUNC_3(&VAR_0->spi->dev, "spi_sync --> %d\n", VAR_6);
   VAR_1->tc.ignore = 1;
   return;
  }





  if (VAR_3 < VAR_0->msg_count - 1) {

   VAR_4 = FUNC_1(VAR_0, VAR_2);

   VAR_5 = VAR_0->filter(VAR_0->filter_data, VAR_3, &VAR_4);
   switch (VAR_5) {
   case 128:
    continue;

   case 130:
    VAR_1->tc.ignore = 1;
    VAR_3 = VAR_0->msg_count - 1;
    continue;

   case 129:
    FUNC_2(VAR_2, VAR_4);
    VAR_1->tc.ignore = 0;
    VAR_3++;
    break;

   default:
    FUNC_0();
   }
  } else {
   VAR_3++;
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pktcdvd_device {int dummy; } ;
struct packet_data {int state; TYPE_1__* w_bio; int io_wait; int io_errors; int sleep_time; int frames; int write_size; int id; } ;
struct TYPE_2__ {int bi_status; } ;


 int FUNC_0 () ;





 int FUNC_1 (int *) ;
 int FUNC_2 (int,struct pktcdvd_device*,char*,...) ;
 int FUNC_3 (struct packet_data*,int ) ;
 int FUNC_4 (struct pktcdvd_device*,struct packet_data*) ;
 int FUNC_5 (struct packet_data*,int) ;
 int FUNC_6 (struct packet_data*) ;
 int FUNC_7 (struct pktcdvd_device*,struct packet_data*) ;

__attribute__((used)) static void FUNC_8(struct pktcdvd_device *VAR_0, struct packet_data *VAR_1)
{
 FUNC_2(2, VAR_0, "pkt %d\n", VAR_1->id);

 for (;;) {
  switch (VAR_1->state) {
  case 129:
   if ((VAR_1->write_size < VAR_1->frames) && (VAR_1->sleep_time > 0))
    return;

   VAR_1->sleep_time = 0;
   FUNC_4(VAR_0, VAR_1);
   FUNC_5(VAR_1, 131);
   break;

  case 131:
   if (FUNC_1(&VAR_1->io_wait) > 0)
    return;

   if (FUNC_1(&VAR_1->io_errors) > 0) {
    FUNC_5(VAR_1, 130);
   } else {
    FUNC_7(VAR_0, VAR_1);
   }
   break;

  case 128:
   if (FUNC_1(&VAR_1->io_wait) > 0)
    return;

   if (!VAR_1->w_bio->bi_status) {
    FUNC_5(VAR_1, 132);
   } else {
    FUNC_5(VAR_1, 130);
   }
   break;

  case 130:
   if (FUNC_6(VAR_1)) {
    FUNC_7(VAR_0, VAR_1);
   } else {
    FUNC_2(2, VAR_0, "No recovery possible\n");
    FUNC_5(VAR_1, 132);
   }
   break;

  case 132:
   FUNC_3(VAR_1, VAR_1->w_bio->bi_status);
   return;

  default:
   FUNC_0();
   break;
  }
 }
}

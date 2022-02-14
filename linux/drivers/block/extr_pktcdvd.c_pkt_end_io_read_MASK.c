
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pktcdvd_device {int wqueue; } ;
struct packet_data {int run_sm; int io_wait; int io_errors; scalar_t__ sector; struct pktcdvd_device* pd; } ;
struct TYPE_2__ {scalar_t__ bi_sector; } ;
struct bio {int bi_status; TYPE_1__ bi_iter; struct packet_data* bi_private; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pktcdvd_device*) ;
 int FUNC_4 (int,struct pktcdvd_device*,char*,struct bio*,unsigned long long,unsigned long long,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct bio *VAR_0)
{
 struct packet_data *VAR_1 = VAR_0->bi_private;
 struct pktcdvd_device *VAR_2 = VAR_1->pd;
 FUNC_0(!VAR_2);

 FUNC_4(2, VAR_2, "bio=%p sec0=%llx sec=%llx err=%d\n",
  VAR_0, (unsigned long long)VAR_1->sector,
  (unsigned long long)VAR_0->bi_iter.bi_sector, VAR_0->bi_status);

 if (VAR_0->bi_status)
  FUNC_2(&VAR_1->io_errors);
 if (FUNC_1(&VAR_1->io_wait)) {
  FUNC_2(&VAR_1->run_sm);
  FUNC_5(&VAR_2->wqueue);
 }
 FUNC_3(VAR_2);
}

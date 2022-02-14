
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pktcdvd_device {int dummy; } ;
struct packet_stacked_data {TYPE_1__* bio; struct pktcdvd_device* pd; } ;
struct bio {int bi_status; struct packet_stacked_data* bi_private; } ;
struct TYPE_2__ {int bi_status; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct packet_stacked_data*,int *) ;
 int FUNC_3 (struct pktcdvd_device*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct bio *VAR_1)
{
 struct packet_stacked_data *VAR_2 = VAR_1->bi_private;
 struct pktcdvd_device *VAR_3 = VAR_2->pd;

 VAR_2->bio->bi_status = VAR_1->bi_status;
 FUNC_1(VAR_1);
 FUNC_0(VAR_2->bio);
 FUNC_2(VAR_2, &VAR_0);
 FUNC_3(VAR_3);
}

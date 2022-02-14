
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int secs_r; } ;
struct pktcdvd_device {TYPE_1__ stats; int bdev; } ;
struct packet_stacked_data {struct bio* bio; struct pktcdvd_device* pd; } ;
struct bio {int bi_end_io; struct packet_stacked_data* bi_private; } ;


 int VAR_0 ;
 struct bio* FUNC_0 (struct bio*,int ,int *) ;
 scalar_t__ FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*,int ) ;
 struct packet_stacked_data* FUNC_3 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct pktcdvd_device*,struct bio*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5(struct pktcdvd_device *VAR_4, struct bio *VAR_5)
{
 struct bio *VAR_6 = FUNC_0(VAR_5, VAR_0, &VAR_1);
 struct packet_stacked_data *VAR_7 = FUNC_3(&VAR_3, VAR_0);

 VAR_7->pd = VAR_4;
 VAR_7->bio = VAR_5;
 FUNC_2(VAR_6, VAR_4->bdev);
 VAR_6->bi_private = VAR_7;
 VAR_6->bi_end_io = VAR_2;
 VAR_4->stats.secs_r += FUNC_1(VAR_5);
 FUNC_4(VAR_4, VAR_6);
}

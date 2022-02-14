
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mapped_device {TYPE_2__* queue; } ;
struct dm_target {int dummy; } ;
struct TYPE_3__ {int bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;
struct TYPE_4__ {int bio_split; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio*,struct bio*) ;
 unsigned int FUNC_1 (struct bio*) ;
 struct bio* FUNC_2 (struct bio*,unsigned int,int ,int *) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (int ,struct dm_target*) ;
 unsigned int FUNC_5 (int ,int ,unsigned int) ;
 int VAR_1 ;
 int FUNC_6 (TYPE_2__*,struct bio*,int ) ;

__attribute__((used)) static void FUNC_7(struct mapped_device *VAR_2, struct dm_target *VAR_3, struct bio **VAR_4)
{
 unsigned VAR_5, VAR_6;

 VAR_6 = FUNC_1(*VAR_4);
 VAR_5 = FUNC_5(VAR_1, FUNC_4((*VAR_4)->bi_iter.bi_sector, VAR_3), VAR_6);

 if (VAR_6 > VAR_5) {
  struct bio *VAR_7 = FUNC_2(*VAR_4, VAR_5, VAR_0, &VAR_2->queue->bio_split);

  FUNC_0(VAR_7, *VAR_4);
  FUNC_6(VAR_2->queue, VAR_7, (*VAR_4)->bi_iter.bi_sector);
  FUNC_3(*VAR_4);
  *VAR_4 = VAR_7;
 }
}

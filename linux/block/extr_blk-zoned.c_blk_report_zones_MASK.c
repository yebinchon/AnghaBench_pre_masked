
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct gendisk {TYPE_1__* fops; struct request_queue* queue; } ;
struct blk_zone {int dummy; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {int (* report_zones ) (struct gendisk*,scalar_t__,struct blk_zone*,unsigned int*) ;} ;


 int FUNC_0 (int) ;
 unsigned int FUNC_1 (struct request_queue*) ;
 scalar_t__ FUNC_2 (struct gendisk*) ;
 int FUNC_3 (struct gendisk*,scalar_t__,struct blk_zone*,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct gendisk *VAR_0, sector_t VAR_1,
       struct blk_zone *VAR_2, unsigned int *VAR_3)
{
 struct request_queue *VAR_4 = VAR_0->queue;
 unsigned int VAR_5 = 0, VAR_6, VAR_7 = *VAR_3;
 sector_t VAR_8 = FUNC_2(VAR_0);
 int VAR_9;

 while (VAR_5 < VAR_7 && VAR_1 < VAR_8) {
  VAR_6 = VAR_7 - VAR_5;
  VAR_9 = VAR_0->fops->report_zones(VAR_0, VAR_1, &VAR_2[VAR_5], &VAR_6);
  if (VAR_9)
   return VAR_9;
  if (!VAR_6)
   break;
  VAR_1 += FUNC_1(VAR_4) * VAR_6;
  VAR_5 += VAR_6;
 }

 FUNC_0(VAR_5 > *VAR_3);
 *VAR_3 = VAR_5;

 return 0;
}

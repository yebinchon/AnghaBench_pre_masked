
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct block_device {TYPE_3__* bd_disk; TYPE_2__* bd_part; } ;
struct blk_zone {int dummy; } ;
typedef scalar_t__ sector_t ;
struct TYPE_6__ {TYPE_1__* fops; } ;
struct TYPE_5__ {scalar_t__ nr_sects; } ;
struct TYPE_4__ {int report_zones; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct request_queue*,scalar_t__) ;
 struct request_queue* FUNC_2 (struct block_device*) ;
 int FUNC_3 (struct request_queue*) ;
 int FUNC_4 (TYPE_3__*,scalar_t__,struct blk_zone*,unsigned int*) ;
 int FUNC_5 (struct block_device*,struct blk_zone*) ;
 scalar_t__ FUNC_6 (struct block_device*) ;
 unsigned int FUNC_7 (unsigned int,int ) ;

int FUNC_8(struct block_device *VAR_1, sector_t VAR_2,
   struct blk_zone *VAR_3, unsigned int *VAR_4)
{
 struct request_queue *VAR_5 = FUNC_2(VAR_1);
 unsigned int VAR_6, VAR_7;
 int VAR_8;

 if (!FUNC_3(VAR_5))
  return -VAR_0;






 if (FUNC_0(!VAR_1->bd_disk->fops->report_zones))
  return -VAR_0;

 if (!*VAR_4 || VAR_2 >= VAR_1->bd_part->nr_sects) {
  *VAR_4 = 0;
  return 0;
 }

 VAR_7 = FUNC_7(*VAR_4,
    FUNC_1(VAR_5, VAR_1->bd_part->nr_sects - VAR_2));
 VAR_8 = FUNC_4(VAR_1->bd_disk, FUNC_6(VAR_1) + VAR_2,
          VAR_3, &VAR_7);
 if (VAR_8)
  return VAR_8;

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  if (!FUNC_5(VAR_1, VAR_3))
   break;
  VAR_3++;
 }

 *VAR_4 = VAR_6;

 return 0;
}

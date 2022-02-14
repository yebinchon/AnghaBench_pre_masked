
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {unsigned long queue_flags; } ;
struct dm_target {int dummy; } ;
struct dm_dev {int bdev; } ;
typedef int sector_t ;


 struct request_queue* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct dm_target *VAR_0, struct dm_dev *VAR_1,
    sector_t VAR_2, sector_t VAR_3, void *VAR_4)
{
 unsigned long VAR_5 = (unsigned long) VAR_4;
 struct request_queue *VAR_6 = FUNC_0(VAR_1->bdev);

 return VAR_6 && (VAR_6->queue_flags & VAR_5);
}

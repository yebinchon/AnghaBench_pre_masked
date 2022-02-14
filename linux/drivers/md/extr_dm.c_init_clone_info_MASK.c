
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mapped_device {int dummy; } ;
struct dm_table {int dummy; } ;
struct clone_info {int sector; int io; struct dm_table* map; } ;
struct TYPE_2__ {int bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;


 int FUNC_0 (struct mapped_device*,struct bio*) ;

__attribute__((used)) static void FUNC_1(struct clone_info *VAR_0, struct mapped_device *VAR_1,
       struct dm_table *VAR_2, struct bio *VAR_3)
{
 VAR_0->map = VAR_2;
 VAR_0->io = FUNC_0(VAR_1, VAR_3);
 VAR_0->sector = VAR_3->bi_iter.bi_sector;
}

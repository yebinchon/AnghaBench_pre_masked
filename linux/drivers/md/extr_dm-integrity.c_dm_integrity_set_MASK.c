
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gendisk {int queue; } ;
struct dm_target {int table; } ;
struct dm_integrity_c {TYPE_1__* sb; int tag_size; } ;
struct blk_integrity {scalar_t__ interval_exp; int tuple_size; int tag_size; int * profile; } ;
typedef int bi ;
struct TYPE_2__ {scalar_t__ log2_sectors_per_block; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gendisk*,struct blk_integrity*) ;
 int FUNC_1 (int ,int ) ;
 struct gendisk* FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct blk_integrity*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct dm_target *VAR_3, struct dm_integrity_c *VAR_4)
{
 struct gendisk *VAR_5 = FUNC_2(FUNC_3(VAR_3->table));
 struct blk_integrity VAR_6;

 FUNC_4(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.profile = &VAR_2;
 VAR_6.tuple_size = VAR_4->tag_size;
 VAR_6.tag_size = VAR_6.tuple_size;
 VAR_6.interval_exp = VAR_4->sb->log2_sectors_per_block + VAR_0;

 FUNC_0(VAR_5, &VAR_6);
 FUNC_1(VAR_5->queue, VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hd_struct {int partno; } ;
struct gendisk {int dummy; } ;
struct disk_part_iter {int dummy; } ;
struct block_device {scalar_t__ bd_super; scalar_t__ bd_part_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gendisk*,int ) ;
 int FUNC_1 (struct disk_part_iter*) ;
 int FUNC_2 (struct disk_part_iter*,struct gendisk*,int ) ;
 struct hd_struct* FUNC_3 (struct disk_part_iter*) ;
 int FUNC_4 (struct gendisk*,int ) ;

__attribute__((used)) static int FUNC_5(struct gendisk *VAR_2, struct block_device *VAR_3)
{
 struct disk_part_iter VAR_4;
 struct hd_struct *VAR_5;
 int VAR_6;

 if (VAR_3->bd_part_count || VAR_3->bd_super)
  return -VAR_1;
 VAR_6 = FUNC_4(VAR_2, 0);
 if (VAR_6)
  return VAR_6;

 FUNC_2(&VAR_4, VAR_2, VAR_0);
 while ((VAR_5 = FUNC_3(&VAR_4)))
  FUNC_0(VAR_2, VAR_5->partno);
 FUNC_1(&VAR_4);

 return 0;
}

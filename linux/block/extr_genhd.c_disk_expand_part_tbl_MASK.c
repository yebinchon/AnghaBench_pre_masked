
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {int node_id; int part_tbl; } ;
struct disk_part_tbl {int len; int * part; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gendisk*) ;
 int FUNC_1 (struct gendisk*,struct disk_part_tbl*) ;
 struct disk_part_tbl* FUNC_2 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 struct disk_part_tbl* FUNC_4 (int ,int) ;
 int FUNC_5 (struct disk_part_tbl*,int ,int) ;

int FUNC_6(struct gendisk *VAR_4, int VAR_5)
{
 struct disk_part_tbl *VAR_6 =
  FUNC_4(VAR_4->part_tbl, 1);
 struct disk_part_tbl *VAR_7;
 int VAR_8 = VAR_6 ? VAR_6->len : 0;
 int VAR_9, VAR_10;





 VAR_10 = VAR_5 + 1;
 if (VAR_10 < 0)
  return -VAR_0;


 if (FUNC_0(VAR_4) && VAR_10 > FUNC_0(VAR_4))
  return -VAR_0;

 if (VAR_10 <= VAR_8)
  return 0;

 VAR_7 = FUNC_2(FUNC_5(VAR_7, VAR_3, VAR_10), VAR_2,
    VAR_4->node_id);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->len = VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
  FUNC_3(VAR_7->part[VAR_9], VAR_6->part[VAR_9]);

 FUNC_1(VAR_4, VAR_7);
 return 0;
}

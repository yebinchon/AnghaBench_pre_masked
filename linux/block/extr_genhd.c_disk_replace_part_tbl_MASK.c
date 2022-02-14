
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {int part_tbl; } ;
struct disk_part_tbl {int last_lookup; } ;


 int FUNC_0 (struct disk_part_tbl*,int ) ;
 int FUNC_1 (int ,struct disk_part_tbl*) ;
 struct disk_part_tbl* FUNC_2 (int ,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct gendisk *VAR_1,
      struct disk_part_tbl *VAR_2)
{
 struct disk_part_tbl *VAR_3 =
  FUNC_2(VAR_1->part_tbl, 1);

 FUNC_1(VAR_1->part_tbl, VAR_2);

 if (VAR_3) {
  FUNC_1(VAR_3->last_lookup, ((void*)0));
  FUNC_0(VAR_3, VAR_0);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hd_struct {int holder_dir; } ;
struct gendisk {int part_tbl; } ;
struct disk_part_tbl {int len; int last_lookup; int * part; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hd_struct*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct hd_struct*) ;
 int FUNC_5 (struct hd_struct*) ;
 int FUNC_6 (int ,int *) ;
 void* FUNC_7 (int ,int) ;

void FUNC_8(struct gendisk *VAR_0, int VAR_1)
{
 struct disk_part_tbl *VAR_2 =
  FUNC_7(VAR_0->part_tbl, 1);
 struct hd_struct *VAR_3;

 if (VAR_1 >= VAR_2->len)
  return;

 VAR_3 = FUNC_7(VAR_2->part[VAR_1], 1);
 if (!VAR_3)
  return;

 FUNC_6(VAR_2->part[VAR_1], ((void*)0));
 FUNC_6(VAR_2->last_lookup, ((void*)0));
 FUNC_3(VAR_3->holder_dir);
 FUNC_1(FUNC_5(VAR_3));







 FUNC_0(FUNC_4(VAR_3));
 FUNC_2(VAR_3);
}

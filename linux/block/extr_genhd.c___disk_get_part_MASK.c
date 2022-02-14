
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hd_struct {int len; int * part; } ;
struct gendisk {int part_tbl; } ;
struct disk_part_tbl {int len; int * part; } ;


 struct hd_struct* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;

struct hd_struct *FUNC_2(struct gendisk *VAR_0, int VAR_1)
{
 struct disk_part_tbl *VAR_2 = FUNC_0(VAR_0->part_tbl);

 if (FUNC_1(VAR_1 < 0 || VAR_1 >= VAR_2->len))
  return ((void*)0);
 return FUNC_0(VAR_2->part[VAR_1]);
}

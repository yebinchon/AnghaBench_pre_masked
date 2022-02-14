
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hd_struct {int dummy; } ;
struct disk_part_tbl {int len; int * part; } ;
struct disk_part_iter {int flags; int idx; struct hd_struct* part; TYPE_1__* disk; } ;
struct TYPE_2__ {int part_tbl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hd_struct*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hd_struct*) ;
 int FUNC_3 (struct hd_struct*) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

struct hd_struct *FUNC_7(struct disk_part_iter *VAR_4)
{
 struct disk_part_tbl *VAR_5;
 int VAR_6, VAR_7;


 FUNC_0(VAR_4->part);
 VAR_4->part = ((void*)0);


 FUNC_5();
 VAR_5 = FUNC_4(VAR_4->disk->part_tbl);


 if (VAR_4->flags & VAR_3) {
  VAR_6 = -1;
  if (VAR_4->flags & (VAR_2 |
        VAR_1))
   VAR_7 = -1;
  else
   VAR_7 = 0;
 } else {
  VAR_6 = 1;
  VAR_7 = VAR_5->len;
 }


 for (; VAR_4->idx != VAR_7; VAR_4->idx += VAR_6) {
  struct hd_struct *VAR_8;

  VAR_8 = FUNC_4(VAR_5->part[VAR_4->idx]);
  if (!VAR_8)
   continue;
  if (!FUNC_2(VAR_8) &&
      !(VAR_4->flags & VAR_0) &&
      !(VAR_4->flags & VAR_1 &&
        VAR_4->idx == 0))
   continue;

  FUNC_1(FUNC_3(VAR_8));
  VAR_4->part = VAR_8;
  VAR_4->idx += VAR_6;
  break;
 }

 FUNC_6();

 return VAR_4->part;
}

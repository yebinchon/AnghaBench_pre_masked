
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct pblk_line {int lock; int map_bitmap; scalar_t__ cur_sec; } ;
struct TYPE_2__ {int sec_per_line; } ;
struct pblk {TYPE_1__ lm; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__,int ) ;

void FUNC_5(struct pblk *VAR_0, struct pblk_line *VAR_1, int VAR_2)
{
 u64 VAR_3;
 int VAR_4;

 FUNC_2(&VAR_1->lock);
 VAR_3 = FUNC_1(VAR_1->map_bitmap,
     VAR_0->lm.sec_per_line, VAR_1->cur_sec);
 VAR_1->cur_sec = VAR_3 - VAR_2;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++, VAR_1->cur_sec--)
  FUNC_0(!FUNC_4(VAR_1->cur_sec, VAR_1->map_bitmap));
 FUNC_3(&VAR_1->lock);
}

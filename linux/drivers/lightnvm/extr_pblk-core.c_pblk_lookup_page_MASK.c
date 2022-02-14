
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct pblk_line {int lock; int cur_sec; int map_bitmap; } ;
struct TYPE_2__ {int sec_per_line; } ;
struct pblk {TYPE_1__ lm; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

u64 FUNC_3(struct pblk *VAR_0, struct pblk_line *VAR_1)
{
 u64 VAR_2;

 FUNC_1(&VAR_1->lock);
 VAR_2 = FUNC_0(VAR_1->map_bitmap,
     VAR_0->lm.sec_per_line, VAR_1->cur_sec);
 FUNC_2(&VAR_1->lock);

 return VAR_2;
}

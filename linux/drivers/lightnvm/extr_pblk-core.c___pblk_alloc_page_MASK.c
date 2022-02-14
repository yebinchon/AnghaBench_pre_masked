
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct pblk_line {scalar_t__ cur_sec; int map_bitmap; int lock; } ;
struct TYPE_2__ {scalar_t__ sec_per_line; } ;
struct pblk {TYPE_1__ lm; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int ) ;

u64 FUNC_5(struct pblk *VAR_0, struct pblk_line *VAR_1, int VAR_2)
{
 u64 VAR_3;
 int VAR_4;

 FUNC_3(&VAR_1->lock);


 if (VAR_1->cur_sec + VAR_2 > VAR_0->lm.sec_per_line) {
  FUNC_0(1, "pblk: page allocation out of bounds\n");
  VAR_2 = VAR_0->lm.sec_per_line - VAR_1->cur_sec;
 }

 VAR_1->cur_sec = VAR_3 = FUNC_2(VAR_1->map_bitmap,
     VAR_0->lm.sec_per_line, VAR_1->cur_sec);
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++, VAR_1->cur_sec++)
  FUNC_1(FUNC_4(VAR_1->cur_sec, VAR_1->map_bitmap));

 return VAR_3;
}

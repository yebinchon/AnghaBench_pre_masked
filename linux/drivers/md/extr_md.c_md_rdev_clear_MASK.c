
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md_rdev {int badblocks; int * bb_page; scalar_t__ sectors; scalar_t__ sb_start; int * sb_page; scalar_t__ sb_loaded; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct md_rdev *VAR_0)
{
 if (VAR_0->sb_page) {
  FUNC_1(VAR_0->sb_page);
  VAR_0->sb_loaded = 0;
  VAR_0->sb_page = ((void*)0);
  VAR_0->sb_start = 0;
  VAR_0->sectors = 0;
 }
 if (VAR_0->bb_page) {
  FUNC_1(VAR_0->bb_page);
  VAR_0->bb_page = ((void*)0);
 }
 FUNC_0(&VAR_0->badblocks);
}

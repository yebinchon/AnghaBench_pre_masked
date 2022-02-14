
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msc_iter {int * start_block; scalar_t__ start_win; scalar_t__ win; } ;
struct msc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct msc_iter*) ;
 scalar_t__ FUNC_1 (struct msc*) ;

__attribute__((used)) static int FUNC_2(struct msc_iter *VAR_1, struct msc *VAR_2)
{

 if (VAR_1->start_win)
  return 0;

 VAR_1->start_win = FUNC_1(VAR_2);
 if (!VAR_1->start_win)
  return -VAR_0;

 VAR_1->win = VAR_1->start_win;
 VAR_1->start_block = ((void*)0);

 FUNC_0(VAR_1);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msc_iter {scalar_t__ win; scalar_t__ start_win; int eof; int * start_block; } ;


 int FUNC_0 (struct msc_iter*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct msc_iter *VAR_0)
{
 VAR_0->win = FUNC_1(VAR_0->win);
 VAR_0->start_block = ((void*)0);

 if (VAR_0->win == VAR_0->start_win) {
  VAR_0->eof++;
  return 1;
 }

 FUNC_0(VAR_0);

 return 0;
}

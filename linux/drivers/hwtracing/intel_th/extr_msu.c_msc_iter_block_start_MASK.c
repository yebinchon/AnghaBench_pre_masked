
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msc_iter {int wrap_count; scalar_t__ start_block; scalar_t__ block; int win; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct msc_iter*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct msc_iter *VAR_0)
{
 if (VAR_0->start_block)
  return;

 VAR_0->start_block = FUNC_2(VAR_0->win);
 VAR_0->block = VAR_0->start_block;
 VAR_0->wrap_count = 0;





 if (FUNC_0(FUNC_1(VAR_0)))
  VAR_0->wrap_count = 2;

}

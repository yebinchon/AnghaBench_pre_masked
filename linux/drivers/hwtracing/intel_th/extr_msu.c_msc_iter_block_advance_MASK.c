
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msc_iter {scalar_t__ block; scalar_t__ start_block; scalar_t__ wrap_count; int win; scalar_t__ block_off; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct msc_iter*) ;
 int FUNC_2 (struct msc_iter*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct msc_iter *VAR_0)
{
 VAR_0->block_off = 0;


 if (VAR_0->wrap_count && VAR_0->block == VAR_0->start_block) {
  VAR_0->wrap_count--;
  if (!VAR_0->wrap_count)

   return FUNC_2(VAR_0);
 }


 if (!VAR_0->wrap_count && FUNC_0(FUNC_1(VAR_0)))

  return FUNC_2(VAR_0);


 if (FUNC_4(VAR_0->block))
  VAR_0->block = FUNC_3(VAR_0->win);
 else
  VAR_0->block = FUNC_5(VAR_0->block);


 if (!VAR_0->wrap_count && VAR_0->block == VAR_0->start_block)
  return FUNC_2(VAR_0);

 return 0;
}

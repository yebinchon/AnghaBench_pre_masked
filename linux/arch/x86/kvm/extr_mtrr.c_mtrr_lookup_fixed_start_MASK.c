
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtrr_iter {int fixed; int index; int seg; int start; int mtrr_state; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(struct mtrr_iter *VAR_0)
{
 int VAR_1, VAR_2;

 if (!FUNC_2(VAR_0->mtrr_state))
  return 0;

 VAR_1 = FUNC_1(VAR_0->start);
 if (VAR_1 < 0)
  return 0;

 VAR_0->fixed = 1;
 VAR_2 = FUNC_0(VAR_0->start, VAR_1);
 VAR_0->index = VAR_2;
 VAR_0->seg = VAR_1;
 return 1;
}

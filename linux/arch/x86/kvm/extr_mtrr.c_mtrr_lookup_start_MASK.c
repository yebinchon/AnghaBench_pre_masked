
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtrr_iter {int mtrr_disabled; int mtrr_state; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mtrr_iter*) ;
 int FUNC_2 (struct mtrr_iter*) ;

__attribute__((used)) static void FUNC_3(struct mtrr_iter *VAR_0)
{
 if (!FUNC_0(VAR_0->mtrr_state)) {
  VAR_0->mtrr_disabled = 1;
  return;
 }

 if (!FUNC_1(VAR_0))
  FUNC_2(VAR_0);
}

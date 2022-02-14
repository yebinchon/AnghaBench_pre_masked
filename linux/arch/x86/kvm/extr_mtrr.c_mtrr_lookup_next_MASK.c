
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtrr_iter {scalar_t__ fixed; } ;


 int FUNC_0 (struct mtrr_iter*) ;
 int FUNC_1 (struct mtrr_iter*) ;

__attribute__((used)) static void FUNC_2(struct mtrr_iter *VAR_0)
{
 if (VAR_0->fixed)
  FUNC_0(VAR_0);
 else
  FUNC_1(VAR_0);
}

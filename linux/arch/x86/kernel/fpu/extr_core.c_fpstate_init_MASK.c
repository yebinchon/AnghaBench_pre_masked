
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union fpregs_state {int fsave; int fxsave; int xsave; int soft; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (union fpregs_state*,int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;

void FUNC_6(union fpregs_state *VAR_4)
{
 if (!FUNC_5(VAR_0)) {
  FUNC_2(&VAR_4->soft);
  return;
 }

 FUNC_4(VAR_4, 0, VAR_3);

 if (FUNC_5(VAR_2))
  FUNC_3(&VAR_4->xsave);
 if (FUNC_5(VAR_1))
  FUNC_1(&VAR_4->fxsave);
 else
  FUNC_0(&VAR_4->fsave);
}

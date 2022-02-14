
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fsave; int fxsave; int xsave; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 () ;

__attribute__((used)) static inline void FUNC_10(void)
{
 FUNC_5();

 if (FUNC_9())
  FUNC_4(&VAR_2.xsave, -1);
 else if (FUNC_8(VAR_0))
  FUNC_3(&VAR_2.fxsave);
 else
  FUNC_2(&VAR_2.fsave);

 if (FUNC_0(VAR_1))
  FUNC_1();

 FUNC_6();
 FUNC_7();
}

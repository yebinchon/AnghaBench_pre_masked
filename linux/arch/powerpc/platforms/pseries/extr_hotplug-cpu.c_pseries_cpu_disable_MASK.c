
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int processorCount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 () ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(void)
{
 int VAR_3 = FUNC_2();

 FUNC_1(VAR_3, 0);
 VAR_2->processorCount--;


 if (VAR_3 == VAR_0)
  VAR_0 = FUNC_0(VAR_1);


 if (FUNC_4())
  FUNC_5();
 else
  FUNC_3();
 return 0;
}

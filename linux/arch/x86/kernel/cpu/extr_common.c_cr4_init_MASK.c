
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cr4; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__ VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,unsigned long) ;

void FUNC_5(void)
{
 unsigned long VAR_5 = FUNC_0();

 if (FUNC_2(VAR_1))
  VAR_5 |= VAR_0;
 if (FUNC_3(&VAR_4))
  VAR_5 |= VAR_3;

 FUNC_1(VAR_5);


 FUNC_4(VAR_2.cr4, VAR_5);
}

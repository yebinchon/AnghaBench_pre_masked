
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq; } ;
struct timer_of {TYPE_1__ clkevt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int,int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 struct timer_of* FUNC_4 (int *,unsigned int) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (struct timer_of*) ;
 int FUNC_6 (struct timer_of*) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_8(unsigned int VAR_4)
{
 struct timer_of *VAR_5 = FUNC_4(&VAR_3, VAR_4);

 FUNC_7(0, FUNC_5(VAR_5) + VAR_2);
 FUNC_7(VAR_1, FUNC_5(VAR_5) + VAR_0);

 FUNC_3(VAR_5->clkevt.irq, FUNC_1(VAR_4));
 FUNC_2(VAR_5->clkevt.irq);
 FUNC_0(&VAR_5->clkevt, FUNC_6(VAR_5),
     1,
     0x1fffffff + 1);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cpumask; } ;
struct timer_of {TYPE_1__ clkevt; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int,int ) ;
 int FUNC_1 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 struct timer_of* FUNC_3 (int *,unsigned int) ;
 int FUNC_4 (struct timer_of*) ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_3)
{
 struct timer_of *VAR_4 = FUNC_3(&VAR_2, VAR_3);

 VAR_4->clkevt.cpumask = FUNC_1(VAR_3);

 FUNC_2(VAR_1, 0);

 FUNC_0(&VAR_4->clkevt, FUNC_4(VAR_4),
     2, VAR_0);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct icside_state {scalar_t__ ioc_base; } ;
struct expansion_card {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* irqdisable ) (struct expansion_card*,int ) ;} ;


 struct icside_state* FUNC_0 (struct expansion_card*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct expansion_card*,int ) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct expansion_card *VAR_0)
{
 struct icside_state *VAR_1 = FUNC_0(VAR_0);
 unsigned long VAR_2;






 FUNC_2(VAR_2);
 VAR_0->ops->irqdisable(VAR_0, 0);
 FUNC_1(VAR_2);






 if (VAR_1->ioc_base)
  FUNC_4(0, VAR_1->ioc_base);
}

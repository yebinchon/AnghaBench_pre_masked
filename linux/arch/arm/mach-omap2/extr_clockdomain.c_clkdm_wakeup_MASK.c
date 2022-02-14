
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ptr; } ;
struct clockdomain {TYPE_1__ pwrdm; } ;


 int FUNC_0 (struct clockdomain*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct clockdomain *VAR_0)
{
 int VAR_1;

 FUNC_1(VAR_0->pwrdm.ptr);
 VAR_1 = FUNC_0(VAR_0);
 FUNC_2(VAR_0->pwrdm.ptr);

 return VAR_1;
}

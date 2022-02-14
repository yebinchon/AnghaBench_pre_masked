
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct progress {int dummy; } ;
struct TYPE_3__ {scalar_t__ nr; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct progress*,unsigned int) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct progress* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct progress**) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(void)
{
 struct progress *VAR_2 = ((void*)0);
 unsigned int VAR_3 = 0;
 int VAR_4 = 0;
 if (VAR_1)
  VAR_2 = FUNC_3(FUNC_0("Checking connectivity"), 0);
 while (VAR_0.nr) {
  VAR_4 |= FUNC_5(FUNC_2(&VAR_0));
  FUNC_1(VAR_2, ++VAR_3);
 }
 FUNC_4(&VAR_2);
 return !!VAR_4;
}

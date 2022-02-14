
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dev_groups; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (int ,char*) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(void)
{
 if (!VAR_1) {
  VAR_1 = FUNC_2(VAR_0, "extcon");
  if (FUNC_0(VAR_1))
   return FUNC_1(VAR_1);
  VAR_1->dev_groups = VAR_2;
 }

 return 0;
}

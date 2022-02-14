
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct powerdomain {int dummy; } ;
struct TYPE_2__ {struct powerdomain* ptr; int name; } ;
struct clockdomain {int name; int node; TYPE_1__ pwrdm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (struct powerdomain*,struct clockdomain*) ;
 struct powerdomain* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct clockdomain *VAR_3)
{
 struct powerdomain *VAR_4;

 if (!VAR_3 || !VAR_3->name)
  return -VAR_1;

 VAR_4 = FUNC_5(VAR_3->pwrdm.name);
 if (!VAR_4) {
  FUNC_3("clockdomain: %s: powerdomain %s does not exist\n",
   VAR_3->name, VAR_3->pwrdm.name);
  return -VAR_1;
 }
 VAR_3->pwrdm.ptr = VAR_4;


 if (FUNC_0(VAR_3->name))
  return -VAR_0;

 FUNC_1(&VAR_3->node, &VAR_2);

 FUNC_4(VAR_4, VAR_3);

 FUNC_2("clockdomain: registered %s\n", VAR_3->name);

 return 0;
}

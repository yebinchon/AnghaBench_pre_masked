
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cmdq {int suspended; int clock; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 struct cmdq* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct cmdq *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(FUNC_1(VAR_1->clock) < 0);
 VAR_1->suspended = 0;
 return 0;
}

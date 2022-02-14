
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int * resource; } ;
struct jbusmc {int regs; int list; } ;


 int VAR_0 ;
 int FUNC_0 (struct jbusmc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct platform_device *VAR_1, struct jbusmc *VAR_2)
{
 FUNC_1(&VAR_2->list);
 FUNC_2(&VAR_1->resource[0], VAR_2->regs, VAR_0);
 FUNC_0(VAR_2);
}

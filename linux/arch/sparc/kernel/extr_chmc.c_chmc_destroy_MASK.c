
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int * resource; } ;
struct chmc {int regs; int list; } ;


 int FUNC_0 (struct chmc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static void FUNC_3(struct platform_device *VAR_0, struct chmc *VAR_1)
{
 FUNC_1(&VAR_1->list);
 FUNC_2(&VAR_0->resource[0], VAR_1->regs, 0x48);
 FUNC_0(VAR_1);
}

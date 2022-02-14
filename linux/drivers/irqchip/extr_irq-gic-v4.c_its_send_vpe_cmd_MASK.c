
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct its_vpe {int irq; } ;
struct its_cmd_info {int dummy; } ;


 int FUNC_0 (int ,struct its_cmd_info*) ;

__attribute__((used)) static int FUNC_1(struct its_vpe *VAR_0, struct its_cmd_info *VAR_1)
{
 return FUNC_0(VAR_0->irq, VAR_1);
}

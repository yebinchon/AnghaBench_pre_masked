
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct of_phandle_args {scalar_t__ np; int args_count; int * args; } ;
struct irq_domain {int dummy; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct irq_domain*) ;
 int FUNC_2 (int ,char*,char*,int,struct of_phandle_args*) ;

__attribute__((used)) static int FUNC_3(struct irq_domain *VAR_1, struct device *VAR_2,
      u32 *VAR_3)
{
 int VAR_4, VAR_5 = 0;


 do {
  struct of_phandle_args VAR_6;

  VAR_4 = FUNC_2(VAR_2->of_node,
       "msi-parent", "#msi-cells",
       VAR_5, &VAR_6);
  if (VAR_6.np == FUNC_1(VAR_1)) {
   if (FUNC_0(VAR_6.args_count != 1))
    return -VAR_0;
   *VAR_3 = VAR_6.args[0];
   break;
  }
  VAR_5++;
 } while (!VAR_4);

 return VAR_4;
}

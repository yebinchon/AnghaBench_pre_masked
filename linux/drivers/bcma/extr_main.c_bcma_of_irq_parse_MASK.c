
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct of_phandle_args {int args_count; int* args; int np; } ;
struct device {int of_node; } ;
struct TYPE_2__ {scalar_t__ of_node; } ;
struct bcma_device {int addr; TYPE_1__ dev; } ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int,struct of_phandle_args*) ;
 int FUNC_2 (int *,struct of_phandle_args*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0,
        struct bcma_device *VAR_1,
        struct of_phandle_args *VAR_2, int VAR_3)
{
 __be32 VAR_4[1];
 int VAR_5;

 if (VAR_1->dev.of_node) {
  VAR_5 = FUNC_1(VAR_1->dev.of_node, VAR_3, VAR_2);
  if (!VAR_5)
   return VAR_5;
 }

 VAR_2->np = VAR_0->of_node;
 VAR_2->args_count = 1;
 VAR_2->args[0] = VAR_3;

 VAR_4[0] = FUNC_0(VAR_1->addr);
 return FUNC_2(VAR_4, VAR_2);
}

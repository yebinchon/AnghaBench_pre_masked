
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {int dummy; } ;
struct device {int of_node; } ;
struct bcma_device {int bus; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct device*,struct bcma_device*,struct of_phandle_args*,int) ;
 unsigned int FUNC_3 (struct of_phandle_args*) ;

__attribute__((used)) static unsigned int FUNC_4(struct device *VAR_1,
        struct bcma_device *VAR_2, int VAR_3)
{
 struct of_phandle_args VAR_4;
 int VAR_5;

 if (!FUNC_0(VAR_0) || !VAR_1->of_node)
  return 0;

 VAR_5 = FUNC_2(VAR_1, VAR_2, &VAR_4, VAR_3);
 if (VAR_5) {
  FUNC_1(VAR_2->bus, "bcma_of_get_irq() failed with rc=%d\n",
      VAR_5);
  return 0;
 }

 return FUNC_3(&VAR_4);
}

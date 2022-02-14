
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oxnas_pcie {struct oxnas_pcie** private_data; } ;
struct hw_pci {int nr_controllers; int * ops; int map_irq; int setup; struct oxnas_pcie** private_data; } ;
struct device {int dummy; } ;
typedef int hw ;


 int VAR_0 ;
 int FUNC_0 (struct hw_pci*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct device*,struct hw_pci*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_4, struct oxnas_pcie *VAR_5)
{
 struct hw_pci VAR_6;
 int VAR_7;

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  VAR_5->private_data[VAR_7] = VAR_5;

 VAR_6.nr_controllers = VAR_0;

 VAR_6.private_data = VAR_5->private_data;
 VAR_6.setup = VAR_3;
 VAR_6.map_irq = VAR_1;
 VAR_6.ops = &VAR_2;


 FUNC_1(VAR_4, &VAR_6);
}

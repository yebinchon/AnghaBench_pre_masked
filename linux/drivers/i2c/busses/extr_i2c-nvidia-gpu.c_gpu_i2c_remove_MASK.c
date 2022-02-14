
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct gpu_i2c_dev {int adapter; int dev; } ;


 struct gpu_i2c_dev* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_0)
{
 struct gpu_i2c_dev *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_3(VAR_1->dev);
 FUNC_1(&VAR_1->adapter);
 FUNC_2(VAR_0);
}

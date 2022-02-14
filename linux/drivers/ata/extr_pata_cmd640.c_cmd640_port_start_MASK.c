
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct cmd640_reg {int last; } ;
struct ata_port {struct cmd640_reg* private_data; TYPE_1__* host; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cmd640_reg* FUNC_0 (int *,int,int ) ;
 struct pci_dev* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ata_port *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_1(VAR_2->host->dev);
 struct cmd640_reg *VAR_4;

 VAR_4 = FUNC_0(&VAR_3->dev, sizeof(struct cmd640_reg), VAR_1);
 if (VAR_4 == ((void*)0))
  return -VAR_0;
 VAR_4->last = -1;
 VAR_2->private_data = VAR_4;
 return 0;
}

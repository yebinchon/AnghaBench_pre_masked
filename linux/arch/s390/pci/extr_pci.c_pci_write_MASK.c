
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zpci_dev {int dummy; } ;
struct pci_bus {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct zpci_dev* FUNC_0 (struct pci_bus*) ;
 int FUNC_1 (struct zpci_dev*,int,int ,int) ;

__attribute__((used)) static int FUNC_2(struct pci_bus *VAR_2, unsigned int VAR_3, int VAR_4,
       int VAR_5, u32 VAR_6)
{
 struct zpci_dev *VAR_7 = FUNC_0(VAR_2);
 int VAR_8;

 if (!VAR_7 || VAR_3 != VAR_1)
  VAR_8 = -VAR_0;
 else
  VAR_8 = FUNC_1(VAR_7, VAR_4, VAR_6, VAR_5);

 return VAR_8;
}

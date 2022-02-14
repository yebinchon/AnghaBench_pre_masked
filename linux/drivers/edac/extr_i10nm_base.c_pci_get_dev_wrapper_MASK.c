
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (int,char*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (struct pci_dev*) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;
 struct pci_dev* FUNC_4 (int,unsigned int,int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static struct pci_dev *FUNC_6(int VAR_0, unsigned int VAR_1,
        unsigned int VAR_2, unsigned int VAR_3)
{
 struct pci_dev *VAR_4;

 VAR_4 = FUNC_4(VAR_0, VAR_1, FUNC_0(VAR_2, VAR_3));
 if (!VAR_4) {
  FUNC_1(2, "No device %02x:%02x.%x\n",
    VAR_1, VAR_2, VAR_3);
  return ((void*)0);
 }

 if (FUNC_5(FUNC_3(VAR_4) < 0)) {
  FUNC_1(2, "Failed to enable device %02x:%02x.%x\n",
    VAR_1, VAR_2, VAR_3);
  return ((void*)0);
 }

 FUNC_2(VAR_4);

 return VAR_4;
}

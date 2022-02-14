
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_pbm_info {int dummy; } ;
struct pci_dev {struct device_node* hdr_type; int number; } ;
struct pci_bus {struct device_node* hdr_type; int number; } ;
struct device_node {int dummy; } ;


 struct pci_dev* FUNC_0 (struct pci_pbm_info*,struct device_node*,struct pci_dev*,int) ;
 struct device_node* FUNC_1 (struct device_node*,struct device_node*) ;
 int* FUNC_2 (struct device_node*,char*,int*) ;
 int FUNC_3 (struct pci_pbm_info*,struct device_node*,struct pci_dev*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (struct pci_dev*,char*,struct device_node*,...) ;
 scalar_t__ FUNC_5 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_6(struct pci_pbm_info *VAR_1,
       struct device_node *VAR_2,
       struct pci_bus *VAR_3)
{
 struct device_node *VAR_4;
 const u32 *VAR_5;
 int VAR_6, VAR_7, VAR_8;
 struct pci_dev *VAR_9;

 if (VAR_0)
  FUNC_4(VAR_3, "scan_bus[%pOF] bus no %d\n",
    VAR_2, VAR_3->number);

 VAR_4 = ((void*)0);
 VAR_8 = -1;
 while ((VAR_4 = FUNC_1(VAR_2, VAR_4)) != ((void*)0)) {
  if (VAR_0)
   FUNC_4(VAR_3, "  * %pOF\n", VAR_4);
  VAR_5 = FUNC_2(VAR_4, "reg", &VAR_6);
  if (VAR_5 == ((void*)0) || VAR_6 < 20)
   continue;

  VAR_7 = (VAR_5[0] >> 8) & 0xff;






  if (VAR_7 == VAR_8)
   continue;
  VAR_8 = VAR_7;


  VAR_9 = FUNC_0(VAR_1, VAR_4, VAR_3, VAR_7);
  if (!VAR_9)
   continue;
  if (VAR_0)
   FUNC_4(VAR_9, "dev header type: %x\n", VAR_9->hdr_type);

  if (FUNC_5(VAR_9))
   FUNC_3(VAR_1, VAR_4, VAR_9);
 }
}

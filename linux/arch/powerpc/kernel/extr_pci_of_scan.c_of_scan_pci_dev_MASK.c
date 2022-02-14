
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {struct device_node* hdr_type; } ;
struct pci_bus {int dummy; } ;
struct eeh_dev {int mode; } ;
struct device_node {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct device_node*) ;
 struct pci_dev* FUNC_1 (struct device_node*,struct pci_bus*,int) ;
 int FUNC_2 (struct device_node*) ;
 int * FUNC_3 (struct device_node*,char*,int*) ;
 int FUNC_4 (int const*,int) ;
 int FUNC_5 (struct pci_dev*) ;
 struct pci_dev* FUNC_6 (struct pci_bus*,int) ;
 struct eeh_dev* FUNC_7 (int ) ;
 int FUNC_8 (char*,struct device_node*) ;

__attribute__((used)) static struct pci_dev *FUNC_9(struct pci_bus *VAR_1,
       struct device_node *VAR_2)
{
 struct pci_dev *VAR_3 = ((void*)0);
 const __be32 *VAR_4;
 int VAR_5, VAR_6;




 FUNC_8("  * %pOF\n", VAR_2);
 if (!FUNC_2(VAR_2))
  return ((void*)0);

 VAR_4 = FUNC_3(VAR_2, "reg", &VAR_5);
 if (VAR_4 == ((void*)0) || VAR_5 < 20)
  return ((void*)0);
 VAR_6 = (FUNC_4(VAR_4, 1) >> 8) & 0xff;


 VAR_3 = FUNC_6(VAR_1, VAR_6);
 if (VAR_3) {
  FUNC_5(VAR_3);
  return VAR_3;
 }
 VAR_3 = FUNC_1(VAR_2, VAR_1, VAR_6);
 if (!VAR_3)
  return ((void*)0);

 FUNC_8("  dev header type: %x\n", VAR_3->hdr_type);
 return VAR_3;
}

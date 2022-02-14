
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct device_node {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (int const*) ;
 struct device_node* FUNC_1 (struct device_node*) ;
 int * FUNC_2 (struct device_node*,char*,int *) ;
 struct device_node* FUNC_3 (int ) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (char*,struct device_node*) ;

__attribute__((used)) static struct device_node *FUNC_6(struct pci_dev *VAR_0, int *VAR_1)
{
 struct device_node *VAR_2;
 const __be32 *VAR_3;

 VAR_2 = FUNC_3(FUNC_4(VAR_0));
 while (VAR_2) {
  VAR_3 = FUNC_2(VAR_2, "ibm,pe-total-#msi", ((void*)0));
  if (VAR_3) {
   FUNC_5("rtas_msi: found prop on dn %pOF\n",
    VAR_2);
   *VAR_1 = FUNC_0(VAR_3);
   return VAR_2;
  }

  VAR_2 = FUNC_1(VAR_2);
 }

 return ((void*)0);
}

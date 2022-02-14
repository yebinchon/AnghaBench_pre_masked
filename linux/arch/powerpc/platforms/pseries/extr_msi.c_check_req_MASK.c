
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
struct device_node {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int * FUNC_1 (struct device_node*,char*,int *) ;
 struct device_node* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_2, int VAR_3, char *VAR_4)
{
 struct device_node *VAR_5;
 const __be32 *VAR_6;
 u32 VAR_7;

 VAR_5 = FUNC_2(VAR_2);

 VAR_6 = FUNC_1(VAR_5, VAR_4, ((void*)0));
 if (!VAR_6) {
  FUNC_3("rtas_msi: No %s on %pOF\n", VAR_4, VAR_5);
  return -VAR_0;
 }

 VAR_7 = FUNC_0(VAR_6);
 if (VAR_7 < VAR_3) {
  FUNC_3("rtas_msi: %s requests < %d MSIs\n", VAR_4, VAR_3);

  if (VAR_7 == 0)
   return -VAR_1;

  return VAR_7;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_controller {struct device_node* dn; int controller_ops; } ;
struct device_node {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_controller*,int *,int *,void*) ;
 char* FUNC_1 (struct device_node*,char*,int *) ;
 int FUNC_2 (struct device_node*,char*) ;
 int FUNC_3 (struct pci_controller*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static int FUNC_5(struct pci_controller *VAR_4)
{
 const char *VAR_5;
 struct device_node *VAR_6;

 int VAR_7 = FUNC_3(VAR_4);
 if (VAR_7)
  return VAR_7;

 VAR_4->controller_ops = VAR_1;

 VAR_6 = VAR_4->dn;
 VAR_5 = FUNC_1(VAR_6, "model", ((void*)0));
 if (VAR_5 == ((void*)0) || !FUNC_2(VAR_6, "pci"))
  return 0;


 if (FUNC_4(VAR_5, "Spider"))
  return 0;

 FUNC_0(VAR_4, &VAR_3, &VAR_2,
      (void *)VAR_0);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dn {int dummy; } ;
struct pci_bus {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 struct pci_dn* FUNC_2 (struct pci_bus*,unsigned int) ;
 int FUNC_3 (struct pci_dn*) ;
 int FUNC_4 (struct pci_dn*,int,int,int*) ;

__attribute__((used)) static int FUNC_5(struct pci_bus *VAR_1,
    unsigned int VAR_2,
    int VAR_3, int VAR_4, u32 *VAR_5)
{
 struct pci_dn *VAR_6;
 int VAR_7;

 *VAR_5 = 0xFFFFFFFF;

 VAR_6 = FUNC_2(VAR_1, VAR_2);


 VAR_7 = FUNC_4(VAR_6, VAR_3, VAR_4, VAR_5);
 if (*VAR_5 == FUNC_0(VAR_4) &&
     FUNC_1(FUNC_3(VAR_6)))
  return VAR_0;

 return VAR_7;
}

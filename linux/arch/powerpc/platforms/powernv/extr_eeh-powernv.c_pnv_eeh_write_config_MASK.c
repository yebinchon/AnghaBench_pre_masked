
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pci_dn*) ;
 int FUNC_1 (struct pci_dn*,int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct pci_dn *VAR_2,
    int VAR_3, int VAR_4, u32 VAR_5)
{
 if (!VAR_2)
  return VAR_0;

 if (FUNC_0(VAR_2))
  return VAR_1;

 return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
}

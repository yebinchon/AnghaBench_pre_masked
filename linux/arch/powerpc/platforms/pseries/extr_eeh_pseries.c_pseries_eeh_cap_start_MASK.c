
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dn*,int ,int,int*) ;

__attribute__((used)) static int FUNC_1(struct pci_dn *VAR_3)
{
 u32 VAR_4;

 if (!VAR_3)
  return 0;

 FUNC_0(VAR_3, VAR_1, 2, &VAR_4);
 if (!(VAR_4 & VAR_2))
  return 0;

 return VAR_0;
}

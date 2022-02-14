
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u32 ;
struct pnv_phb {struct pci_controller* hose; } ;
struct pci_controller {struct device_node* dn; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device_node*,char*) ;
 int FUNC_2 (struct device_node*,char*,int,unsigned long long*) ;

__attribute__((used)) static unsigned long FUNC_3(struct pnv_phb *VAR_6)
{
 struct pci_controller *VAR_7 = VAR_6->hose;
 struct device_node *VAR_8 = VAR_7->dn;
 unsigned long VAR_9 = 0;
 int VAR_10, VAR_11, VAR_12;
 u32 VAR_13;

 VAR_12 = FUNC_1(VAR_8, "ibm,supported-tce-sizes");
 if (VAR_12 <= 0) {
  VAR_9 = VAR_4 | VAR_5;

  if (FUNC_0(VAR_0) &&
    !FUNC_0(VAR_1))
   VAR_9 |= VAR_2 | VAR_3;
  return VAR_9;
 }

 for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++) {
  VAR_11 = FUNC_2(VAR_8, "ibm,supported-tce-sizes",
      VAR_10, &VAR_13);
  if (VAR_11 == 0)
   VAR_9 |= 1ULL << VAR_13;
 }

 return VAR_9;
}

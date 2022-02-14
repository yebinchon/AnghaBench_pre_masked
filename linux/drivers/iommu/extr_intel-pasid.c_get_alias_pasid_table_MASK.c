
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int bus; } ;
struct pasid_table_opaque {int devfn; int bus; int segment; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct pasid_table_opaque*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_1, u16 VAR_2, void *VAR_3)
{
 struct pasid_table_opaque *VAR_4 = VAR_3;

 VAR_4->segment = FUNC_2(VAR_1->bus);
 VAR_4->bus = FUNC_0(VAR_2);
 VAR_4->devfn = VAR_2 & 0xff;

 return FUNC_1(&VAR_0, VAR_4);
}

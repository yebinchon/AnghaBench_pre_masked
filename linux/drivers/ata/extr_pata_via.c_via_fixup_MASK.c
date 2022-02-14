
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct via_isa_bridge {int flags; scalar_t__ udma_mask; } ;
struct pci_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int,int) ;
 int FUNC_2 (struct pci_dev*,int) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_2, const struct via_isa_bridge *VAR_3)
{
 u32 VAR_4;


 FUNC_2(VAR_2, VAR_3->flags);

 if (VAR_3->udma_mask == VAR_0) {

  FUNC_0(VAR_2, 0x50, &VAR_4);
  VAR_4 |= 0x80008;
  FUNC_1(VAR_2, 0x50, VAR_4);
 }
 if (VAR_3->flags & VAR_1) {

  FUNC_0(VAR_2, 0x50, &VAR_4);
  VAR_4 &= ~0x80008;
  FUNC_1(VAR_2, 0x50, VAR_4);
 }
}

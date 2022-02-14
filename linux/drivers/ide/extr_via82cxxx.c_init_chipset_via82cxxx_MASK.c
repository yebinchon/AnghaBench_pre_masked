
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct via_isa_bridge {scalar_t__ udma_mask; int flags; } ;
struct via82cxxx_dev {struct via_isa_bridge* via_config; } ;
struct pci_dev {int dummy; } ;
struct ide_host {struct via82cxxx_dev* host_priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ide_host* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 int FUNC_2 (struct pci_dev*,int ,int*) ;
 int FUNC_3 (struct pci_dev*,int ,int) ;
 int FUNC_4 (struct pci_dev*,int ,int) ;
 int FUNC_5 (struct via82cxxx_dev*,int) ;

__attribute__((used)) static int FUNC_6(struct pci_dev *VAR_7)
{
 struct ide_host *VAR_8 = FUNC_0(VAR_7);
 struct via82cxxx_dev *VAR_9 = VAR_8->host_priv;
 struct via_isa_bridge *VAR_10 = VAR_9->via_config;
 u8 VAR_11, VAR_12;
 u32 VAR_13;




 FUNC_2(VAR_7, VAR_6, &VAR_13);

 FUNC_5(VAR_9, VAR_13);

 if (VAR_10->udma_mask == VAR_0) {

  FUNC_4(VAR_7, VAR_6, VAR_13|0x80008);
 } else if (VAR_10->flags & VAR_1) {

  FUNC_4(VAR_7, VAR_6, VAR_13 & ~0x80008);
 }





 FUNC_1(VAR_7, VAR_4, &VAR_12);





 FUNC_1(VAR_7, VAR_3, &VAR_11);


 if (VAR_10->flags & VAR_2) {

  VAR_11 &= 0x7f;
 }


 if (VAR_10->flags & VAR_5) {
  VAR_11 &= (VAR_11 & 0x9f);
  switch (VAR_12 & 3) {
   case 2: VAR_11 |= 0x00; break;
   case 1: VAR_11 |= 0x60; break;
   case 3: VAR_11 |= 0x20; break;
  }
 }

 FUNC_3(VAR_7, VAR_3, VAR_11);

 return 0;
}

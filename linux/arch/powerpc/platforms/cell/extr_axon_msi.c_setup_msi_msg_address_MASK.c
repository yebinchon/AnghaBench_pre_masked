
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dev; } ;
struct msi_msg {int address_lo; int address_hi; } ;
struct TYPE_2__ {scalar_t__ is_64; } ;
struct msi_desc {TYPE_1__ msi_attrib; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 struct msi_desc* FUNC_1 (struct pci_dev*) ;
 struct device_node* FUNC_2 (struct device_node*) ;
 int * FUNC_3 (struct device_node*,char*,int*) ;
 struct device_node* FUNC_4 (int ) ;
 int FUNC_5 (struct device_node*) ;
 int FUNC_6 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_7(struct pci_dev *VAR_3, struct msi_msg *VAR_4)
{
 struct device_node *VAR_5;
 struct msi_desc *VAR_6;
 int VAR_7;
 const u32 *VAR_8;

 VAR_5 = FUNC_4(FUNC_6(VAR_3));
 if (!VAR_5) {
  FUNC_0(&VAR_3->dev, "axon_msi: no pci_dn found\n");
  return -VAR_1;
 }

 VAR_6 = FUNC_1(VAR_3);

 for (; VAR_5; VAR_5 = FUNC_2(VAR_5)) {
  if (VAR_6->msi_attrib.is_64) {
   VAR_8 = FUNC_3(VAR_5, "msi-address-64", &VAR_7);
   if (VAR_8)
    break;
  }

  VAR_8 = FUNC_3(VAR_5, "msi-address-32", &VAR_7);
  if (VAR_8)
   break;
 }

 if (!VAR_8) {
  FUNC_0(&VAR_3->dev,
   "axon_msi: no msi-address-(32|64) properties found\n");
  return -VAR_2;
 }

 switch (VAR_7) {
 case 8:
  VAR_4->address_hi = VAR_8[0];
  VAR_4->address_lo = VAR_8[1];
  break;
 case 4:
  VAR_4->address_hi = 0;
  VAR_4->address_lo = VAR_8[0];
  break;
 default:
  FUNC_0(&VAR_3->dev,
   "axon_msi: malformed msi-address-(32|64) property\n");
  FUNC_5(VAR_5);
  return -VAR_0;
 }

 FUNC_5(VAR_5);

 return 0;
}

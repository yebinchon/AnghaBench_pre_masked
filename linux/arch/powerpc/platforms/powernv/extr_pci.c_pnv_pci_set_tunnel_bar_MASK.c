
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pnv_phb {int opal_id; } ;
struct pci_dev {int bus; } ;
struct pci_controller {struct pnv_phb* private_data; } ;
typedef int __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int) ;
 struct pci_controller* FUNC_7 (int ) ;
 int VAR_7 ;

int FUNC_8(struct pci_dev *VAR_8, u64 VAR_9, int VAR_10)
{
 __be64 VAR_11;
 struct pci_controller *VAR_12;
 struct pnv_phb *VAR_13;
 u64 VAR_14;
 int VAR_15;

 if (!FUNC_3(VAR_4))
  return -VAR_2;
 if (!FUNC_3(VAR_5))
  return -VAR_2;

 VAR_12 = FUNC_7(VAR_8->bus);
 VAR_13 = VAR_12->private_data;

 FUNC_1(&VAR_7);
 VAR_15 = FUNC_5(VAR_13->opal_id, &VAR_11);
 if (VAR_15 != VAR_6) {
  VAR_15 = -VAR_1;
  goto out;
 }
 VAR_14 = FUNC_0(VAR_11);
 if (VAR_10) {




  if (VAR_14) {
   if (VAR_14 != VAR_9)
    VAR_15 = -VAR_0;
   else
    VAR_15 = 0;
   goto out;
  }
 } else {




  if (VAR_14 != VAR_9) {
   VAR_15 = -VAR_3;
   goto out;
  }
  VAR_9 = 0x0ULL;
 }
 VAR_15 = FUNC_6(VAR_13->opal_id, VAR_9);
 VAR_15 = FUNC_4(VAR_15);
out:
 FUNC_2(&VAR_7);
 return VAR_15;
}

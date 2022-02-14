
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct usnic_vnic {TYPE_1__* bar; int vdev; int * chunks; } ;
struct pci_dev {int dummy; } ;
typedef enum usnic_vnic_res_type { ____Placeholder_usnic_vnic_res_type } usnic_vnic_res_type ;
struct TYPE_3__ {int vaddr; int bus_addr; int len; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pci_dev*,int,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int) ;
 int FUNC_5 (struct pci_dev*,int) ;
 int FUNC_6 (struct pci_dev*,int) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (struct usnic_vnic*,int,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,struct pci_dev*,struct pci_dev*,TYPE_1__*,int) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct pci_dev *VAR_5,
      struct usnic_vnic *VAR_6)
{
 enum usnic_vnic_res_type VAR_7;
 int VAR_8;
 int VAR_9 = 0;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_6->bar); VAR_8++) {
  if (!(FUNC_4(VAR_5, VAR_8) & VAR_2))
   continue;
  VAR_6->bar[VAR_8].len = FUNC_5(VAR_5, VAR_8);
  VAR_6->bar[VAR_8].vaddr = FUNC_2(VAR_5, VAR_8, VAR_6->bar[VAR_8].len);
  if (!VAR_6->bar[VAR_8].vaddr) {
   FUNC_7("Cannot memory-map BAR %d, aborting\n",
     VAR_8);
   VAR_9 = -VAR_1;
   goto out_clean_bar;
  }
  VAR_6->bar[VAR_8].bus_addr = FUNC_6(VAR_5, VAR_8);
 }

 VAR_6->vdev = FUNC_10(((void*)0), VAR_5, VAR_5, VAR_6->bar,
   FUNC_0(VAR_6->bar));
 if (!VAR_6->vdev) {
  FUNC_7("Failed to register device %s\n",
    FUNC_3(VAR_5));
  VAR_9 = -VAR_0;
  goto out_clean_bar;
 }

 for (VAR_7 = VAR_3 + 1;
   VAR_7 < VAR_4; VAR_7++) {
  VAR_9 = FUNC_8(VAR_6, VAR_7,
      &VAR_6->chunks[VAR_7]);
  if (VAR_9)
   goto out_clean_chunks;
 }

 return 0;

out_clean_chunks:
 for (VAR_7--; VAR_7 > VAR_3; VAR_7--)
  FUNC_9(&VAR_6->chunks[VAR_7]);
 FUNC_11(VAR_6->vdev);
out_clean_bar:
 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_6->bar); VAR_8++) {
  if (!(FUNC_4(VAR_5, VAR_8) & VAR_2))
   continue;
  if (!VAR_6->bar[VAR_8].vaddr)
   break;

  FUNC_1(VAR_6->bar[VAR_8].vaddr);
 }

 return VAR_9;
}

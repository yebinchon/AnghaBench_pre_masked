
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_device_id {int driver_data; } ;
struct pci_dev {int revision; } ;
struct ide_port_info {int host_flags; scalar_t__ swdma_mask; scalar_t__ mwdma_mask; int * dma_ops; int udma_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct ide_port_info VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct pci_dev*,struct ide_port_info*,int *) ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_10,
        const struct pci_device_id *VAR_11)
{
 struct ide_port_info VAR_12 = VAR_8;
 u8 VAR_13 = VAR_10->revision, VAR_14 = VAR_11->driver_data;


 if (VAR_13 <= 0xC4)
  VAR_12.host_flags |= VAR_7;

 if (VAR_13 >= 0x20) {
  if (VAR_13 == 0x20)
   VAR_12.host_flags |= VAR_5;

  if (VAR_13 < 0xC2)
   VAR_12.udma_mask = VAR_0;
  else if (VAR_13 == 0xC2 || VAR_13 == 0xC3)
   VAR_12.udma_mask = VAR_1;
  else if (VAR_13 == 0xC4)
   VAR_12.udma_mask = VAR_2;
  else
   VAR_12.udma_mask = VAR_3;

  VAR_12.dma_ops = &VAR_9;
 } else {
  VAR_12.host_flags |= VAR_6;

  VAR_12.mwdma_mask = VAR_12.swdma_mask = 0;
 }

 if (VAR_14 == 0)
  VAR_12.host_flags |= VAR_4;

 return FUNC_0(VAR_10, &VAR_12, ((void*)0));
}

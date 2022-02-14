
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int devfn; } ;
struct kfd_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int ,int ,int ,int,unsigned long,int) ;
 int VAR_3 ;
 struct kfd_dev* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct kfd_dev*,int,unsigned long,int,int) ;

__attribute__((used)) static int FUNC_7(struct pci_dev *VAR_4, int VAR_5,
  unsigned long VAR_6, u16 VAR_7)
{
 struct kfd_dev *VAR_8;

 FUNC_4(VAR_3,
   "Invalid PPR device %x:%x.%x pasid %d address 0x%lX flags 0x%X",
   FUNC_0(VAR_4->devfn),
   FUNC_2(VAR_4->devfn),
   FUNC_1(VAR_4->devfn),
   VAR_5,
   VAR_6,
   VAR_7);

 VAR_8 = FUNC_5(VAR_4);
 if (!FUNC_3(!VAR_8))
  FUNC_6(VAR_8, VAR_5, VAR_6,
   VAR_7 & VAR_2, VAR_7 & VAR_1);

 return VAR_0;
}

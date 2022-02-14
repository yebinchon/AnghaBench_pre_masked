
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
struct intel_uncore_box {int io_addr; int dieid; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 struct pci_dev* FUNC_2 (int ) ;
 unsigned int FUNC_3 (struct intel_uncore_box*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct intel_uncore_box *VAR_6)
{
 struct pci_dev *VAR_7 = FUNC_2(VAR_6->dieid);
 unsigned int VAR_8 = FUNC_3(VAR_6);
 resource_size_t VAR_9;
 u32 VAR_10;

 if (!VAR_7)
  return;

 FUNC_1(VAR_7, VAR_2, &VAR_10);
 VAR_9 = (VAR_10 & VAR_1) << 23;

 FUNC_1(VAR_7, VAR_4, &VAR_10);
 VAR_9 |= (VAR_10 & VAR_3) << 12;

 VAR_9 += VAR_8;

 VAR_6->io_addr = FUNC_0(VAR_9, VAR_5);
 if (!VAR_6->io_addr)
  return;

 FUNC_4(VAR_0, VAR_6->io_addr);
}

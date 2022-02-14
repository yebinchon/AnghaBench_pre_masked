
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
struct intel_uncore_box {int hrtimer_duration; int io_addr; struct pci_dev* pci_dev; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;

__attribute__((used)) static void FUNC_2(struct intel_uncore_box *VAR_4)
{
 struct pci_dev *VAR_5 = VAR_4->pci_dev;
 int VAR_6 = VAR_1;
 resource_size_t VAR_7;
 u32 VAR_8;

 FUNC_1(VAR_5, VAR_6, &VAR_8);
 VAR_7 = VAR_8;






 VAR_7 &= ~(VAR_0 - 1);

 VAR_4->io_addr = FUNC_0(VAR_7, VAR_2);
 VAR_4->hrtimer_duration = VAR_3;
}

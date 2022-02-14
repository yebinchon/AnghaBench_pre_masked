
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_1)
{
 u32 VAR_2;

 if (!FUNC_0(VAR_0))
  return;


 FUNC_1(VAR_1, 0x48, &VAR_2);
 FUNC_2(VAR_1, 0x48, (VAR_2 | 1<<26));


 FUNC_1(VAR_1, 0x90, &VAR_2);
 FUNC_2(VAR_1, 0x90, (VAR_2 | 1<<22));
}

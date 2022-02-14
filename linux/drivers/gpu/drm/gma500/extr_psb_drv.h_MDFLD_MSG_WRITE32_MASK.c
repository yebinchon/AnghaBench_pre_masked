
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u32 ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*) ;
 struct pci_dev* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (struct pci_dev*,int,int) ;

__attribute__((used)) static inline void FUNC_3(int VAR_0, uint VAR_1, uint VAR_2,
         u32 VAR_3)
{
 int VAR_4 = (0x11<<24) | (VAR_1 << 16) | (VAR_2 << 8) | 0xF0;
 struct pci_dev *VAR_5 = FUNC_1(VAR_0, 0, 0);
 FUNC_2(VAR_5, 0xD4, VAR_3);
 FUNC_2(VAR_5, 0xD0, VAR_4);
 FUNC_0(VAR_5);
}

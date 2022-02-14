
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int subsystem_vendor; int subsystem_device; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,int,char*) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_0)
{
        if (VAR_0->subsystem_vendor == 0x14FF && VAR_0->subsystem_device == 0xA003) {
                FUNC_0("Reserving memory on Twinhead H12Y\n");
                FUNC_1(0xFFB00000, 0x100000, "twinhead");
        }
}

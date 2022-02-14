
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofw_bus_iinfo {int dummy; } ;
struct isa_regs {int dummy; } ;
typedef int reg ;
typedef int phandle_t ;
typedef int ofw_pci_intr_t ;
typedef int ofw_isa_intr_t ;
typedef int mintr ;
typedef int intr ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct ofw_bus_iinfo*,struct isa_regs*,int,int *,int,int *,int,int *) ;

ofw_pci_intr_t
FUNC_3(device_t VAR_0, phandle_t VAR_1, struct ofw_bus_iinfo *VAR_2,
    ofw_isa_intr_t VAR_3)
{
 struct isa_regs VAR_4;
 device_t VAR_5;
 ofw_isa_intr_t VAR_6;

 VAR_5 = FUNC_1(FUNC_1(VAR_0));




 if (!FUNC_2(VAR_1, VAR_2, &VAR_4, sizeof(VAR_4),
     &VAR_3, sizeof(VAR_3), &VAR_6, sizeof(VAR_6), ((void*)0))) {

  VAR_6 = FUNC_0(VAR_5, VAR_0, VAR_3);
 }
 return (VAR_6);
}

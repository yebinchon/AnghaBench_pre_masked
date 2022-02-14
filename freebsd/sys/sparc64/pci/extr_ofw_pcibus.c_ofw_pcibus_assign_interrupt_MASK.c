
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ofw_pci_intr_t ;
typedef int intr ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int*,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_0, device_t VAR_1)
{
 ofw_pci_intr_t VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(FUNC_4(VAR_1), "interrupts", &VAR_2,
     sizeof(VAR_2));
 if (VAR_3 != sizeof(VAR_2)) {

  VAR_2 = FUNC_5(VAR_1);

 } else if (VAR_2 >= 255) {





  return (FUNC_0(VAR_2));

 }
 return (FUNC_2(FUNC_3(VAR_0), VAR_1, VAR_2));
}

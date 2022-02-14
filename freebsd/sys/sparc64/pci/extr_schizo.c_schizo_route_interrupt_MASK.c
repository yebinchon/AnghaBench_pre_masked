
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ofw_pci_intr_t ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_0, device_t VAR_1, int VAR_2)
{
 ofw_pci_intr_t VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
 if (!FUNC_0(VAR_3))
  FUNC_1(VAR_0,
      "could not route pin %d for device %d.%d\n",
      VAR_2, FUNC_4(VAR_1), FUNC_3(VAR_1));
 return (VAR_3);
}

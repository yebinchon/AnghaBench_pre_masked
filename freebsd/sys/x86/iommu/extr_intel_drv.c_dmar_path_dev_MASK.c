
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef int * device_t ;
struct TYPE_3__ {int Function; int Device; } ;
typedef TYPE_1__ ACPI_DMAR_PCI_PATH ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int,int ,int ,int ,int) ;
 int * FUNC_2 (int,int,int ,int ) ;

__attribute__((used)) static device_t
FUNC_3(int VAR_1, int VAR_2, int VAR_3,
    const ACPI_DMAR_PCI_PATH *VAR_4, uint16_t *VAR_5)
{
 device_t VAR_6;
 int VAR_7;

 VAR_6 = ((void*)0);
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_6 = FUNC_2(VAR_1, VAR_3, VAR_4->Device,
      VAR_4->Function);
  if (VAR_7 != VAR_2 - 1) {
   VAR_3 = FUNC_1(VAR_3, VAR_4->Device,
       VAR_4->Function, VAR_0, 1);
   VAR_4++;
  }
 }
 *VAR_5 = FUNC_0(VAR_3, VAR_4->Device, VAR_4->Function);
 return (VAR_6);
}

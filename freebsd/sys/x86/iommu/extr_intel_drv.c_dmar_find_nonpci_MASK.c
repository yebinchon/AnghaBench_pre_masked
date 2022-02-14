
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
typedef scalar_t__ u_int ;
struct dmar_unit {int dummy; } ;
typedef int * device_t ;
struct TYPE_9__ {int Length; scalar_t__ EntryType; scalar_t__ EnumerationId; int Bus; } ;
struct TYPE_6__ {int Length; } ;
struct TYPE_8__ {TYPE_1__ Header; } ;
struct TYPE_7__ {int Function; int Device; } ;
typedef TYPE_2__ ACPI_DMAR_PCI_PATH ;
typedef TYPE_3__ ACPI_DMAR_HARDWARE_UNIT ;
typedef TYPE_4__ ACPI_DMAR_DEVICE_SCOPE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 int ** VAR_2 ;
 TYPE_3__* FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,int *) ;
 int FUNC_4 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static struct dmar_unit *
FUNC_5(u_int VAR_3, u_int VAR_4, uint16_t *VAR_5)
{
 device_t VAR_6;
 struct dmar_unit *VAR_7;
 ACPI_DMAR_HARDWARE_UNIT *VAR_8;
 ACPI_DMAR_DEVICE_SCOPE *VAR_9;
 ACPI_DMAR_PCI_PATH *VAR_10;
 char *VAR_11, *VAR_12;



 int VAR_13;

 for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
  VAR_6 = VAR_2[VAR_13];
  if (VAR_6 == ((void*)0))
   continue;
  VAR_7 = (struct dmar_unit *)FUNC_1(VAR_6);
  VAR_8 = FUNC_2(VAR_13);
  if (VAR_8 == ((void*)0))
   continue;
  VAR_11 = (char *)VAR_8 + sizeof(*VAR_8);
  VAR_12 = (char *)VAR_8 + VAR_8->Header.Length;
  for (;;) {
   if (VAR_11 >= VAR_12)
    break;
   VAR_9 = (ACPI_DMAR_DEVICE_SCOPE *)VAR_11;
   VAR_11 += VAR_9->Length;
   if (VAR_9->EntryType != VAR_4)
    continue;
   if (VAR_9->EnumerationId != VAR_3)
    continue;
   if (VAR_9->Length - sizeof(ACPI_DMAR_DEVICE_SCOPE)
       == 2) {
    if (VAR_5 != ((void*)0)) {
     VAR_10 = (ACPI_DMAR_PCI_PATH *)
         (VAR_9 + 1);
     *VAR_5 = FUNC_0(VAR_9->Bus,
         VAR_10->Device, VAR_10->Function);
    }
    return (VAR_7);
   }
   FUNC_4(
             "dmar_find_nonpci: id %d type %d path length != 2\n",
       VAR_3, VAR_4);
   break;
  }
 }
 return (((void*)0));
}

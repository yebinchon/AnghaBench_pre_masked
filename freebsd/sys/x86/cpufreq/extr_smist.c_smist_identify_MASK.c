
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct piix4_pci_device {char* desc; int device; int vendor; } ;
typedef int driver_t ;
typedef int * device_t ;


 int * FUNC_0 (int *,int,char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*) ;
 int * FUNC_3 (int ,int ) ;
 struct piix4_pci_device* VAR_4 ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*,int ) ;

__attribute__((used)) static void
FUNC_6(driver_t *VAR_5, device_t VAR_6)
{
 struct piix4_pci_device *VAR_7;
 device_t VAR_8 = ((void*)0);

 if (FUNC_5("ichst", 0))
  return;


 if (VAR_3 != VAR_0)
  return;
 switch (VAR_2 & 0xff0) {
 case 0x680:
 case 0x6a0:
  break;
 default:
  return;
 }


 for (VAR_7 = VAR_4; VAR_7->desc != ((void*)0); ++VAR_7) {
  if ((VAR_8 = FUNC_3(VAR_7->vendor, VAR_7->device)) != ((void*)0))
   break;
 }
 if (!VAR_8)
  return;

 if (VAR_1)
  FUNC_4("smist: found supported isa bridge %s\n", VAR_7->desc);

 if (FUNC_1(VAR_6, "smist", -1) != ((void*)0))
  return;
 if (FUNC_0(VAR_6, 30, "smist", -1) == ((void*)0))
  FUNC_2(VAR_6, "smist: add child failed\n");
}

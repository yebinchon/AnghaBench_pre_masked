
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_vendor_info {int id; int devs; int * desc; } ;
struct pci_device_info {int id; int devs; int * desc; } ;
typedef int buf ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct pci_vendor_info*,int ) ;
 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (char*,int,int *) ;
 int * FUNC_5 (char const*,char*) ;
 int FUNC_6 (struct pci_vendor_info*) ;
 char* FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char) ;
 int VAR_2 ;
 struct pci_vendor_info* FUNC_9 (int) ;
 int VAR_3 ;
 int FUNC_10 (char*,char*,int*,char*) ;
 char* FUNC_11 (char*,char) ;
 void* FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static int
FUNC_16(void)
{
 const char *VAR_4;
 FILE *VAR_5;
 struct pci_vendor_info *VAR_6;
 struct pci_device_info *VAR_7;
 char VAR_8[1024], VAR_9[1024];
 char *VAR_10;
 int VAR_11, VAR_12;




 FUNC_0(&VAR_3);
 if ((VAR_4 = FUNC_7("PCICONF_VENDOR_DATABASE")) == ((void*)0))
  VAR_4 = VAR_0;
 if ((VAR_5 = FUNC_5(VAR_4, "r")) == ((void*)0)) {
  VAR_4 = VAR_1;
  if ((VAR_5 = FUNC_5(VAR_4, "r")) == ((void*)0))
   return(1);
 }
 VAR_6 = ((void*)0);
 VAR_7 = ((void*)0);
 VAR_12 = 0;




 for (;;) {
  if (FUNC_4(VAR_8, sizeof(VAR_8), VAR_5) == ((void*)0))
   break;

  if ((VAR_10 = FUNC_11(VAR_8, '#')) != ((void*)0))
   *VAR_10 = '\0';
  VAR_10 = FUNC_11(VAR_8, '\0') - 1;
  while (VAR_10 > VAR_8 && FUNC_8(*VAR_10))
   *VAR_10-- = '\0';
  if (VAR_10 <= VAR_8)
   continue;


  if (VAR_8[0] == '\t' && VAR_8[1] == '\t')
   continue;


  if (VAR_8[0] != '\t' && FUNC_10(VAR_8, "%04x %[^\n]", &VAR_11, VAR_9) == 2) {
   if ((VAR_11 == 0) || (FUNC_13(VAR_9) < 1))
    continue;
   if ((VAR_6 = FUNC_9(sizeof(struct pci_vendor_info))) == ((void*)0)) {
    FUNC_14("allocating vendor entry");
    VAR_12 = 1;
    break;
   }
   if ((VAR_6->desc = FUNC_12(VAR_9)) == ((void*)0)) {
    FUNC_6(VAR_6);
    FUNC_14("allocating vendor description");
    VAR_12 = 1;
    break;
   }
   VAR_6->id = VAR_11;
   FUNC_0(&VAR_6->devs);
   FUNC_1(&VAR_3, VAR_6, VAR_2);
   continue;
  }


  if (VAR_8[0] == '\t' && FUNC_10(VAR_8 + 1, "%04x %[^\n]", &VAR_11, VAR_9) == 2) {
   if ((VAR_11 == 0) || (FUNC_13(VAR_9) < 1))
    continue;
   if (VAR_6 == ((void*)0)) {
    FUNC_15("device entry with no vendor!");
    continue;
   }
   if ((VAR_7 = FUNC_9(sizeof(struct pci_device_info))) == ((void*)0)) {
    FUNC_14("allocating device entry");
    VAR_12 = 1;
    break;
   }
   if ((VAR_7->desc = FUNC_12(VAR_9)) == ((void*)0)) {
    FUNC_6(VAR_7);
    FUNC_14("allocating device description");
    VAR_12 = 1;
    break;
   }
   VAR_7->id = VAR_11;
   FUNC_1(&VAR_6->devs, VAR_7, VAR_2);
   continue;
  }


 }
 if (FUNC_3(VAR_5))
  VAR_12 = 1;
 FUNC_2(VAR_5);

 return(VAR_12);
}

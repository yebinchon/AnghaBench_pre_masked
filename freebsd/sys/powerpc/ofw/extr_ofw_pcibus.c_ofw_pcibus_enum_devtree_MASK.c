
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct pci_devinfo {int dummy; } ;
struct TYPE_3__ {scalar_t__ intpin; } ;
struct TYPE_4__ {int resources; TYPE_1__ cfg; } ;
struct ofw_pcibus_devinfo {TYPE_2__ opd_dinfo; int * opd_dma_tag; int opd_obdinfo; } ;
struct ofw_pci_register {int phys_hi; } ;
typedef scalar_t__ phandle_t ;
typedef int pcir ;
typedef int pcell_t ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,char*,int *,int) ;
 scalar_t__ FUNC_4 (scalar_t__,char*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,int ,int ,int ,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *,scalar_t__) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,scalar_t__,int *,int *) ;
 int FUNC_11 (int ,struct pci_devinfo*) ;
 int * FUNC_12 (int ,int ,int ,int ) ;
 int FUNC_13 (struct pci_devinfo*) ;
 scalar_t__ FUNC_14 (int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_15(device_t VAR_2, u_int VAR_3, u_int VAR_4)
{
 device_t VAR_5;
 struct ofw_pci_register VAR_6;
 struct ofw_pcibus_devinfo *VAR_7;
 phandle_t VAR_8, VAR_9;
 u_int VAR_10, VAR_11;
 int VAR_12;

 VAR_5 = FUNC_7(VAR_2);
 VAR_8 = FUNC_9(VAR_2);

 for (VAR_9 = FUNC_2(VAR_8); VAR_9 != 0; VAR_9 = FUNC_5(VAR_9)) {
  if (FUNC_3(VAR_9, "reg", (pcell_t *)&VAR_6,
      sizeof(VAR_6)) == -1)
   continue;
  VAR_11 = FUNC_0(VAR_6.phys_hi);
  VAR_10 = FUNC_1(VAR_6.phys_hi);


  if (FUNC_12(VAR_3, VAR_4, VAR_11, VAR_10) != ((void*)0))
   continue;







  VAR_12 = VAR_1;
  if (FUNC_4(VAR_9, "interrupts") > 0)
   VAR_12 = 0;
  FUNC_6(VAR_5, VAR_4, VAR_11, VAR_10, VAR_0,
      VAR_12, 1);






  VAR_7 = (struct ofw_pcibus_devinfo *)FUNC_14(VAR_5, VAR_2,
      VAR_3, VAR_4, VAR_11, VAR_10);
  if (VAR_7 == ((void*)0))
   continue;
  if (FUNC_8(&VAR_7->opd_obdinfo, VAR_9) !=
      0) {
   FUNC_13((struct pci_devinfo *)VAR_7);
   continue;
  }
  VAR_7->opd_dma_tag = ((void*)0);
  FUNC_11(VAR_2, (struct pci_devinfo *)VAR_7);







  if (VAR_7->opd_dinfo.cfg.intpin == 0)
   FUNC_10(VAR_2, VAR_9,
    &VAR_7->opd_dinfo.resources, ((void*)0));
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sc_nrange; TYPE_1__* sc_range; } ;
struct fsl_pcib_softc {int sc_iomem_target; int sc_ioport_target; int sc_ip_maj; TYPE_2__ pci_sc; int sc_iomem_end; scalar_t__ sc_iomem_start; int sc_ioport_end; scalar_t__ sc_ioport_start; int sc_res; int sc_dev; } ;
typedef int phandle_t ;
typedef int device_t ;
struct TYPE_3__ {int pci_hi; scalar_t__ size; int host; scalar_t__ pci; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct fsl_pcib_softc*,int,int,int ,int ,int ) ;
 int FUNC_2 (struct fsl_pcib_softc*,int,int,int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (int,int ,scalar_t__) ;
 int FUNC_4 (int ,int*,int*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(phandle_t VAR_8, struct fsl_pcib_softc *VAR_9)
{
 device_t VAR_10;
 int VAR_11, VAR_12, VAR_13;

 VAR_10 = VAR_9->sc_dev;

 FUNC_2(VAR_9, 0, -1, 0, 0, 0);




 VAR_11 = FUNC_4(VAR_9->sc_res, &VAR_9->sc_iomem_target,
     &VAR_9->sc_ioport_target);
 if (VAR_11 != 0) {
  FUNC_0(VAR_10, "could not retrieve PCI LAW target info\n");
  return (VAR_11);
 }

 for (VAR_12 = 0; VAR_12 < VAR_9->pci_sc.sc_nrange; VAR_12++) {
  switch (VAR_9->pci_sc.sc_range[VAR_12].pci_hi &
      VAR_1) {
  case 131:
   continue;
  case 130:
   VAR_13 = VAR_9->sc_ioport_target;
   FUNC_2(VAR_9, 2, VAR_4,
       VAR_9->pci_sc.sc_range[VAR_12].host,
       VAR_9->pci_sc.sc_range[VAR_12].size,
       VAR_9->pci_sc.sc_range[VAR_12].pci);
   VAR_9->sc_ioport_start = VAR_9->pci_sc.sc_range[VAR_12].pci;
   VAR_9->sc_ioport_end = VAR_9->pci_sc.sc_range[VAR_12].pci +
       VAR_9->pci_sc.sc_range[VAR_12].size - 1;
   break;
  case 129:
  case 128:
   VAR_13 = VAR_9->sc_iomem_target;
   FUNC_2(VAR_9, 1, VAR_5,
       VAR_9->pci_sc.sc_range[VAR_12].host,
       VAR_9->pci_sc.sc_range[VAR_12].size,
       VAR_9->pci_sc.sc_range[VAR_12].pci);
   VAR_9->sc_iomem_start = VAR_9->pci_sc.sc_range[VAR_12].pci;
   VAR_9->sc_iomem_end = VAR_9->pci_sc.sc_range[VAR_12].pci +
       VAR_9->pci_sc.sc_range[VAR_12].size - 1;
   break;
  default:
   FUNC_5("Unknown range type %#x\n",
       VAR_9->pci_sc.sc_range[VAR_12].pci_hi &
       VAR_1);
  }
  VAR_11 = FUNC_3(VAR_13, VAR_9->pci_sc.sc_range[VAR_12].host,
      VAR_9->pci_sc.sc_range[VAR_12].size);
  if (VAR_11 != 0) {
   FUNC_0(VAR_10, "could not program LAW for range "
       "%d\n", VAR_12);
   return (VAR_11);
  }
 }




 FUNC_2(VAR_9, 3, -1, 0, 0, 0);
 FUNC_2(VAR_9, 4, -1, 0, 0, 0);

 FUNC_1(VAR_9, 1, -1, 0, 0, 0);
 FUNC_1(VAR_9, 2, -1, 0, 0, 0);
 FUNC_1(VAR_9, 3, VAR_3, 0,
     FUNC_6(VAR_0), 0);




 if (VAR_9->sc_ip_maj >= 2)
  FUNC_1(VAR_9, 8, VAR_2, VAR_6,
      VAR_7, VAR_6);
 else
  FUNC_1(VAR_9, 1, VAR_2, VAR_6,
      VAR_7, VAR_6);

 return (0);
}

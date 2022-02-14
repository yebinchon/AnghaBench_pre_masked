
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u_int ;
struct pci_devinfo {int dummy; } ;
struct TYPE_5__ {scalar_t__ intline; } ;
struct TYPE_6__ {TYPE_2__ cfg; } ;
struct TYPE_4__ {int obd_node; int * obd_model; int * obd_type; int * obd_compat; int * obd_name; } ;
struct ofw_pcibus_devinfo {TYPE_3__ opd_dinfo; TYPE_1__ opd_obdinfo; int * opd_dma_tag; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,int,int ,int) ;
 int FUNC_3 (int ,int ,int,int,int ,scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct pci_devinfo*) ;
 int * FUNC_6 (int ,int ,int,int) ;
 scalar_t__ FUNC_7 (int ,int ,int ,int ,int,int) ;

__attribute__((used)) static void
FUNC_8(device_t VAR_7, u_int VAR_8, u_int VAR_9)
{
 device_t VAR_10;
 struct ofw_pcibus_devinfo *VAR_11;
 int VAR_12;
 int VAR_13, VAR_14, VAR_15;
 uint8_t VAR_16;

 VAR_10 = FUNC_4(VAR_7);

 VAR_12 = FUNC_1(VAR_10);
 for (VAR_13 = 0; VAR_13 <= VAR_12; VAR_13++) {
  VAR_15 = 0;
  VAR_14 = 0;
  FUNC_0(1);
  VAR_16 = FUNC_2(VAR_10, VAR_9, VAR_13, VAR_14, VAR_2, 1);
  if ((VAR_16 & VAR_0) > VAR_6)
   continue;
  if (VAR_16 & VAR_1)
   VAR_15 = VAR_4;
  for (VAR_14 = 0; VAR_14 <= VAR_15; VAR_14++) {

   if (FUNC_6(VAR_8, VAR_9, VAR_13, VAR_14) != ((void*)0))
    continue;

   VAR_11 = (struct ofw_pcibus_devinfo *)FUNC_7(
       VAR_10, VAR_7, VAR_8, VAR_9, VAR_13, VAR_14);
   if (VAR_11 == ((void*)0))
    continue;

   VAR_11->opd_dma_tag = ((void*)0);
   VAR_11->opd_obdinfo.obd_node = -1;

   VAR_11->opd_obdinfo.obd_name = ((void*)0);
   VAR_11->opd_obdinfo.obd_compat = ((void*)0);
   VAR_11->opd_obdinfo.obd_type = ((void*)0);
   VAR_11->opd_obdinfo.obd_model = ((void*)0);





   if (VAR_11->opd_dinfo.cfg.intline == 0) {
    VAR_11->opd_dinfo.cfg.intline = VAR_5;
    FUNC_3(VAR_10, VAR_9, VAR_13, VAR_14,
        VAR_3, VAR_5, 1);
   }

   FUNC_5(VAR_7, (struct pci_devinfo *)VAR_11);
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ebus_softc {int sc_iinfo; } ;
struct TYPE_2__ {int obd_name; } ;
struct ebus_devinfo {TYPE_1__ edi_obdinfo; } ;
typedef scalar_t__ phandle_t ;
typedef int ofw_isa_intr_t ;
typedef int * device_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,struct ebus_devinfo*) ;
 int FUNC_6 (struct ebus_devinfo*) ;
 struct ebus_devinfo* FUNC_7 (int *,struct ebus_softc*,scalar_t__) ;
 int FUNC_8 (scalar_t__,int *,int) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_0, struct ebus_softc *VAR_1, phandle_t VAR_2)
{
 struct ebus_devinfo *VAR_3;
 device_t VAR_4;

 FUNC_8(VAR_2, &VAR_1->sc_iinfo, sizeof(ofw_isa_intr_t));




 for (VAR_2 = FUNC_0(VAR_2); VAR_2 > 0; VAR_2 = FUNC_1(VAR_2)) {
  if ((VAR_3 = FUNC_7(VAR_0, VAR_1, VAR_2)) == ((void*)0))
   continue;
  if ((VAR_4 = FUNC_3(VAR_0, ((void*)0), -1)) == ((void*)0)) {
   FUNC_4(VAR_0, "<%s>: device_add_child failed\n",
       VAR_3->edi_obdinfo.obd_name);
   FUNC_6(VAR_3);
   continue;
  }
  FUNC_5(VAR_4, VAR_3);
 }
 return (FUNC_2(VAR_0));
}

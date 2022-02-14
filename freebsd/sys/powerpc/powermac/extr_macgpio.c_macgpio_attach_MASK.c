
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct macgpio_softc {scalar_t__ sc_node; int sc_gpios_rid; int sc_gpios; } ;
struct TYPE_3__ {int obd_name; } ;
struct macgpio_devinfo {int gpio_num; TYPE_1__ mdi_obdinfo; int mdi_resources; } ;
typedef scalar_t__ phandle_t ;
typedef int irq ;
typedef int iparent ;
typedef int * device_t ;


 int FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,char*,int*,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,char*,scalar_t__*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *,int ,int *,int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,int *,int) ;
 struct macgpio_softc* FUNC_8 (int *) ;
 int FUNC_9 (int *,char*,int ) ;
 int FUNC_10 (int *,struct macgpio_devinfo*) ;
 int FUNC_11 (struct macgpio_devinfo*,int ) ;
 struct macgpio_devinfo* FUNC_12 (int,int ,int) ;
 int FUNC_13 (TYPE_1__*) ;
 scalar_t__ FUNC_14 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (int *,int ,int ,int ,int ,int) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int
FUNC_18(device_t VAR_6)
{
 struct macgpio_softc *VAR_7;
        struct macgpio_devinfo *VAR_8;
        phandle_t VAR_9, VAR_10, VAR_11;
        device_t VAR_12;
 uint32_t VAR_13[2];

 VAR_7 = FUNC_8(VAR_6);
 VAR_9 = VAR_7->sc_node = FUNC_15(VAR_6);

 VAR_7->sc_gpios = FUNC_5(VAR_6, VAR_5,
     &VAR_7->sc_gpios_rid, VAR_3);




 for (VAR_10 = FUNC_1(VAR_9); VAR_10 != 0; VAR_10 = FUNC_3(VAR_10)) {
  VAR_8 = FUNC_12(sizeof(*VAR_8), VAR_0, VAR_1 | VAR_2);
  if (FUNC_14(&VAR_8->mdi_obdinfo, VAR_10) !=
      0) {
   FUNC_11(VAR_8, VAR_0);
   continue;
  }

  if (FUNC_2(VAR_10, "reg", &VAR_8->gpio_num,
      sizeof(VAR_8->gpio_num)) != sizeof(VAR_8->gpio_num)) {







   VAR_8->gpio_num = -1;
  }

  FUNC_17(&VAR_8->mdi_resources);

  if (FUNC_2(VAR_10, "interrupts", VAR_13, sizeof(VAR_13)) ==
      sizeof(VAR_13)) {
   FUNC_4(VAR_10, "interrupt-parent", &VAR_11,
       sizeof(VAR_11));
   FUNC_16(&VAR_8->mdi_resources, VAR_4,
       0, FUNC_0(VAR_11, VAR_13[0]),
       FUNC_0(VAR_11, VAR_13[0]), 1);
  }


  if (VAR_8->gpio_num > 0x50)
   VAR_8->gpio_num -= 0x50;

  VAR_12 = FUNC_7(VAR_6, ((void*)0), -1);
  if (VAR_12 == ((void*)0)) {
   FUNC_9(VAR_6, "<%s>: device_add_child failed\n",
       VAR_8->mdi_obdinfo.obd_name);
   FUNC_13(&VAR_8->mdi_obdinfo);
   FUNC_11(VAR_8, VAR_0);
   continue;
  }
  FUNC_10(VAR_12, VAR_8);
 }

 return (FUNC_6(VAR_6));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ leds; } ;
typedef TYPE_2__ vkbd_status_t ;
typedef scalar_t__ uint8_t ;
typedef int st ;
typedef int int32_t ;
struct TYPE_13__ {scalar_t__ report_ID; int usage; } ;
typedef TYPE_3__ hid_item_t ;
typedef TYPE_4__* hid_device_p ;
typedef int hid_data_t ;
typedef TYPE_5__* bthid_session_p ;
struct TYPE_15__ {int ukbd; TYPE_1__* srv; int intr; int bdaddr; } ;
struct TYPE_14__ {scalar_t__ keyboard; int desc; } ;
struct TYPE_11__ {scalar_t__ uinput; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int *) ;
 TYPE_4__* FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,TYPE_3__*) ;
 int VAR_6 ;
 int FUNC_7 (scalar_t__*,TYPE_3__*,int) ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 (TYPE_2__*,scalar_t__*,int) ;
 int FUNC_10 (int ,char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_11 (int ,scalar_t__,scalar_t__) ;
 int FUNC_12 (int ,scalar_t__*,int) ;

int32_t
FUNC_13(bthid_session_p VAR_7, uint8_t *VAR_8, int32_t VAR_9)
{
 vkbd_status_t VAR_10;
 uint8_t VAR_11, VAR_12;
 hid_device_p VAR_13;
 hid_data_t VAR_14;
 hid_item_t VAR_15;
 uint8_t VAR_16 = 0;

 FUNC_2(VAR_7 != ((void*)0));
 FUNC_2(VAR_9 == sizeof(vkbd_status_t));

 FUNC_9(&VAR_10, VAR_8, sizeof(VAR_10));
 VAR_11 = 0;
 VAR_12 = VAR_5;

 VAR_13 = FUNC_4(&VAR_7->bdaddr);
 FUNC_2(VAR_13 != ((void*)0));

 VAR_8[0] = 0xa2;
 VAR_8[1] = 0x00;
 VAR_8[2] = 0x00;

 for (VAR_14 = FUNC_8(VAR_13->desc, 1 << VAR_6, -1);
      FUNC_6(VAR_14, &VAR_15) > 0; ) {
  if (FUNC_0(VAR_15.usage) == VAR_0) {
   VAR_11++;

   if (VAR_12 == VAR_5)
    VAR_12 = VAR_15.report_ID;
   else if (VAR_15.report_ID != VAR_12)
    FUNC_10(VAR_4, "Output HID report IDs " "for %s do not match: %d vs. %d. " "Please report",


     FUNC_3(&VAR_7->bdaddr, ((void*)0)),
     VAR_15.report_ID, VAR_12);

   switch(FUNC_1(VAR_15.usage)) {
   case 0x01:
    if (VAR_10.leds & VAR_2)
     FUNC_7(&VAR_8[1], &VAR_15, 1);
    VAR_16 |= VAR_2;
    break;

   case 0x02:
    if (VAR_10.leds & VAR_1)
     FUNC_7(&VAR_8[1], &VAR_15, 1);
    VAR_16 |= VAR_1;
    break;

   case 0x03:
    if (VAR_10.leds & VAR_3)
     FUNC_7(&VAR_8[1], &VAR_15, 1);
    VAR_16 |= VAR_3;
    break;


   }
  }
 }
 FUNC_5(VAR_14);

 if (VAR_12 != VAR_5) {
  VAR_8[2] = VAR_8[1];
  VAR_8[1] = VAR_12;
 }

 if (VAR_11)
  FUNC_12(VAR_7->intr, VAR_8, (VAR_12 != VAR_5) ? 3 : 2);

 if (VAR_11 && VAR_7->srv->uinput && VAR_13->keyboard)
  FUNC_11(VAR_7->ukbd, VAR_10.leds, VAR_16);

 return (0);
}

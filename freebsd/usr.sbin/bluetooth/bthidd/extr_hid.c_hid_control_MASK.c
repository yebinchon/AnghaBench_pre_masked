
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ int32_t ;
typedef TYPE_1__* bthid_session_p ;
struct TYPE_4__ {int bdaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,char*,int,...) ;

int32_t
FUNC_4(bthid_session_p VAR_3, uint8_t *VAR_4, int32_t VAR_5)
{
 FUNC_0(VAR_3 != ((void*)0));
 FUNC_0(VAR_4 != ((void*)0));
 FUNC_0(VAR_5 > 0);

 switch (VAR_4[0] >> 4) {
        case 0:
  if (VAR_4[0] & 0xf)
   FUNC_3(VAR_0, "Got handshake message with error " "response 0x%x from %s",

    VAR_4[0], FUNC_1(&VAR_3->bdaddr, ((void*)0)));
  break;

 case 1:
  switch (VAR_4[0] & 0xf) {
  case 0:
   break;

  case 1:
  case 2:
   FUNC_3(VAR_2, "Device %s requested %s reset",
    FUNC_1(&VAR_3->bdaddr, ((void*)0)),
    ((VAR_4[0] & 0xf) == 1)? "hard" : "soft");
   break;

  case 3:
   FUNC_3(VAR_1, "Device %s requested Suspend",
    FUNC_1(&VAR_3->bdaddr, ((void*)0)));
   break;

  case 4:
   FUNC_3(VAR_1, "Device %s requested Exit Suspend",
    FUNC_1(&VAR_3->bdaddr, ((void*)0)));
   break;

  case 5:
   FUNC_3(VAR_1, "Device %s unplugged virtual cable",
    FUNC_1(&VAR_3->bdaddr, ((void*)0)));
   FUNC_2(VAR_3);
   break;

  default:
   FUNC_3(VAR_2, "Device %s sent unknown " "HID_Control message 0x%x",

    FUNC_1(&VAR_3->bdaddr, ((void*)0)), VAR_4[0]);
   break;
  }
  break;

 default:
  FUNC_3(VAR_2, "Got unexpected message 0x%x on Control " "channel from %s", VAR_4[0], FUNC_1(&VAR_3->bdaddr, ((void*)0)));

  break;
 }

 return (0);
}

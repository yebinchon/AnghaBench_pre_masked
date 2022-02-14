
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct apple_state {int dummy; } ;
typedef scalar_t__ hid_device_p ;
typedef TYPE_1__* bthid_session_p ;
struct TYPE_3__ {int ctrl; int * ctx; int bdaddr; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int * FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,int*,int) ;

void
FUNC_4(bthid_session_p VAR_0)
{
 hid_device_p VAR_1 = FUNC_2(&VAR_0->bdaddr);

 if (VAR_1 && FUNC_0(VAR_1)) {

  static uint8_t VAR_2[] = {0x53, 0xd7, 0x01};

  if ((VAR_0->ctx = FUNC_1(1, sizeof(struct apple_state))) == ((void*)0))
   return;
  FUNC_3(VAR_0->ctrl, VAR_2, 3);
 }
}

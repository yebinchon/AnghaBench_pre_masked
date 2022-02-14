
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int socklen_t ;
typedef scalar_t__ int32_t ;
typedef TYPE_1__* hid_device_p ;
typedef int error ;
typedef TYPE_2__* bthid_session_p ;
typedef TYPE_3__* bthid_server_p ;
struct TYPE_12__ {scalar_t__ maxfd; int rfdset; int wfdset; } ;
struct TYPE_11__ {int state; scalar_t__ ctrl; int intr; int bdaddr; } ;
struct TYPE_10__ {int new_device; int interrupt_psm; } ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (scalar_t__,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_2 (int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (scalar_t__,int ,int ,scalar_t__*,int*) ;
 TYPE_2__* FUNC_7 (TYPE_3__*,scalar_t__) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ,char*,int ,int ,scalar_t__) ;
 int FUNC_12 () ;

int32_t
FUNC_13(bthid_server_p VAR_6, int32_t VAR_7)
{
 bthid_session_p VAR_8;
 hid_device_p VAR_9;
 int32_t VAR_10;
 socklen_t VAR_11;

 FUNC_2(VAR_6 != ((void*)0));
 FUNC_2(VAR_7 >= 0);

 VAR_8 = FUNC_7(VAR_6, VAR_7);
 FUNC_2(VAR_8 != ((void*)0));

 VAR_9 = FUNC_5(&VAR_8->bdaddr);
 FUNC_2(VAR_9 != ((void*)0));

 VAR_10 = 0;
 VAR_11 = sizeof(VAR_10);
 if (FUNC_6(VAR_7, VAR_2, VAR_3, &VAR_10, &VAR_11) < 0) {
  FUNC_11(VAR_0, "Could not get socket error for %s. %s (%d)",
   FUNC_3(&VAR_8->bdaddr, ((void*)0)), FUNC_10(VAR_5), VAR_5);
  FUNC_8(VAR_8);
  VAR_4 = 0;

  return (-1);
 }

 if (VAR_10 != 0) {
  FUNC_11(VAR_0, "Could not connect to %s. %s (%d)",
   FUNC_3(&VAR_8->bdaddr, ((void*)0)), FUNC_10(VAR_10), VAR_10);
  FUNC_8(VAR_8);
  VAR_4 = 0;

  return (0);
 }

 switch (VAR_8->state) {
 case 129:
  FUNC_2(VAR_8->ctrl == VAR_7);
  FUNC_2(VAR_8->intr == -1);


  VAR_8->intr = FUNC_4(&VAR_8->bdaddr, VAR_9->interrupt_psm);
  if (VAR_8->intr < 0) {
   FUNC_11(VAR_0, "Could not open interrupt channel " "to %s. %s (%d)", FUNC_3(&VAR_8->bdaddr, ((void*)0)),

    FUNC_10(VAR_5), VAR_5);
   FUNC_8(VAR_8);
   VAR_4 = 0;

   return (-1);
  }

  VAR_8->state = 128;

  FUNC_1(VAR_8->intr, &VAR_6->wfdset);
  if (VAR_8->intr > VAR_6->maxfd)
   VAR_6->maxfd = VAR_8->intr;

  VAR_9->new_device = 0;
  FUNC_12();
  break;

 case 128:
  FUNC_2(VAR_8->ctrl != -1);
  FUNC_2(VAR_8->intr == VAR_7);

  VAR_8->state = VAR_1;
  VAR_4 = 0;


  if (FUNC_9(VAR_8) < 0) {
   FUNC_8(VAR_8);
   return (-1);
  }
  break;

 default:
  FUNC_2(0);
  break;
 }


 FUNC_0(VAR_7, &VAR_6->wfdset);
 FUNC_1(VAR_7, &VAR_6->rfdset);

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbusb_softc {int dummy; } ;
struct xenbus_device_ivars {int xd_state; int xd_flags; int xd_lock; int xd_node; } ;
typedef enum xenbus_state { ____Placeholder_xenbus_state } xenbus_state ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct xenbus_device_ivars* FUNC_0 (int ) ;
 struct xenbusb_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int ,int,char*) ;
 int FUNC_6 (struct xenbusb_softc*) ;
 int FUNC_7 (int ,int ,char*,char*,int) ;
 int FUNC_8 (int ,int ,char*,int *,char*,int*) ;

int
FUNC_9(device_t VAR_8, device_t VAR_9, int VAR_10, uintptr_t VAR_11)
{
 struct xenbus_device_ivars *VAR_12 = FUNC_0(VAR_9);
 enum xenbus_state VAR_13;
 int VAR_14;

 switch (VAR_10) {
 case 129:
 {
  int VAR_15;

  VAR_13 = (enum xenbus_state)VAR_11;
  FUNC_2(&VAR_12->xd_lock);
  if (VAR_12->xd_state == VAR_13) {
   VAR_15 = 0;
   goto out;
  }

  VAR_15 = FUNC_8(VAR_4, VAR_12->xd_node, "state",
      ((void*)0), "%d", &VAR_14);
  if (VAR_15)
   goto out;

  do {
   VAR_15 = FUNC_7(VAR_4, VAR_12->xd_node, "state",
       "%d", VAR_13);
  } while (VAR_15 == VAR_0);
  if (VAR_15) {





   if (VAR_13 != VAR_6)
    FUNC_5(VAR_8, VAR_15,
       "writing new state");
   goto out;
  }
  VAR_12->xd_state = VAR_13;

  if ((VAR_12->xd_flags & VAR_3) != 0
   && (VAR_13 == VAR_5
    || VAR_13 == VAR_7)) {
   struct xenbusb_softc *VAR_16;

   VAR_12->xd_flags &= ~VAR_3;
   VAR_16 = FUNC_1(VAR_8);
   FUNC_6(VAR_16);
  }

  FUNC_4(&VAR_12->xd_state);
 out:
  FUNC_3(&VAR_12->xd_lock);
  return (VAR_15);
 }

 case 132:
 case 128:
 case 131:
 case 130:



  return (VAR_1);
 }

 return (VAR_2);
}

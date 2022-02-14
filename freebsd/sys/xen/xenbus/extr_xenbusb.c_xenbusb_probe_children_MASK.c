
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbusb_softc {int dummy; } ;
struct xenbus_device_ivars {int xd_local_watch; int xd_otherend_watch; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int **,int*) ;
 struct xenbus_device_ivars* FUNC_1 (int ) ;
 struct xenbusb_softc* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct xenbusb_softc*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_4)
{
 device_t *VAR_5;
 struct xenbus_device_ivars *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 if (FUNC_0(VAR_4, &VAR_5, &VAR_8) == 0) {
  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
   if (FUNC_3(VAR_5[VAR_7]) != VAR_0) {




    FUNC_10(VAR_4, VAR_5[VAR_7]);
    continue;
   }

   VAR_9 = FUNC_4(VAR_5[VAR_7]);
   if (VAR_9 == VAR_1) {
    struct xenbusb_softc *VAR_10;
    FUNC_7(VAR_4, VAR_5[VAR_7]);






    VAR_10 = FUNC_2(VAR_4);
    FUNC_9(VAR_10);

    continue;
   } else if (VAR_9) {





    FUNC_6(VAR_5[VAR_7], VAR_3);
    FUNC_7(VAR_4, VAR_5[VAR_7]);

    continue;
   }





   FUNC_8(VAR_5[VAR_7]);






   VAR_6 = FUNC_1(VAR_5[VAR_7]);
   FUNC_11(&VAR_6->xd_otherend_watch);
   FUNC_11(&VAR_6->xd_local_watch);
  }
  FUNC_5(VAR_5, VAR_2);
 }

 return (0);
}

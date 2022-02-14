
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbusb_softc {int xbs_flags; int xbs_lock; int xbs_attach_ch; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct xenbusb_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 struct xenbusb_softc *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1(VAR_1);
 VAR_3 = FUNC_4(VAR_1, "backend", 2);






 FUNC_2(&VAR_2->xbs_lock);
 if ((VAR_2->xbs_flags & VAR_0) != 0) {
  VAR_2->xbs_flags &= ~VAR_0;
  FUNC_3(&VAR_2->xbs_lock);
  FUNC_0(&VAR_2->xbs_attach_ch);
 } else {
  FUNC_3(&VAR_2->xbs_lock);
 }

 return (VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbusb_softc {scalar_t__ xbs_connecting_children; int xbs_flags; int xbs_lock; int xbs_attach_ch; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct xenbusb_softc *VAR_1)
{
 FUNC_2(&VAR_1->xbs_lock);
 FUNC_0(VAR_1->xbs_connecting_children > 0,
  ("Connecting device count error\n"));
 VAR_1->xbs_connecting_children--;
 if (VAR_1->xbs_connecting_children == 0
  && (VAR_1->xbs_flags & VAR_0) != 0) {
  VAR_1->xbs_flags &= ~VAR_0;
  FUNC_3(&VAR_1->xbs_lock);
  FUNC_1(&VAR_1->xbs_attach_ch);
 } else {
  FUNC_3(&VAR_1->xbs_lock);
 }
}

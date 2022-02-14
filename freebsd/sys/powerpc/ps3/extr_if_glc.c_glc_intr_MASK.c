
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct glc_softc {int sc_mtx; TYPE_1__* sc_ifp; int sc_dev; int sc_bus; int sc_interrupt_status; } ;
struct TYPE_2__ {int if_link_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct glc_softc*) ;
 int FUNC_2 (struct glc_softc*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,int*,int*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(void *VAR_10)
{
 struct glc_softc *VAR_11 = VAR_10;
 uint64_t VAR_12, VAR_13, VAR_14;

 FUNC_5(&VAR_11->sc_mtx);

 VAR_12 = FUNC_0(&VAR_11->sc_interrupt_status);

 if (VAR_12 == 0) {
  FUNC_6(&VAR_11->sc_mtx);
  return;
 }

 if (VAR_12 & (VAR_2 | VAR_3))
  FUNC_1(VAR_11);

 if (VAR_12 & (VAR_4 | VAR_5))
  FUNC_2(VAR_11);

 if (VAR_12 & VAR_1) {
  FUNC_4(VAR_11->sc_bus, VAR_11->sc_dev, VAR_0,
      VAR_7, 0, 0, &VAR_13, &VAR_14);

  VAR_13 = (VAR_13 & VAR_6) ?
      VAR_9 : VAR_8;
  if (VAR_13 != VAR_11->sc_ifp->if_link_state)
   FUNC_3(VAR_11->sc_ifp, VAR_13);
 }

 FUNC_6(&VAR_11->sc_mtx);
}

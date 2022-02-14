
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int dummy; } ;
struct opal_nvram_softc {int sc_size; } ;
struct cdev {struct opal_nvram_softc* si_drv1; } ;
typedef int off_t ;
typedef scalar_t__ caddr_t ;



 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct cdev *VAR_1, u_long VAR_2, caddr_t VAR_3, int VAR_4,
    struct thread *VAR_5)
{
 struct opal_nvram_softc *VAR_6 = VAR_1->si_drv1;

 switch (VAR_2) {
 case 128:
  *(off_t *)VAR_3 = VAR_6->sc_size;
  return (0);
 }
 return (VAR_0);
}

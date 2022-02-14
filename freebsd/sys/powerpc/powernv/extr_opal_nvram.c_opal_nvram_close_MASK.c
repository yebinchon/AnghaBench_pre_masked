
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct opal_nvram_softc {scalar_t__ sc_isopen; } ;
struct cdev {struct opal_nvram_softc* si_drv1; } ;



__attribute__((used)) static int
FUNC_0(struct cdev *VAR_0, int VAR_1, int VAR_2, struct thread *VAR_3)
{
 struct opal_nvram_softc *VAR_4 = VAR_0->si_drv1;

 VAR_4->sc_isopen = 0;
 return (0);
}

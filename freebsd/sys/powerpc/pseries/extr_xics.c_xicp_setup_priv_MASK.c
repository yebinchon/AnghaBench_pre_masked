
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct xicp_softc {scalar_t__ nintvecs; int sc_mtx; int * intvecs; } ;
typedef void xicp_intvec ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static __inline struct xicp_intvec *
FUNC_4(struct xicp_softc *VAR_0, u_int VAR_1, void **VAR_2)
{
 if (*VAR_2 == ((void*)0)) {
  FUNC_0(VAR_0->nintvecs + 1 < FUNC_3(VAR_0->intvecs),
   ("Too many XICP interrupts"));
  FUNC_1(&VAR_0->sc_mtx);
  *VAR_2 = &VAR_0->intvecs[VAR_0->nintvecs++];
  FUNC_2(&VAR_0->sc_mtx);
 }

 return (*VAR_2);
}

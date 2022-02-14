
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct cuda_softc {scalar_t__ sc_state; int sc_waiting; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cuda_softc*) ;
 struct cuda_softc* FUNC_2 (int ) ;

__attribute__((used)) static u_int
FUNC_3(device_t VAR_1)
{
 struct cuda_softc *VAR_2 = FUNC_2(VAR_1);

 if (VAR_2->sc_state == VAR_0 && !FUNC_1(VAR_2) &&
     !VAR_2->sc_waiting)
  return (0);

 FUNC_0(VAR_1);
 return (0);
}

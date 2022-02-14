
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct atpic_softc {size_t* sc_vector; } ;
typedef int device_t ;


 int FUNC_0 (int ,size_t) ;
 struct atpic_softc* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0, u_int VAR_1, u_int VAR_2)
{
 struct atpic_softc *VAR_3;

 VAR_3 = FUNC_1(VAR_0);
 VAR_3->sc_vector[VAR_1] = VAR_2;
 FUNC_0(VAR_0, VAR_1);
}

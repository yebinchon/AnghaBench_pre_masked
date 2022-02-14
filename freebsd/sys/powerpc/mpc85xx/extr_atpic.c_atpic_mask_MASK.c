
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct atpic_softc {int* sc_mask; } ;
typedef int device_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct atpic_softc*,size_t,int,int) ;
 struct atpic_softc* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_2, u_int VAR_3)
{
 struct atpic_softc *VAR_4;

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_3 > 7) {
  VAR_4->sc_mask[VAR_1] |= 1 << (VAR_3 - 8);
  FUNC_0(VAR_4, VAR_1, 1, VAR_4->sc_mask[VAR_1]);
 } else {
  VAR_4->sc_mask[VAR_0] |= 1 << VAR_3;
  FUNC_0(VAR_4, VAR_0, 1, VAR_4->sc_mask[VAR_0]);
 }
}

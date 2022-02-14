
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int u_int32_t ;
typedef int u_int ;
struct cpcht_softc {int sc_populated_slots; scalar_t__ sc_data; } ;
typedef int device_t ;


 struct cpcht_softc* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_0, u_int VAR_1, u_int VAR_2, u_int VAR_3,
    u_int VAR_4, u_int32_t VAR_5, int VAR_6)
{
 struct cpcht_softc *VAR_7;
 vm_offset_t VAR_8;

 VAR_7 = FUNC_0(VAR_0);
 VAR_8 = VAR_7->sc_data +
  (((((VAR_2 & 0x1f) << 3) | (VAR_3 & 0x07)) << 8) | VAR_4);

 if (VAR_1 == 0 && (!(VAR_7->sc_populated_slots & (1 << VAR_2)) || VAR_3 > 0))
  return;

 if (VAR_1 > 0)
  VAR_8 += 0x01000000UL + (VAR_1 << 16);

 switch (VAR_6) {
 case 1:
  FUNC_3(VAR_8, VAR_5);
  break;
 case 2:
  FUNC_1(VAR_8, VAR_5);
  break;
 case 4:
  FUNC_2(VAR_8, VAR_5);
  break;
 }
}

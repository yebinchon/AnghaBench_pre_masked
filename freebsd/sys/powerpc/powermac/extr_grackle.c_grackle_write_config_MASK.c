
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int u_int32_t ;
typedef int u_int ;
struct grackle_softc {scalar_t__ sc_data; } ;
typedef int device_t ;


 struct grackle_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct grackle_softc*) ;
 scalar_t__ FUNC_2 (struct grackle_softc*,int,int,int,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_9(device_t VAR_0, u_int VAR_1, u_int VAR_2, u_int VAR_3,
    u_int VAR_4, u_int32_t VAR_5, int VAR_6)
{
 struct grackle_softc *VAR_7;
 vm_offset_t VAR_8;

 VAR_7 = FUNC_0(VAR_0);
 VAR_8 = VAR_7->sc_data + (VAR_4 & 0x03);

 if (FUNC_2(VAR_7, VAR_1, VAR_2, VAR_3, VAR_4)) {
  switch (VAR_6) {
  case 1:
   FUNC_8(VAR_8, VAR_5);
   (void)FUNC_5(VAR_8);
   break;
  case 2:
   FUNC_6(VAR_8, VAR_5);
   (void)FUNC_3(VAR_8);
   break;
  case 4:
   FUNC_7(VAR_8, VAR_5);
   (void)FUNC_4(VAR_8);
   break;
  }
 }
 FUNC_1(VAR_7);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int u_int32_t ;
typedef int u_int ;
struct grackle_softc {scalar_t__ sc_data; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (void*,int) ;
 struct grackle_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct grackle_softc*) ;
 scalar_t__ FUNC_3 (struct grackle_softc*,int,int,int,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static u_int32_t
FUNC_7(device_t VAR_0, u_int VAR_1, u_int VAR_2, u_int VAR_3, u_int VAR_4,
    int VAR_5)
{
 struct grackle_softc *VAR_6;
 vm_offset_t VAR_7;
 u_int32_t VAR_8 = 0xffffffff;

 VAR_6 = FUNC_1(VAR_0);
 VAR_7 = VAR_6->sc_data + (VAR_4 & 0x03);

 if (FUNC_3(VAR_6, VAR_1, VAR_2, VAR_3, VAR_4) != 0) {






  if (VAR_1 > 0) {
    if (FUNC_0((void *)VAR_6->sc_data, 4)) {
     return (VAR_8);
    }
  }

  switch (VAR_5) {
  case 1:
   VAR_8 = (FUNC_6(VAR_7));
   break;
  case 2:
   VAR_8 = (FUNC_4(VAR_7));
   break;
  case 4:
   VAR_8 = (FUNC_5(VAR_7));
   break;
  }
 }
 FUNC_2(VAR_6);

 return (VAR_8);
}

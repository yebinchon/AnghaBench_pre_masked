
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int u_int32_t ;
typedef int u_int ;
struct uninorth_softc {int sc_cfg_mtx; scalar_t__ sc_data; } ;
typedef int device_t ;


 struct uninorth_softc* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (struct uninorth_softc*,int,int,int,int) ;

__attribute__((used)) static void
FUNC_7(device_t VAR_0, u_int VAR_1, u_int VAR_2, u_int VAR_3,
    u_int VAR_4, u_int32_t VAR_5, int VAR_6)
{
 struct uninorth_softc *VAR_7;
 vm_offset_t VAR_8;

 VAR_7 = FUNC_0(VAR_0);
 VAR_8 = VAR_7->sc_data + (VAR_4 & 0x07);

 FUNC_1(&VAR_7->sc_cfg_mtx);
 if (FUNC_6(VAR_7, VAR_1, VAR_2, VAR_3, VAR_4)) {
  switch (VAR_6) {
  case 1:
   FUNC_5(VAR_8, VAR_5);
   break;
  case 2:
   FUNC_3(VAR_8, VAR_5);
   break;
  case 4:
   FUNC_4(VAR_8, VAR_5);
   break;
  }
 }
 FUNC_2(&VAR_7->sc_cfg_mtx);
}

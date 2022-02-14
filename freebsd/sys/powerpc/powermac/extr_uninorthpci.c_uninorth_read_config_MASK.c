
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
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct uninorth_softc*,int,int,int,int) ;

__attribute__((used)) static u_int32_t
FUNC_7(device_t VAR_0, u_int VAR_1, u_int VAR_2, u_int VAR_3, u_int VAR_4,
    int VAR_5)
{
 struct uninorth_softc *VAR_6;
 vm_offset_t VAR_7;
 u_int32_t VAR_8;

 VAR_6 = FUNC_0(VAR_0);
 VAR_7 = VAR_6->sc_data + (VAR_4 & 0x07);
 VAR_8 = 0xffffffff;

 FUNC_4(&VAR_6->sc_cfg_mtx);
 if (FUNC_6(VAR_6, VAR_1, VAR_2, VAR_3, VAR_4) != 0) {
  switch (VAR_5) {
  case 1:
   VAR_8 = FUNC_3(VAR_7);
   break;
  case 2:
   VAR_8 = FUNC_1(VAR_7);
   break;
  case 4:
   VAR_8 = FUNC_2(VAR_7);
   break;
  }
 }
 FUNC_5(&VAR_6->sc_cfg_mtx);

 return (VAR_8);
}

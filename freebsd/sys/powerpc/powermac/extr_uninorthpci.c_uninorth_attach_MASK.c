
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* vm_offset_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct uninorth_softc {int sc_ver; int sc_skipslot; int sc_cfg_mtx; void* sc_data; void* sc_addr; } ;
typedef int reg ;
typedef int phandle_t ;
typedef int device_t ;
typedef int cell_t ;
typedef int acells ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int*,int) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 char* FUNC_2 (int ) ;
 struct uninorth_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*,int *,int ) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int,int ) ;
 scalar_t__ FUNC_10 (char const*,int,char*,int*) ;
 scalar_t__ FUNC_11 (char const*,char*) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_3)
{
 struct uninorth_softc *VAR_4;
 const char *VAR_5;
 const char *VAR_6;
 phandle_t VAR_7;
 uint32_t VAR_8[3];
 uint64_t VAR_9;
 cell_t VAR_10;
 int VAR_11;

 VAR_7 = FUNC_7(VAR_3);
 VAR_4 = FUNC_3(VAR_3);
 VAR_6 = FUNC_2(VAR_3);
 VAR_11 = FUNC_4(VAR_3);

 if (FUNC_0(VAR_7, "reg", VAR_8, sizeof(VAR_8)) < 8)
  return (VAR_0);

 VAR_4->sc_ver = 0;
 VAR_5 = FUNC_6(VAR_3);
 if (FUNC_11(VAR_5, "u3-agp") == 0)
  VAR_4->sc_ver = 3;
 if (FUNC_11(VAR_5, "u4-pcie") == 0)
  VAR_4->sc_ver = 4;

 VAR_10 = 1;
 FUNC_0(FUNC_1(VAR_7), "#address-cells", &VAR_10, sizeof(VAR_10));

 VAR_9 = VAR_8[0];
 if (VAR_10 == 2) {
  VAR_9 <<= 32;
  VAR_9 |= VAR_8[1];
 }

 VAR_4->sc_addr = (vm_offset_t)FUNC_9(VAR_9 + 0x800000, VAR_2);
 VAR_4->sc_data = (vm_offset_t)FUNC_9(VAR_9 + 0xc00000, VAR_2);

 if (FUNC_10(VAR_6, VAR_11, "skipslot", &VAR_4->sc_skipslot) != 0)
  VAR_4->sc_skipslot = -1;

 FUNC_5(&VAR_4->sc_cfg_mtx, "uninorth pcicfg", ((void*)0), VAR_1);

 return (FUNC_8(VAR_3));
}

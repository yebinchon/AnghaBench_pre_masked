
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int FUNC_0 (int*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int*,char*,int) ;

__attribute__((used)) static bool FUNC_4(uint8_t *VAR_0, size_t VAR_1)
{
 uint16_t VAR_2, VAR_3;

 if (!VAR_0 || VAR_1 < 0x49) {
  FUNC_2("vbios mem is null or mem size is wrong\n");
  return 0;
 }

 if (!FUNC_0(VAR_0)) {
  FUNC_2("BIOS signature incorrect %x %x\n", VAR_0[0], VAR_0[1]);
  return 0;
 }

 VAR_3 = VAR_0[0x48] | (VAR_0[0x49] << 8);
 if (!VAR_3) {
  FUNC_2("Can't locate bios header\n");
  return 0;
 }

 VAR_2 = VAR_3 + 4;
 if (VAR_1 < VAR_2) {
  FUNC_2("BIOS header is broken\n");
  return 0;
 }

 if (!FUNC_3(VAR_0 + VAR_2, "ATOM", 4) ||
     !FUNC_3(VAR_0 + VAR_2, "MOTA", 4)) {
  FUNC_1("ATOMBIOS detected\n");
  return 1;
 }

 return 0;
}

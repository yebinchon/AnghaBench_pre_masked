
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct radeon_device {int* bios; int bios_header_start; int is_atom_bios; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (int*,char*,int) ;
 int FUNC_8 (char*,int,int) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*) ;
 int FUNC_11 (struct radeon_device*) ;
 int FUNC_12 (struct radeon_device*) ;
 int FUNC_13 (struct radeon_device*) ;

bool FUNC_14(struct radeon_device *VAR_0)
{
 bool VAR_1;
 uint16_t VAR_2;

 VAR_1 = FUNC_10(VAR_0);
 if (VAR_1 == 0)
  VAR_1 = FUNC_9(VAR_0);
 if (VAR_1 == 0)
  VAR_1 = FUNC_5(VAR_0);
 if (VAR_1 == 0)
  VAR_1 = FUNC_11(VAR_0);
 if (VAR_1 == 0)
  VAR_1 = FUNC_12(VAR_0);
 if (VAR_1 == 0)
  VAR_1 = FUNC_13(VAR_0);
 if (VAR_1 == 0 || VAR_0->bios == ((void*)0)) {
  FUNC_1("Unable to locate a BIOS ROM\n");
  VAR_0->bios = ((void*)0);
  return 0;
 }
 if (VAR_0->bios[0] != 0x55 || VAR_0->bios[1] != 0xaa) {
  FUNC_8("BIOS signature incorrect %x %x\n", VAR_0->bios[0], VAR_0->bios[1]);
  goto free_bios;
 }

 VAR_2 = FUNC_3(0x18);
 if (FUNC_4(VAR_2 + 0x14) != 0x0) {
  FUNC_2("Not an x86 BIOS ROM, not using.\n");
  goto free_bios;
 }

 VAR_0->bios_header_start = FUNC_3(0x48);
 if (!VAR_0->bios_header_start) {
  goto free_bios;
 }
 VAR_2 = VAR_0->bios_header_start + 4;
 if (!FUNC_7(VAR_0->bios + VAR_2, "ATOM", 4) ||
     !FUNC_7(VAR_0->bios + VAR_2, "MOTA", 4)) {
  VAR_0->is_atom_bios = 1;
 } else {
  VAR_0->is_atom_bios = 0;
 }

 FUNC_0("%sBIOS detected\n", VAR_0->is_atom_bios ? "ATOM" : "COM");
 return 1;
free_bios:
 FUNC_6(VAR_0->bios);
 VAR_0->bios = ((void*)0);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int reg_sram ;
typedef int reg_flash ;
typedef int fpga ;


 int FUNC_0 (char*) ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (void*,char*,...) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (void*,char*,int*,int) ;

__attribute__((used)) static void FUNC_5(void)
{
 void *VAR_0, *VAR_1;
 u32 VAR_2[3] = {0x0, 0x0, 0x80000};
 u32 VAR_3[3] = {0x0, 0x0, 0x80000};
 u8 *VAR_4;
 u8 VAR_5 = 0x0;

 VAR_0 = FUNC_1("/plb/ebc/fpga");
 if (!VAR_0)
  FUNC_0("Couldn't locate FPGA node\n\r");

 if (FUNC_2(VAR_0, "virtual-reg", &VAR_4, sizeof(VAR_4)) != sizeof(VAR_4))
  FUNC_0("no virtual-reg property\n\r");

 VAR_5 = FUNC_3(VAR_4);

 VAR_0 = FUNC_1("/plb/ebc/flash");
 if (!VAR_0)
  FUNC_0("Couldn't locate flash node\n\r");

 if (FUNC_2(VAR_0, "reg", VAR_2, sizeof(VAR_2)) != sizeof(VAR_2))
  FUNC_0("flash reg property has unexpected size\n\r");

 VAR_1 = FUNC_1("/plb/ebc/sram");
 if (!VAR_1)
  FUNC_0("Couldn't locate sram node\n\r");

 if (FUNC_2(VAR_1, "reg", VAR_3, sizeof(VAR_3)) != sizeof(VAR_3))
  FUNC_0("sram reg property has unexpected size\n\r");

 if (VAR_5 & 0x1) {
  VAR_2[1] ^= 0x80000;
  VAR_3[1] ^= 0x80000;
 }

 FUNC_4(VAR_0, "reg", VAR_2, sizeof(VAR_2));
 FUNC_4(VAR_1, "reg", VAR_3, sizeof(VAR_3));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int reg ;
typedef int fpga ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (void*,char*,...) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (void*,char*,int*,int) ;

__attribute__((used)) static void FUNC_5(void)
{
 void *VAR_3;
 u32 VAR_4[3] = {0x0, 0x0, 0x80000};
 u8 *VAR_5;
 u8 VAR_6 = 0x0;

 VAR_3 = FUNC_1(VAR_1);
 if (!VAR_3)
  FUNC_0("Couldn't locate FPGA node %s\n\r", VAR_1);

 if (FUNC_2(VAR_3, "virtual-reg", &VAR_5, sizeof(VAR_5)) != sizeof(VAR_5))
  FUNC_0("%s has missing or invalid virtual-reg property\n\r",
        VAR_1);

 VAR_6 = FUNC_3(VAR_5);

 VAR_3 = FUNC_1(VAR_2);
 if (!VAR_3)
  FUNC_0("Couldn't locate small flash node %s\n\r",
        VAR_2);

 if (FUNC_2(VAR_3, "reg", VAR_4, sizeof(VAR_4)) != sizeof(VAR_4))
  FUNC_0("%s has reg property of unexpected size\n\r",
        VAR_2);


 if (VAR_6 & VAR_0)
  VAR_4[1] ^= 0x80000;

 FUNC_4(VAR_3, "reg", VAR_4, sizeof(VAR_4));
}

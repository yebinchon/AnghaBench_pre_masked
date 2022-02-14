
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static void FUNC_1(u32 VAR_16, bool VAR_17)
{
 FUNC_0("PSR exit events: 0x%x\n", VAR_16);
 if (VAR_16 & VAR_9)
  FUNC_0("\tPSR2 watchdog timer expired\n");
 if ((VAR_16 & VAR_8) && VAR_17)
  FUNC_0("\tPSR2 disabled\n");
 if (VAR_16 & VAR_13)
  FUNC_0("\tSU dirty FIFO underrun\n");
 if (VAR_16 & VAR_12)
  FUNC_0("\tSU CRC FIFO underrun\n");
 if (VAR_16 & VAR_1)
  FUNC_0("\tGraphics reset\n");
 if (VAR_16 & VAR_6)
  FUNC_0("\tPCH interrupt\n");
 if (VAR_16 & VAR_5)
  FUNC_0("\tMemory up\n");
 if (VAR_16 & VAR_0)
  FUNC_0("\tFront buffer modification\n");
 if (VAR_16 & VAR_15)
  FUNC_0("\tPSR watchdog timer expired\n");
 if (VAR_16 & VAR_7)
  FUNC_0("\tPIPE registers updated\n");
 if (VAR_16 & VAR_11)
  FUNC_0("\tRegister updated\n");
 if (VAR_16 & VAR_2)
  FUNC_0("\tHDCP enabled\n");
 if (VAR_16 & VAR_3)
  FUNC_0("\tKVMR session enabled\n");
 if (VAR_16 & VAR_14)
  FUNC_0("\tVBI enabled\n");
 if (VAR_16 & VAR_4)
  FUNC_0("\tLPSP mode exited\n");
 if ((VAR_16 & VAR_10) && !VAR_17)
  FUNC_0("\tPSR disabled\n");
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *FUNC_0(unsigned char VAR_0)
{
 switch (VAR_0) {
 case 138: return("IDLE");
 case 128: return("XACTION");
 case 130: return("WR_BYTES");
 case 129: return("WR_CONSUME");
 case 135: return("RD_WAIT");
 case 139: return("CLEAR_B2H");
 case 136: return("RD_BYTES");
 case 134: return("RESET1");
 case 133: return("RESET2");
 case 132: return("RESET3");
 case 131: return("RESTART");
 case 137: return("LONG_BUSY");
 }
 return("BAD STATE");
}

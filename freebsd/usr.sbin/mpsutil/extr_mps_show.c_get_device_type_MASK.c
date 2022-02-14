
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static char *
FUNC_0(uint32_t VAR_0)
{

 if (VAR_0 & 0x4000)
  return ("SEP Target    ");
 if (VAR_0 & 0x2000)
  return ("ATAPI Target  ");
 if (VAR_0 & 0x400)
  return ("SAS Target    ");
 if (VAR_0 & 0x200)
  return ("STP Target    ");
 if (VAR_0 & 0x100)
  return ("SMP Target    ");
 if (VAR_0 & 0x80)
  return ("SATA Target   ");
 if (VAR_0 & 0x70)
  return ("SAS Initiator ");
 if (VAR_0 & 0x8)
  return ("SATA Initiator");
 if ((VAR_0 & 0x7) == 0)
  return ("No Device     ");
 return ("Unknown Device");
}

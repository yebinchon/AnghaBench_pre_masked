
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;

__attribute__((used)) static const char *FUNC_0(unsigned int VAR_10)
{
 if (VAR_10 & VAR_2)
  return "host bus error";
 if (VAR_10 & VAR_0)
  return "ATA bus error";
 if (VAR_10 & VAR_9)
  return "timeout";
 if (VAR_10 & VAR_3)
  return "HSM violation";
 if (VAR_10 & VAR_8)
  return "internal error";
 if (VAR_10 & VAR_5)
  return "media error";
 if (VAR_10 & VAR_4)
  return "invalid argument";
 if (VAR_10 & VAR_1)
  return "device error";
 if (VAR_10 & VAR_6)
  return "NCQ error";
 if (VAR_10 & VAR_7)
  return "Polling detection error";
 return "unknown error";
}

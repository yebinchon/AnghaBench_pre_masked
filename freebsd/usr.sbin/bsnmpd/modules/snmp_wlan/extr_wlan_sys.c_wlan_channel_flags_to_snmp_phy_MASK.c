
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef enum WlanIfPhyMode { ____Placeholder_WlanIfPhyMode } WlanIfPhyMode ;


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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static enum WlanIfPhyMode
FUNC_0(uint32_t VAR_19)
{

 if ((VAR_19 & VAR_0) != 0)
  return (VAR_10);
 if ((VAR_19 & VAR_1) != 0)
  return (VAR_11);
 if ((VAR_19 & VAR_3) != 0 ||
     (VAR_19 & VAR_5) != 0)
  return (VAR_12);
 if ((VAR_19 & VAR_2) != 0)
  return (VAR_13);
 if ((VAR_19 & VAR_8) != 0 &&
     (VAR_19 & VAR_0) != 0)
  return (VAR_17);
 if ((VAR_19 & VAR_8) != 0 &&
     (VAR_19 & VAR_3) != 0)
  return (VAR_18);
 if ((VAR_19 & VAR_7) != 0)
  return (VAR_16);
 if ((VAR_19 & VAR_4) != 0)
  return (VAR_14);
 if ((VAR_19 & VAR_6) != 0)
  return (VAR_15);

 return (VAR_9);
}

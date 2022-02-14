
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct pp_hwmgr {int dummy; } ;


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

__attribute__((used)) static uint32_t FUNC_0(struct pp_hwmgr *VAR_14,
  uint16_t VAR_15, uint16_t VAR_16)
{
 uint32_t VAR_17 = 0;

 if (VAR_15 & VAR_2)
  VAR_17 |= VAR_8;

 if (VAR_15 & VAR_6)
  VAR_17 |= VAR_13;

 if (VAR_15 & VAR_4)
  VAR_17 |= VAR_10;

 if (VAR_15 & VAR_5)
  VAR_17 |= VAR_12;

 if (VAR_15 & VAR_3)
  VAR_17 |= VAR_9;

 if (VAR_15 & VAR_1)
  VAR_17 |= VAR_7;

 if (VAR_16 & VAR_0)
  VAR_17 |= VAR_11;

 return VAR_17;
}

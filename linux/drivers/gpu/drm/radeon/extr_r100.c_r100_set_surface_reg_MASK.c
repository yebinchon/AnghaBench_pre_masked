
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_device {scalar_t__ family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int,int,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (scalar_t__,int) ;

int FUNC_2(struct radeon_device *VAR_20, int VAR_21,
    uint32_t VAR_22, uint32_t VAR_23,
    uint32_t VAR_24, uint32_t VAR_25)
{
 int VAR_26 = VAR_21 * 16;
 int VAR_27 = 0;

 if (VAR_20->family <= VAR_1) {
  if ((VAR_22 & (VAR_16|VAR_17))
     == (VAR_16|VAR_17))
   VAR_27 |= VAR_14;
  if (VAR_22 & VAR_16)
   VAR_27 |= VAR_15;

  if ((VAR_22 & (VAR_16|VAR_17))
    == 0)
   VAR_23 = 0;
 } else if (VAR_20->family <= VAR_2) {
  if (VAR_22 & (VAR_16))
   VAR_27 |= VAR_3;
  if (VAR_22 & VAR_17)
   VAR_27 |= VAR_4;
 } else {
  if (VAR_22 & VAR_16)
   VAR_27 |= VAR_5;
  if (VAR_22 & VAR_17)
   VAR_27 |= VAR_6;
 }

 if (VAR_22 & VAR_18)
  VAR_27 |= VAR_10 | VAR_12;
 if (VAR_22 & VAR_19)
  VAR_27 |= VAR_11 | VAR_13;


 if (VAR_20->family < VAR_0)
  VAR_27 |= VAR_23 / 16;
 else
  VAR_27 |= VAR_23 / 8;


 FUNC_0("writing surface %d %d %x %x\n", VAR_21, VAR_27, VAR_24, VAR_24+VAR_25-1);
 FUNC_1(VAR_7 + VAR_26, VAR_27);
 FUNC_1(VAR_8 + VAR_26, VAR_24);
 FUNC_1(VAR_9 + VAR_26, VAR_24 + VAR_25 - 1);
 return 0;
}

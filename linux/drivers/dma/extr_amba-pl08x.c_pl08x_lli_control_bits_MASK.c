
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct pl08x_driver_data {TYPE_1__* vd; } ;
struct TYPE_2__ {scalar_t__ ftdmac020; } ;


 int FUNC_0 () ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;

__attribute__((used)) static inline u32 FUNC_1(struct pl08x_driver_data *VAR_15,
      u32 VAR_16,
      u8 VAR_17, u8 VAR_18,
      size_t VAR_19)
{
 u32 VAR_20 = VAR_16;






 if (VAR_15->vd->ftdmac020) {
  VAR_20 &= ~VAR_0;
  VAR_20 &= ~VAR_2;
  VAR_20 &= ~VAR_4;

  switch (VAR_17) {
  case 1:
   VAR_20 |= VAR_14 <<
    VAR_3;
   break;
  case 2:
   VAR_20 |= VAR_12 <<
    VAR_3;
   break;
  case 4:
   VAR_20 |= VAR_13 <<
    VAR_3;
   break;
  default:
   FUNC_0();
   break;
  }

  switch (VAR_18) {
  case 1:
   VAR_20 |= VAR_14 <<
    VAR_1;
   break;
  case 2:
   VAR_20 |= VAR_12 <<
    VAR_1;
   break;
  case 4:
   VAR_20 |= VAR_13 <<
    VAR_1;
   break;
  default:
   FUNC_0();
   break;
  }

  VAR_19 &= VAR_4;
  VAR_20 |= VAR_19 << VAR_5;
 } else {
  VAR_20 &= ~VAR_6;
  VAR_20 &= ~VAR_8;
  VAR_20 &= ~VAR_10;

  switch (VAR_17) {
  case 1:
   VAR_20 |= VAR_14 <<
    VAR_9;
   break;
  case 2:
   VAR_20 |= VAR_12 <<
    VAR_9;
   break;
  case 4:
   VAR_20 |= VAR_13 <<
    VAR_9;
   break;
  default:
   FUNC_0();
   break;
  }

  switch (VAR_18) {
  case 1:
   VAR_20 |= VAR_14 <<
    VAR_7;
   break;
  case 2:
   VAR_20 |= VAR_12 <<
    VAR_7;
   break;
  case 4:
   VAR_20 |= VAR_13 <<
    VAR_7;
   break;
  default:
   FUNC_0();
   break;
  }

  VAR_19 &= VAR_10;
  VAR_20 |= VAR_19 << VAR_11;
 }

 return VAR_20;
}

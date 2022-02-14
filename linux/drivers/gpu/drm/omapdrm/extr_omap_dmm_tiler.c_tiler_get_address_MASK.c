
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef enum tiler_fmt { ____Placeholder_tiler_fmt } tiler_fmt ;
struct TYPE_2__ {scalar_t__ x_shft; scalar_t__ y_shft; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,int) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static u32 FUNC_3(enum tiler_fmt VAR_6, u32 VAR_7, u32 VAR_8, u32 VAR_9)
{
 u32 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

 VAR_10 = VAR_1 - VAR_5[VAR_6].x_shft;
 VAR_11 = VAR_0 - VAR_5[VAR_6].y_shft;
 VAR_15 = VAR_5[VAR_6].x_shft + VAR_5[VAR_6].y_shft;


 VAR_13 = FUNC_1(VAR_10);
 VAR_14 = FUNC_1(VAR_11);

 if (VAR_8 < 0 || VAR_8 > VAR_13 || VAR_9 < 0 || VAR_9 > VAR_14) {
  FUNC_0("invalid coords: %u < 0 || %u > %u || %u < 0 || %u > %u",
    VAR_8, VAR_8, VAR_13, VAR_9, VAR_9, VAR_14);
  return 0;
 }


 if (VAR_7 & VAR_3)
  VAR_8 ^= VAR_13;
 if (VAR_7 & VAR_4)
  VAR_9 ^= VAR_14;


 if (VAR_7 & VAR_2)
  VAR_12 = ((VAR_8 << VAR_11) + VAR_9);
 else
  VAR_12 = ((VAR_9 << VAR_10) + VAR_8);

 return FUNC_2((VAR_12 << VAR_15), VAR_7, VAR_6);
}

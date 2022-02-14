
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int reference_freq; } ;
struct TYPE_4__ {TYPE_1__ spll; } ;
struct radeon_device {TYPE_2__ clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

u32 FUNC_1(struct radeon_device *VAR_9)
{
 u32 VAR_10 = FUNC_0(VAR_2) & VAR_1;
 u32 VAR_11 = FUNC_0(VAR_0);
 u32 VAR_12 = ((VAR_11 & VAR_3) >> VAR_4) + 1;
 u32 VAR_13 = ((VAR_11 & VAR_5) >> VAR_6) + 1 +
  ((VAR_11 & VAR_7) >> VAR_8) + 1;
 u32 VAR_14 = (VAR_9->clock.spll.reference_freq * VAR_10) /
  (VAR_13 * VAR_12);

 return VAR_14;
}

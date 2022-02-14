
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct radeon_pll {int reference_freq; } ;
struct TYPE_2__ {struct radeon_pll spll; } ;
struct radeon_device {TYPE_1__ clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;

uint32_t FUNC_1(struct radeon_device *VAR_6)
{
 struct radeon_pll *VAR_7 = &VAR_6->clock.spll;
 uint32_t VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_8 = FUNC_0(VAR_1);
 VAR_8 = (VAR_8 >> VAR_5) & VAR_4;
 VAR_8 <<= 1;
 VAR_8 *= VAR_7->reference_freq;

 VAR_9 =
     FUNC_0(VAR_1) & VAR_0;

 if (VAR_9 == 0)
  return 0;

 VAR_11 = VAR_8 / VAR_9;

 VAR_10 = FUNC_0(VAR_2) & VAR_3;
 if (VAR_10 == 2)
  VAR_11 >>= 1;
 else if (VAR_10 == 3)
  VAR_11 >>= 2;
 else if (VAR_10 == 4)
  VAR_11 >>= 3;

 return VAR_11;
}

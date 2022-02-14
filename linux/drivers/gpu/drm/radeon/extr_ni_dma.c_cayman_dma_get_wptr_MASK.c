
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ u32 ;
struct radeon_ring {scalar_t__ idx; } ;
struct radeon_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;

uint32_t FUNC_1(struct radeon_device *VAR_4,
      struct radeon_ring *VAR_5)
{
 u32 VAR_6;

 if (VAR_5->idx == VAR_3)
  VAR_6 = VAR_2 + VAR_0;
 else
  VAR_6 = VAR_2 + VAR_1;

 return (FUNC_0(VAR_6) & 0x3fffc) >> 2;
}

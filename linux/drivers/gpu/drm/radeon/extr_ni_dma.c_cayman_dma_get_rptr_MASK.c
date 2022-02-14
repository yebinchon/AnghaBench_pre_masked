
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct radeon_ring {int rptr_offs; scalar_t__ idx; } ;
struct TYPE_2__ {int* wb; scalar_t__ enabled; } ;
struct radeon_device {TYPE_1__ wb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;

uint32_t FUNC_1(struct radeon_device *VAR_4,
        struct radeon_ring *VAR_5)
{
 u32 VAR_6, VAR_7;

 if (VAR_4->wb.enabled) {
  VAR_6 = VAR_4->wb.wb[VAR_5->rptr_offs/4];
 } else {
  if (VAR_5->idx == VAR_3)
   VAR_7 = VAR_2 + VAR_0;
  else
   VAR_7 = VAR_2 + VAR_1;

  VAR_6 = FUNC_0(VAR_7);
 }

 return (VAR_6 & 0x3fffc) >> 2;
}

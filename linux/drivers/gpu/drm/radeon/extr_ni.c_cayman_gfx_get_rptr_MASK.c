
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct radeon_ring {int rptr_offs; scalar_t__ idx; } ;
struct TYPE_2__ {int * wb; scalar_t__ enabled; } ;
struct radeon_device {TYPE_1__ wb; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;

u32 FUNC_1(struct radeon_device *VAR_5,
   struct radeon_ring *VAR_6)
{
 u32 VAR_7;

 if (VAR_5->wb.enabled)
  VAR_7 = VAR_5->wb.wb[VAR_6->rptr_offs/4];
 else {
  if (VAR_6->idx == VAR_4)
   VAR_7 = FUNC_0(VAR_1);
  else if (VAR_6->idx == VAR_0)
   VAR_7 = FUNC_0(VAR_2);
  else
   VAR_7 = FUNC_0(VAR_3);
 }

 return VAR_7;
}

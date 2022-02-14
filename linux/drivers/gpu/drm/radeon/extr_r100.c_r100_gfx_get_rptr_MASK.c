
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct radeon_ring {int rptr_offs; } ;
struct TYPE_2__ {int * wb; scalar_t__ enabled; } ;
struct radeon_device {TYPE_1__ wb; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

u32 FUNC_2(struct radeon_device *VAR_1,
        struct radeon_ring *VAR_2)
{
 u32 VAR_3;

 if (VAR_1->wb.enabled)
  VAR_3 = FUNC_1(VAR_1->wb.wb[VAR_2->rptr_offs/4]);
 else
  VAR_3 = FUNC_0(VAR_0);

 return VAR_3;
}

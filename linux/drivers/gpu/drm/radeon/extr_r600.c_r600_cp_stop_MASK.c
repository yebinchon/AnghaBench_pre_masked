
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int visible_vram_size; } ;
struct radeon_device {TYPE_4__* ring; TYPE_3__ mc; TYPE_2__* asic; } ;
struct TYPE_8__ {int ready; } ;
struct TYPE_5__ {size_t copy_ring_index; } ;
struct TYPE_6__ {TYPE_1__ copy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct radeon_device*,int ) ;

void FUNC_3(struct radeon_device *VAR_3)
{
 if (VAR_3->asic->copy.copy_ring_index == VAR_0)
  FUNC_2(VAR_3, VAR_3->mc.visible_vram_size);
 FUNC_1(VAR_1, FUNC_0(1));
 FUNC_1(VAR_2, 0);
 VAR_3->ring[VAR_0].ready = 0;
}

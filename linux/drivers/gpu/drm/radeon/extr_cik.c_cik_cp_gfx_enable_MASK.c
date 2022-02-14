
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


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct radeon_device*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_5, bool VAR_6)
{
 if (VAR_6)
  FUNC_0(VAR_1, 0);
 else {
  if (VAR_5->asic->copy.copy_ring_index == VAR_4)
   FUNC_1(VAR_5, VAR_5->mc.visible_vram_size);
  FUNC_0(VAR_1, (VAR_2 | VAR_3 | VAR_0));
  VAR_5->ring[VAR_4].ready = 0;
 }
 FUNC_2(50);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int visible_vram_size; } ;
struct radeon_device {TYPE_1__* ring; TYPE_4__ mc; TYPE_3__* asic; } ;
struct TYPE_6__ {size_t copy_ring_index; } ;
struct TYPE_7__ {TYPE_2__ copy; } ;
struct TYPE_5__ {int ready; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct radeon_device*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_8, bool VAR_9)
{
 if (VAR_9)
  FUNC_0(VAR_3, 0);
 else {
  if (VAR_8->asic->copy.copy_ring_index == VAR_6)
   FUNC_1(VAR_8, VAR_8->mc.visible_vram_size);
  FUNC_0(VAR_3, (VAR_4 | VAR_5 | VAR_2));
  FUNC_0(VAR_7, 0);
  VAR_8->ring[VAR_6].ready = 0;
  VAR_8->ring[VAR_0].ready = 0;
  VAR_8->ring[VAR_1].ready = 0;
 }
 FUNC_2(50);
}

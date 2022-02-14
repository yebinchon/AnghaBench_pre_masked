
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int visible_vram_size; } ;
struct radeon_device {TYPE_4__* ring; TYPE_3__ mc; TYPE_2__* asic; } ;
struct TYPE_8__ {int ready; } ;
struct TYPE_5__ {size_t copy_ring_index; } ;
struct TYPE_6__ {TYPE_1__ copy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct radeon_device*,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_10)
{
 u32 VAR_11, VAR_12;
 int VAR_13;

 if ((VAR_10->asic->copy.copy_ring_index == VAR_1) ||
     (VAR_10->asic->copy.copy_ring_index == VAR_0))
  FUNC_2(VAR_10, VAR_10->mc.visible_vram_size);

 for (VAR_13 = 0; VAR_13 < 2; VAR_13++) {
  if (VAR_13 == 0)
   VAR_12 = VAR_4;
  else
   VAR_12 = VAR_5;
  VAR_11 = FUNC_0(VAR_3 + VAR_12);
  VAR_11 &= ~VAR_6;
  FUNC_1(VAR_3 + VAR_12, VAR_11);
  FUNC_1(VAR_2 + VAR_12, 0);
 }
 VAR_10->ring[VAR_1].ready = 0;
 VAR_10->ring[VAR_0].ready = 0;






 FUNC_1(VAR_9, VAR_7 | VAR_8);
 (void)FUNC_0(VAR_9);
 FUNC_3(50);
 FUNC_1(VAR_9, 0);
 (void)FUNC_0(VAR_9);
}

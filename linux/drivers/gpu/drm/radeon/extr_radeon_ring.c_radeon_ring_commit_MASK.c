
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_ring {size_t idx; int wptr; int align_mask; int nop; } ;
struct radeon_device {TYPE_2__* asic; } ;
struct TYPE_4__ {int (* mmio_hdp_flush ) (struct radeon_device*) ;TYPE_1__** ring; } ;
struct TYPE_3__ {int (* hdp_flush ) (struct radeon_device*,struct radeon_ring*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (struct radeon_device*,struct radeon_ring*) ;
 int FUNC_2 (struct radeon_ring*,int ) ;
 int FUNC_3 (struct radeon_device*,struct radeon_ring*) ;
 int FUNC_4 (struct radeon_device*) ;

void FUNC_5(struct radeon_device *VAR_0, struct radeon_ring *VAR_1,
   bool VAR_2)
{



 if (VAR_2 && VAR_0->asic->ring[VAR_1->idx]->hdp_flush)
  VAR_0->asic->ring[VAR_1->idx]->hdp_flush(VAR_0, VAR_1);

 while (VAR_1->wptr & VAR_1->align_mask) {
  FUNC_2(VAR_1, VAR_1->nop);
 }
 FUNC_0();



 if (VAR_2 && VAR_0->asic->mmio_hdp_flush)
  VAR_0->asic->mmio_hdp_flush(VAR_0);
 FUNC_1(VAR_0, VAR_1);
}

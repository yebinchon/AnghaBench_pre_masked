
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct radeon_ring {int dummy; } ;
struct radeon_fence {size_t ring; int seq; } ;
struct TYPE_3__ {scalar_t__ use_event; } ;
struct radeon_device {scalar_t__ family; TYPE_2__* fence_drv; TYPE_1__ wb; struct radeon_ring* ring; } ;
struct TYPE_4__ {int scratch_reg; int gpu_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct radeon_ring*,int) ;
 int FUNC_8 (int ) ;

void FUNC_9(struct radeon_device *VAR_17,
     struct radeon_fence *VAR_18)
{
 struct radeon_ring *VAR_19 = &VAR_17->ring[VAR_18->ring];
 u32 VAR_20 = VAR_11 | VAR_12 |
  VAR_9;

 if (VAR_17->family >= VAR_2)
  VAR_20 |= VAR_6;

 if (VAR_17->wb.use_event) {
  u64 VAR_21 = VAR_17->fence_drv[VAR_18->ring].gpu_addr;

  FUNC_7(VAR_19, FUNC_5(VAR_10, 3));
  FUNC_7(VAR_19, VAR_20);
  FUNC_7(VAR_19, 0xFFFFFFFF);
  FUNC_7(VAR_19, 0);
  FUNC_7(VAR_19, 10);

  FUNC_7(VAR_19, FUNC_5(VAR_5, 4));
  FUNC_7(VAR_19, FUNC_2(VAR_1) | FUNC_1(5));
  FUNC_7(VAR_19, FUNC_6(VAR_21));
  FUNC_7(VAR_19, (FUNC_8(VAR_21) & 0xff) | FUNC_0(1) | FUNC_3(2));
  FUNC_7(VAR_19, VAR_18->seq);
  FUNC_7(VAR_19, 0);
 } else {

  FUNC_7(VAR_19, FUNC_5(VAR_10, 3));
  FUNC_7(VAR_19, VAR_20);
  FUNC_7(VAR_19, 0xFFFFFFFF);
  FUNC_7(VAR_19, 0);
  FUNC_7(VAR_19, 10);
  FUNC_7(VAR_19, FUNC_5(VAR_4, 0));
  FUNC_7(VAR_19, FUNC_2(VAR_0) | FUNC_1(0));

  FUNC_7(VAR_19, FUNC_5(VAR_7, 1));
  FUNC_7(VAR_19, (VAR_16 - VAR_8) >> 2);
  FUNC_7(VAR_19, VAR_15 | VAR_14);

  FUNC_7(VAR_19, FUNC_5(VAR_7, 1));
  FUNC_7(VAR_19, ((VAR_17->fence_drv[VAR_18->ring].scratch_reg - VAR_8) >> 2));
  FUNC_7(VAR_19, VAR_18->seq);

  FUNC_7(VAR_19, FUNC_4(VAR_3, 0));
  FUNC_7(VAR_19, VAR_13);
 }
}

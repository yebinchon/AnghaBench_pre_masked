
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u32 ;
struct radeon_ring {int rptr_save_reg; int wptr; int next_rptr_gpu_addr; } ;
struct radeon_ib {size_t ring; unsigned int length_dw; int gpu_addr; scalar_t__ is_const_ib; TYPE_2__* vm; } ;
struct TYPE_6__ {scalar_t__ enabled; } ;
struct radeon_device {TYPE_3__ wb; struct radeon_ring* ring; } ;
struct TYPE_5__ {TYPE_1__* ids; } ;
struct TYPE_4__ {unsigned int id; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_1 (int) ;
 int FUNC_2 (struct radeon_ring*,unsigned int) ;
 int FUNC_3 (int) ;

void FUNC_4(struct radeon_device *VAR_7, struct radeon_ib *VAR_8)
{
 struct radeon_ring *VAR_9 = &VAR_7->ring[VAR_8->ring];
 unsigned VAR_10 = VAR_8->vm ? VAR_8->vm->ids[VAR_8->ring].id : 0;
 u32 VAR_11, VAR_12 = VAR_0;

 if (VAR_8->is_const_ib) {

  FUNC_2(VAR_9, FUNC_0(VAR_5, 0));
  FUNC_2(VAR_9, 0);

  VAR_11 = FUNC_0(VAR_2, 2);
 } else {
  u32 VAR_13;
  if (VAR_9->rptr_save_reg) {
   VAR_13 = VAR_9->wptr + 3 + 4;
   FUNC_2(VAR_9, FUNC_0(VAR_3, 1));
   FUNC_2(VAR_9, ((VAR_9->rptr_save_reg -
        VAR_4) >> 2));
   FUNC_2(VAR_9, VAR_13);
  } else if (VAR_7->wb.enabled) {
   VAR_13 = VAR_9->wptr + 5 + 4;
   FUNC_2(VAR_9, FUNC_0(VAR_6, 3));
   FUNC_2(VAR_9, FUNC_1(1));
   FUNC_2(VAR_9, VAR_9->next_rptr_gpu_addr & 0xfffffffc);
   FUNC_2(VAR_9, FUNC_3(VAR_9->next_rptr_gpu_addr));
   FUNC_2(VAR_9, VAR_13);
  }

  VAR_11 = FUNC_0(VAR_1, 2);
 }

 VAR_12 |= VAR_8->length_dw | (VAR_10 << 24);

 FUNC_2(VAR_9, VAR_11);
 FUNC_2(VAR_9, (VAR_8->gpu_addr & 0xFFFFFFFC));
 FUNC_2(VAR_9, FUNC_3(VAR_8->gpu_addr) & 0xFFFF);
 FUNC_2(VAR_9, VAR_12);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct radeon_ring {int rptr_save_reg; int wptr; int next_rptr_gpu_addr; } ;
struct radeon_ib {size_t ring; int gpu_addr; unsigned int length_dw; scalar_t__ is_const_ib; TYPE_2__* vm; } ;
struct TYPE_6__ {scalar_t__ enabled; } ;
struct radeon_device {TYPE_3__ wb; struct radeon_ring* ring; } ;
struct TYPE_5__ {TYPE_1__* ids; } ;
struct TYPE_4__ {unsigned int id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct radeon_ring*,int) ;
 int FUNC_2 (int) ;

void FUNC_3(struct radeon_device *VAR_12, struct radeon_ib *VAR_13)
{
 struct radeon_ring *VAR_14 = &VAR_12->ring[VAR_13->ring];
 unsigned VAR_15 = VAR_13->vm ? VAR_13->vm->ids[VAR_13->ring].id : 0;
 u32 VAR_16;

 if (VAR_13->is_const_ib) {

  FUNC_1(VAR_14, FUNC_0(VAR_8, 0));
  FUNC_1(VAR_14, 0);

  VAR_16 = FUNC_0(VAR_2, 2);
 } else {
  u32 VAR_17;
  if (VAR_14->rptr_save_reg) {
   VAR_17 = VAR_14->wptr + 3 + 4 + 8;
   FUNC_1(VAR_14, FUNC_0(VAR_3, 1));
   FUNC_1(VAR_14, ((VAR_14->rptr_save_reg -
        VAR_4) >> 2));
   FUNC_1(VAR_14, VAR_17);
  } else if (VAR_12->wb.enabled) {
   VAR_17 = VAR_14->wptr + 5 + 4 + 8;
   FUNC_1(VAR_14, FUNC_0(VAR_11, 3));
   FUNC_1(VAR_14, (1 << 8));
   FUNC_1(VAR_14, VAR_14->next_rptr_gpu_addr & 0xfffffffc);
   FUNC_1(VAR_14, FUNC_2(VAR_14->next_rptr_gpu_addr));
   FUNC_1(VAR_14, VAR_17);
  }

  VAR_16 = FUNC_0(VAR_1, 2);
 }

 FUNC_1(VAR_14, VAR_16);
 FUNC_1(VAR_14,



     (VAR_13->gpu_addr & 0xFFFFFFFC));
 FUNC_1(VAR_14, FUNC_2(VAR_13->gpu_addr) & 0xFFFF);
 FUNC_1(VAR_14, VAR_13->length_dw | (VAR_15 << 24));

 if (!VAR_13->is_const_ib) {

  FUNC_1(VAR_14, FUNC_0(VAR_3, 1));
  FUNC_1(VAR_14, (VAR_0 - VAR_4) >> 2);
  FUNC_1(VAR_14, VAR_15);
  FUNC_1(VAR_14, FUNC_0(VAR_7, 3));
  FUNC_1(VAR_14, VAR_9 |
      VAR_10 |
      VAR_6 |
      VAR_5);
  FUNC_1(VAR_14, 0xFFFFFFFF);
  FUNC_1(VAR_14, 0);
  FUNC_1(VAR_14, 10);
 }
}

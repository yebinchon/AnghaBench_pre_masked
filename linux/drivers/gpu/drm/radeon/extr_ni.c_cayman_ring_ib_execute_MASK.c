
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint32_t ;
typedef unsigned int u32 ;
struct radeon_ring {int rptr_save_reg; unsigned int wptr; } ;
struct radeon_ib {size_t ring; int gpu_addr; unsigned int length_dw; TYPE_2__* vm; } ;
struct radeon_device {struct radeon_ring* ring; } ;
struct TYPE_4__ {TYPE_1__* ids; } ;
struct TYPE_3__ {unsigned int id; } ;


 unsigned int FUNC_0 (int ,int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_1 (struct radeon_ring*,unsigned int) ;
 int FUNC_2 (int) ;

void FUNC_3(struct radeon_device *VAR_9, struct radeon_ib *VAR_10)
{
 struct radeon_ring *VAR_11 = &VAR_9->ring[VAR_10->ring];
 unsigned VAR_12 = VAR_10->vm ? VAR_10->vm->ids[VAR_10->ring].id : 0;
 u32 VAR_13 = VAR_1 | VAR_8 |
  VAR_6;


 FUNC_1(VAR_11, FUNC_0(VAR_3, 0));
 FUNC_1(VAR_11, 1);

 if (VAR_11->rptr_save_reg) {
  uint32_t VAR_14 = VAR_11->wptr + 3 + 4 + 8;
  FUNC_1(VAR_11, FUNC_0(VAR_4, 1));
  FUNC_1(VAR_11, ((VAR_11->rptr_save_reg -
       VAR_5) >> 2));
  FUNC_1(VAR_11, VAR_14);
 }

 FUNC_1(VAR_11, FUNC_0(VAR_2, 2));
 FUNC_1(VAR_11,



     (VAR_10->gpu_addr & 0xFFFFFFFC));
 FUNC_1(VAR_11, FUNC_2(VAR_10->gpu_addr) & 0xFF);
 FUNC_1(VAR_11, VAR_10->length_dw | (VAR_12 << 24));


 FUNC_1(VAR_11, FUNC_0(VAR_7, 3));
 FUNC_1(VAR_11, VAR_0 | VAR_13);
 FUNC_1(VAR_11, 0xFFFFFFFF);
 FUNC_1(VAR_11, 0);
 FUNC_1(VAR_11, (VAR_12 << 24) | 10);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct radeon_ring {int wptr; int next_rptr_gpu_addr; } ;
struct radeon_ib {size_t ring; int gpu_addr; int length_dw; TYPE_2__* vm; } ;
struct TYPE_6__ {scalar_t__ enabled; } ;
struct radeon_device {TYPE_3__ wb; struct radeon_ring* ring; } ;
struct TYPE_5__ {TYPE_1__* ids; } ;
struct TYPE_4__ {unsigned int id; } ;


 int FUNC_0 (int ,unsigned int,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct radeon_ring*,int) ;
 int FUNC_3 (int) ;

void FUNC_4(struct radeon_device *VAR_3,
    struct radeon_ib *VAR_4)
{
 struct radeon_ring *VAR_5 = &VAR_3->ring[VAR_4->ring];
 unsigned VAR_6 = VAR_4->vm ? VAR_4->vm->ids[VAR_4->ring].id : 0;

 if (VAR_3->wb.enabled) {
  u32 VAR_7 = VAR_5->wptr + 4;
  while ((VAR_7 & 7) != 5)
   VAR_7++;
  VAR_7 += 3;
  FUNC_2(VAR_5, FUNC_1(VAR_2, 0, 0, 1));
  FUNC_2(VAR_5, VAR_5->next_rptr_gpu_addr & 0xfffffffc);
  FUNC_2(VAR_5, FUNC_3(VAR_5->next_rptr_gpu_addr) & 0xff);
  FUNC_2(VAR_5, VAR_7);
 }




 while ((VAR_5->wptr & 7) != 5)
  FUNC_2(VAR_5, FUNC_1(VAR_1, 0, 0, 0));
 FUNC_2(VAR_5, FUNC_0(VAR_0, VAR_6, 0));
 FUNC_2(VAR_5, (VAR_4->gpu_addr & 0xFFFFFFE0));
 FUNC_2(VAR_5, (VAR_4->length_dw << 12) | (FUNC_3(VAR_4->gpu_addr) & 0xFF));

}

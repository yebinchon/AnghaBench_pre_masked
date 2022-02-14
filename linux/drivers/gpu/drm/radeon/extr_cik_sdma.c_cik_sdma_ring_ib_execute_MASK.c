
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
struct TYPE_4__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_3 ;
 int FUNC_1 (struct radeon_ring*,int) ;
 int FUNC_2 (int) ;

void FUNC_3(struct radeon_device *VAR_4,
         struct radeon_ib *VAR_5)
{
 struct radeon_ring *VAR_6 = &VAR_4->ring[VAR_5->ring];
 u32 VAR_7 = (VAR_5->vm ? VAR_5->vm->ids[VAR_5->ring].id : 0) & 0xf;

 if (VAR_4->wb.enabled) {
  u32 VAR_8 = VAR_6->wptr + 5;
  while ((VAR_8 & 7) != 4)
   VAR_8++;
  VAR_8 += 4;
  FUNC_1(VAR_6, FUNC_0(VAR_2, VAR_3, 0));
  FUNC_1(VAR_6, VAR_6->next_rptr_gpu_addr & 0xfffffffc);
  FUNC_1(VAR_6, FUNC_2(VAR_6->next_rptr_gpu_addr));
  FUNC_1(VAR_6, 1);
  FUNC_1(VAR_6, VAR_8);
 }


 while ((VAR_6->wptr & 7) != 4)
  FUNC_1(VAR_6, FUNC_0(VAR_1, 0, 0));
 FUNC_1(VAR_6, FUNC_0(VAR_0, 0, VAR_7));
 FUNC_1(VAR_6, VAR_5->gpu_addr & 0xffffffe0);
 FUNC_1(VAR_6, FUNC_2(VAR_5->gpu_addr));
 FUNC_1(VAR_6, VAR_5->length_dw);

}

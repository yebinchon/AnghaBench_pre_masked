
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct radeon_ring {scalar_t__ rptr_save_reg; scalar_t__ wptr; } ;
struct radeon_ib {scalar_t__ length_dw; scalar_t__ gpu_addr; } ;
struct radeon_device {struct radeon_ring* ring; } ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (struct radeon_ring*,scalar_t__) ;

void FUNC_2(struct radeon_device *VAR_2, struct radeon_ib *VAR_3)
{
 struct radeon_ring *VAR_4 = &VAR_2->ring[VAR_1];

 if (VAR_4->rptr_save_reg) {
  u32 VAR_5 = VAR_4->wptr + 2 + 3;
  FUNC_1(VAR_4, FUNC_0(VAR_4->rptr_save_reg, 0));
  FUNC_1(VAR_4, VAR_5);
 }

 FUNC_1(VAR_4, FUNC_0(VAR_0, 1));
 FUNC_1(VAR_4, VAR_3->gpu_addr);
 FUNC_1(VAR_4, VAR_3->length_dw);
}

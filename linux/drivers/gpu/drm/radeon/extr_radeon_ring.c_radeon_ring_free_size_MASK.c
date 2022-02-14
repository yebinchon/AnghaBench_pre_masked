
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_ring {int ring_free_dw; int ring_size; int wptr; int ptr_mask; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (struct radeon_device*,struct radeon_ring*) ;
 int FUNC_1 (struct radeon_device*,struct radeon_ring*) ;

void FUNC_2(struct radeon_device *VAR_0, struct radeon_ring *VAR_1)
{
 uint32_t VAR_2 = FUNC_0(VAR_0, VAR_1);


 VAR_1->ring_free_dw = VAR_2 + (VAR_1->ring_size / 4);
 VAR_1->ring_free_dw -= VAR_1->wptr;
 VAR_1->ring_free_dw &= VAR_1->ptr_mask;
 if (!VAR_1->ring_free_dw) {

  VAR_1->ring_free_dw = VAR_1->ring_size / 4;

  FUNC_1(VAR_0, VAR_1);
 }
}

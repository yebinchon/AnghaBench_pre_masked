
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ring {int ring_size; unsigned int align_mask; int ring_free_dw; unsigned int count_dw; int wptr; int wptr_old; int idx; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct radeon_device*,int ) ;
 int FUNC_1 (struct radeon_device*,struct radeon_ring*) ;

int FUNC_2(struct radeon_device *VAR_1, struct radeon_ring *VAR_2, unsigned VAR_3)
{
 int VAR_4;


 if (VAR_3 > (VAR_2->ring_size / 4))
  return -VAR_0;


 FUNC_1(VAR_1, VAR_2);
 VAR_3 = (VAR_3 + VAR_2->align_mask) & ~VAR_2->align_mask;
 while (VAR_3 > (VAR_2->ring_free_dw - 1)) {
  FUNC_1(VAR_1, VAR_2);
  if (VAR_3 < VAR_2->ring_free_dw) {
   break;
  }
  VAR_4 = FUNC_0(VAR_1, VAR_2->idx);
  if (VAR_4)
   return VAR_4;
 }
 VAR_2->count_dw = VAR_3;
 VAR_2->wptr_old = VAR_2->wptr;
 return 0;
}

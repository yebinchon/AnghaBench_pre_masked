
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct radeon_ring {int wptr; int ring_size; unsigned int ptr_mask; int * ring; int * next_rptr_cpu_addr; scalar_t__ rptr_save_reg; int idx; int * ring_obj; } ;
struct TYPE_2__ {scalar_t__ enabled; } ;
struct radeon_device {int ring_lock; TYPE_1__ wb; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int * FUNC_1 (unsigned int,int,int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct radeon_device*,int ) ;

unsigned FUNC_6(struct radeon_device *VAR_1, struct radeon_ring *VAR_2,
       uint32_t **VAR_3)
{
 unsigned VAR_4, VAR_5, VAR_6;


 FUNC_3(&VAR_1->ring_lock);
 *VAR_3 = ((void*)0);

 if (VAR_2->ring_obj == ((void*)0)) {
  FUNC_4(&VAR_1->ring_lock);
  return 0;
 }


 if (!FUNC_5(VAR_1, VAR_2->idx)) {
  FUNC_4(&VAR_1->ring_lock);
  return 0;
 }


 if (VAR_2->rptr_save_reg)
  VAR_5 = FUNC_0(VAR_2->rptr_save_reg);
 else if (VAR_1->wb.enabled)
  VAR_5 = FUNC_2(*VAR_2->next_rptr_cpu_addr);
 else {

  FUNC_4(&VAR_1->ring_lock);
  return 0;
 }

 VAR_4 = VAR_2->wptr + (VAR_2->ring_size / 4);
 VAR_4 -= VAR_5;
 VAR_4 &= VAR_2->ptr_mask;
 if (VAR_4 == 0) {
  FUNC_4(&VAR_1->ring_lock);
  return 0;
 }


 *VAR_3 = FUNC_1(VAR_4, sizeof(uint32_t), VAR_0);
 if (!*VAR_3) {
  FUNC_4(&VAR_1->ring_lock);
  return 0;
 }
 for (VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6) {
  (*VAR_3)[VAR_6] = VAR_2->ring[VAR_5++];
  VAR_5 &= VAR_2->ptr_mask;
 }

 FUNC_4(&VAR_1->ring_lock);
 return VAR_4;
}

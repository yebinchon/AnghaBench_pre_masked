
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_ring {scalar_t__ count_dw; size_t buf_mask; int ptr_mask; int wptr; int * ring; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static inline void FUNC_1(struct amdgpu_ring *VAR_0, uint32_t VAR_1)
{
 if (VAR_0->count_dw <= 0)
  FUNC_0("amdgpu: writing more dwords to the ring than expected!\n");
 VAR_0->ring[VAR_0->wptr++ & VAR_0->buf_mask] = VAR_1;
 VAR_0->wptr &= VAR_0->ptr_mask;
 VAR_0->count_dw--;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_ring {unsigned int buf_mask; int* ring; int wptr; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct amdgpu_ring *VAR_0,
        unsigned VAR_1)
{
 unsigned VAR_2;

 FUNC_0(VAR_1 > VAR_0->buf_mask);
 FUNC_0(VAR_0->ring[VAR_1] != 0x55aa55aa);

 VAR_2 = (VAR_0->wptr - 1) & VAR_0->buf_mask;
 if (VAR_2 > VAR_1)
  VAR_0->ring[VAR_1] = VAR_2 - VAR_1;
 else
  VAR_0->ring[VAR_1] = (VAR_0->buf_mask + 1) - VAR_1 + VAR_2;
}

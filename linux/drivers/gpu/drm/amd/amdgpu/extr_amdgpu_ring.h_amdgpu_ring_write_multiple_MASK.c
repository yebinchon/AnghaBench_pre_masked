
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_ring {int count_dw; unsigned int wptr; unsigned int buf_mask; int ptr_mask; int * ring; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (void*,void*,unsigned int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline void FUNC_3(struct amdgpu_ring *VAR_0,
           void *VAR_1, int VAR_2)
{
 unsigned VAR_3, VAR_4, VAR_5;
 void *VAR_6;

 if (FUNC_2(VAR_0->count_dw < VAR_2))
  FUNC_0("amdgpu: writing more dwords to the ring than expected!\n");

 VAR_3 = VAR_0->wptr & VAR_0->buf_mask;
 VAR_6 = (void *)&VAR_0->ring[VAR_3];
 VAR_4 = VAR_0->buf_mask + 1 - VAR_3;
 VAR_4 = (VAR_4 >= VAR_2) ? VAR_2: VAR_4;
 VAR_5 = VAR_2 - VAR_4;
 VAR_4 <<= 2;
 VAR_5 <<= 2;

 if (VAR_4)
  FUNC_1(VAR_6, VAR_1, VAR_4);

 if (VAR_5) {
  VAR_1 += VAR_4;
  VAR_6 = (void *)VAR_0->ring;
  FUNC_1(VAR_6, VAR_1, VAR_5);
 }

 VAR_0->wptr += VAR_2;
 VAR_0->wptr &= VAR_0->ptr_mask;
 VAR_0->count_dw -= VAR_2;
}

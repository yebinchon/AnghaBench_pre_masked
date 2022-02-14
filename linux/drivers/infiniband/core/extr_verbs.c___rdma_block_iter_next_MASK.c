
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_block_iter {int __dma_addr; int __sg_advance; int __sg_nents; scalar_t__ __sg; int __pg_bit; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

bool FUNC_4(struct ib_block_iter *VAR_0)
{
 unsigned int VAR_1;

 if (!VAR_0->__sg_nents || !VAR_0->__sg)
  return 0;

 VAR_0->__dma_addr = FUNC_1(VAR_0->__sg) + VAR_0->__sg_advance;
 VAR_1 = VAR_0->__dma_addr & (FUNC_0(VAR_0->__pg_bit) - 1);
 VAR_0->__sg_advance += FUNC_0(VAR_0->__pg_bit) - VAR_1;

 if (VAR_0->__sg_advance >= FUNC_2(VAR_0->__sg)) {
  VAR_0->__sg_advance = 0;
  VAR_0->__sg = FUNC_3(VAR_0->__sg);
  VAR_0->__sg_nents--;
 }

 return 1;
}

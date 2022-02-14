
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct ib_block_iter {unsigned int __sg_nents; int __pg_bit; struct scatterlist* __sg; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct ib_block_iter*,int ,int) ;

void FUNC_2(struct ib_block_iter *VAR_0,
        struct scatterlist *VAR_1, unsigned int VAR_2,
        unsigned long VAR_3)
{
 FUNC_1(VAR_0, 0, sizeof(struct ib_block_iter));
 VAR_0->__sg = VAR_1;
 VAR_0->__sg_nents = VAR_2;


 VAR_0->__pg_bit = FUNC_0(VAR_3);
}

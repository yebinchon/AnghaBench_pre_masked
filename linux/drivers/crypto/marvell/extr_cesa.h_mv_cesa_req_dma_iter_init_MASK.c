
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_cesa_dma_iter {unsigned int len; scalar_t__ offset; int op_len; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int ) ;

__attribute__((used)) static inline void FUNC_1(struct mv_cesa_dma_iter *VAR_1,
          unsigned int VAR_2)
{
 VAR_1->len = VAR_2;
 VAR_1->op_len = FUNC_0(VAR_2, VAR_0);
 VAR_1->offset = 0;
}

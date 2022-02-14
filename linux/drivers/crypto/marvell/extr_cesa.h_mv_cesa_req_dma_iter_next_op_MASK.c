
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_cesa_dma_iter {int offset; int op_len; int len; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static inline bool FUNC_1(struct mv_cesa_dma_iter *VAR_1)
{
 VAR_1->offset += VAR_1->op_len;
 VAR_1->op_len = FUNC_0(VAR_1->len - VAR_1->offset,
      VAR_0);

 return VAR_1->op_len;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ccp_cmd_queue {unsigned int qidx; int reg_head_lo; int qdma_tail; } ;
struct ccp5_desc {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static unsigned int FUNC_2(struct ccp_cmd_queue *VAR_1)
{
 unsigned int VAR_2, VAR_3;
 u32 VAR_4, VAR_5;

 VAR_5 = FUNC_1(VAR_1->qdma_tail);
 VAR_4 = FUNC_0(VAR_1->reg_head_lo);
 VAR_2 = (VAR_4 - VAR_5) / sizeof(struct ccp5_desc);

 VAR_3 = VAR_2 + VAR_0 - VAR_1->qidx - 1;

 return VAR_3 % VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct t4_cq {scalar_t__ gts; int cqid; scalar_t__ bar2_va; int bar2_qid; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct t4_cq *VAR_1, u32 VAR_2)
{
 if (VAR_1->bar2_va)
  FUNC_1(VAR_2 | FUNC_0(VAR_1->bar2_qid),
         VAR_1->bar2_va + VAR_0);
 else
  FUNC_1(VAR_2 | FUNC_0(VAR_1->cqid), VAR_1->gts);
}

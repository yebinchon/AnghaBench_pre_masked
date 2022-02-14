
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t3_cqe {int dummy; } ;
struct t3_cq {int size_log2; int rptr; struct t3_cqe* queue; } ;


 scalar_t__ FUNC_0 (int ,int ,struct t3_cqe*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline struct t3_cqe *FUNC_2(struct t3_cq *VAR_0)
{
 struct t3_cqe *VAR_1;

 VAR_1 = VAR_0->queue + (FUNC_1(VAR_0->rptr, VAR_0->size_log2));
 if (FUNC_0(VAR_0->rptr, VAR_0->size_log2, VAR_1))
  return VAR_1;
 return ((void*)0);
}

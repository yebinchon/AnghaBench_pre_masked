
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t3_cqe {int dummy; } ;
struct t3_cq {int size_log2; int sw_rptr; struct t3_cqe* sw_queue; int sw_wptr; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline struct t3_cqe *FUNC_2(struct t3_cq *VAR_0)
{
 struct t3_cqe *VAR_1;

 if (!FUNC_0(VAR_0->sw_rptr, VAR_0->sw_wptr)) {
  VAR_1 = VAR_0->sw_queue + (FUNC_1(VAR_0->sw_rptr, VAR_0->size_log2));
  return VAR_1;
 }
 return ((void*)0);
}

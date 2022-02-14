
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t3_cq_status_page {int cq_err; } ;
struct t3_cq {int size_log2; int * queue; } ;



__attribute__((used)) static inline int FUNC_0(struct t3_cq *VAR_0)
{
 return ((struct t3_cq_status_page *)
  &VAR_0->queue[1 << VAR_0->size_log2])->cq_err;
}

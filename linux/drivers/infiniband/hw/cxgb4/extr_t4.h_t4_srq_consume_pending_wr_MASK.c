
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t4_srq {scalar_t__ pending_cidx; scalar_t__ size; int in_use; int pending_in_use; } ;



__attribute__((used)) static inline void FUNC_0(struct t4_srq *VAR_0)
{
 VAR_0->pending_in_use--;
 VAR_0->in_use--;
 if (++VAR_0->pending_cidx == VAR_0->size)
  VAR_0->pending_cidx = 0;
}

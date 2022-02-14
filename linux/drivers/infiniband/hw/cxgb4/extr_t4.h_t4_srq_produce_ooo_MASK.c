
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t4_srq {int ooo_count; int in_use; } ;



__attribute__((used)) static inline void FUNC_0(struct t4_srq *VAR_0)
{
 VAR_0->in_use--;
 VAR_0->ooo_count++;
}

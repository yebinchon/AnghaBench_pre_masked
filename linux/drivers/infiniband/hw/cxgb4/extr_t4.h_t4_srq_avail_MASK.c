
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct t4_srq {int size; int in_use; } ;



__attribute__((used)) static inline u32 FUNC_0(struct t4_srq *VAR_0)
{
 return VAR_0->size - 1 - VAR_0->in_use;
}

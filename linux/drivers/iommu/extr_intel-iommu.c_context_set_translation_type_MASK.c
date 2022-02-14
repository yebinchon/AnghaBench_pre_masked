
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct context_entry {int lo; } ;



__attribute__((used)) static inline void FUNC_0(struct context_entry *VAR_0,
      unsigned long VAR_1)
{
 VAR_0->lo &= (((u64)-1) << 4) | 3;
 VAR_0->lo |= (VAR_1 & 3) << 2;
}

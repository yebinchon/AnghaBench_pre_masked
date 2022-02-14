
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct context_entry {unsigned long hi; } ;



__attribute__((used)) static inline void FUNC_0(struct context_entry *VAR_0,
      unsigned long VAR_1)
{
 VAR_0->hi |= (VAR_1 & ((1 << 16) - 1)) << 8;
}

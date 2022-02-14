
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct context_entry {unsigned long long hi; } ;



__attribute__((used)) static inline bool FUNC_0(struct context_entry *VAR_0)
{
 return !!(VAR_0->hi & (1ULL << 3));
}

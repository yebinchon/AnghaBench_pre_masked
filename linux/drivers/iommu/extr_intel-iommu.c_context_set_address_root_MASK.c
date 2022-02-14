
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct context_entry {unsigned long lo; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct context_entry *VAR_1,
         unsigned long VAR_2)
{
 VAR_1->lo &= ~VAR_0;
 VAR_1->lo |= VAR_2 & VAR_0;
}

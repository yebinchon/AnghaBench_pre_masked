
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;

__attribute__((used)) static inline unsigned long FUNC_0(unsigned long VAR_1,
         unsigned long VAR_2)
{
 VAR_1 = (VAR_1 + VAR_0 + 1) & ~VAR_0;
 return (VAR_1 < VAR_2) ? VAR_1 : VAR_2;
}

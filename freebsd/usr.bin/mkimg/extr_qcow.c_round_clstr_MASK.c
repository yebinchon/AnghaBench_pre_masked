
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 unsigned long VAR_0 ;

__attribute__((used)) static uint64_t
FUNC_0(uint64_t VAR_1)
{
 uint64_t VAR_2;

 VAR_2 = 1UL << VAR_0;
 return ((VAR_1 + VAR_2 - 1) & ~(VAR_2 - 1));
}

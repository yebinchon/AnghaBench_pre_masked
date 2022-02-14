
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



__attribute__((used)) static inline uint64_t
FUNC_0(uint64_t VAR_0, int VAR_1)
{
 uint64_t VAR_2;
 int VAR_3;

 VAR_3 = (VAR_1 + 1) * 4;
 VAR_2 = ~((1ULL << VAR_3) - 1);
 return (VAR_0 & VAR_2);
}

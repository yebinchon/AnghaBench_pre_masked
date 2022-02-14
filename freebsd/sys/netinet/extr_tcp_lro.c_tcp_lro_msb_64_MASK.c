
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



__attribute__((used)) static inline uint64_t
FUNC_0(uint64_t VAR_0)
{
 VAR_0 |= (VAR_0 >> 1);
 VAR_0 |= (VAR_0 >> 2);
 VAR_0 |= (VAR_0 >> 4);
 VAR_0 |= (VAR_0 >> 8);
 VAR_0 |= (VAR_0 >> 16);
 VAR_0 |= (VAR_0 >> 32);
 return (VAR_0 & ~(VAR_0 >> 1));
}

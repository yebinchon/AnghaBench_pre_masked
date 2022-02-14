
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long unw_hash_index_t ;


 int VAR_0 ;

__attribute__((used)) static inline unw_hash_index_t
FUNC_0 (unsigned long VAR_1)
{

 static const unsigned long VAR_2 = 0x9e3779b97f4a7c16UL;

 return (VAR_1 >> 4) * VAR_2 >> (64 - VAR_0);
}

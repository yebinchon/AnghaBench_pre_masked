
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;



__attribute__((used)) static u64 FUNC_0(const u64 *VAR_0, unsigned int VAR_1)
{
 return (VAR_0[VAR_1 / 64] & ((u64)1 << (VAR_1 % 64)));
}

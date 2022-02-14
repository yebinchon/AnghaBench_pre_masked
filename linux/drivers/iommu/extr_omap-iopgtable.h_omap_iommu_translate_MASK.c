
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int phys_addr_t ;



__attribute__((used)) static inline phys_addr_t FUNC_0(u32 VAR_0, u32 VAR_1, u32 VAR_2)
{
 return (VAR_0 & VAR_2) | (VAR_1 & (~VAR_2));
}

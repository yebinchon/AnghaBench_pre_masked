
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct ecx_plat_data {int* port_to_sgpio; } ;



__attribute__((used)) static inline int FUNC_0(struct ecx_plat_data *VAR_0, u32 VAR_1,
    u32 VAR_2)
{
 return 1 << (3 * VAR_0->port_to_sgpio[VAR_1] + VAR_2);
}

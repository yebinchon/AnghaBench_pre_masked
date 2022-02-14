
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fw_csr_iterator {int const* p; int const* end; } ;



void FUNC_0(struct fw_csr_iterator *VAR_0, const u32 *VAR_1)
{
 VAR_0->p = VAR_1 + 1;
 VAR_0->end = VAR_0->p + (VAR_1[0] >> 16);
}

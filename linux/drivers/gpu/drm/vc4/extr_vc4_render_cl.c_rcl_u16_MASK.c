
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct vc4_rcl_setup {scalar_t__ next_offset; TYPE_1__* rcl; } ;
struct TYPE_2__ {scalar_t__ vaddr; } ;



__attribute__((used)) static inline void FUNC_0(struct vc4_rcl_setup *VAR_0, u16 VAR_1)
{
 *(u16 *)(VAR_0->rcl->vaddr + VAR_0->next_offset) = VAR_1;
 VAR_0->next_offset += 2;
}

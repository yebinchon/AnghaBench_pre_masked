
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmu_rb_node {scalar_t__ len; scalar_t__ addr; } ;


 unsigned long FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_1(struct mmu_rb_node *VAR_0)
{
 return FUNC_0(VAR_0->addr + VAR_0->len) - 1;
}

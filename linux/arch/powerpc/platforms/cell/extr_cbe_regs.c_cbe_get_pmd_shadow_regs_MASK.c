
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct cbe_pmd_shadow_regs {int dummy; } ;
struct cbe_regs_map {struct cbe_pmd_shadow_regs pmd_shadow_regs; } ;


 struct cbe_regs_map* FUNC_0 (struct device_node*) ;

struct cbe_pmd_shadow_regs *FUNC_1(struct device_node *VAR_0)
{
 struct cbe_regs_map *VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 == ((void*)0))
  return ((void*)0);
 return &VAR_1->pmd_shadow_regs;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atom_memory_info {scalar_t__ mem_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static u32 FUNC_0(struct atom_memory_info *VAR_2)
{
 if ((VAR_2->mem_type == VAR_1) ||
     (VAR_2->mem_type == VAR_0))
  return 30000;

 return 0;
}

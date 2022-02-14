
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct its_vpe {scalar_t__ col_idx; } ;
struct its_node {scalar_t__ collections; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static struct its_vpe *FUNC_1(struct its_node *VAR_0, struct its_vpe *VAR_1)
{
 if (FUNC_0(VAR_0->collections + VAR_1->col_idx))
  return VAR_1;

 return ((void*)0);
}

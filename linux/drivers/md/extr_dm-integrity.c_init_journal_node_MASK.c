
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct journal_node {scalar_t__ sector; int node; } ;
typedef scalar_t__ sector_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct journal_node *VAR_0)
{
 FUNC_0(&VAR_0->node);
 VAR_0->sector = (sector_t)-1;
}

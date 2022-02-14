
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct its_node {struct its_cmd_block* cmd_base; } ;
struct its_cmd_block {int dummy; } ;



__attribute__((used)) static u64 FUNC_0(struct its_node *VAR_0,
     struct its_cmd_block *VAR_1)
{
 return (VAR_1 - VAR_0->cmd_base) * sizeof(*VAR_1);
}

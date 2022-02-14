
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct its_node {struct its_cmd_block* cmd_write; scalar_t__ base; } ;
struct its_cmd_block {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct its_node*,struct its_cmd_block*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static struct its_cmd_block *FUNC_2(struct its_node *VAR_1)
{
 u64 VAR_2 = FUNC_0(VAR_1, VAR_1->cmd_write);

 FUNC_1(VAR_2, VAR_1->base + VAR_0);

 return VAR_1->cmd_write;
}

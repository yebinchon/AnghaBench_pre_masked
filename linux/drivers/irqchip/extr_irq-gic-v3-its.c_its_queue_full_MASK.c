
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct its_node {int cmd_write; int cmd_base; scalar_t__ base; } ;
struct its_cmd_block {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct its_node *VAR_2)
{
 int VAR_3;
 int VAR_4;

 VAR_3 = VAR_2->cmd_write - VAR_2->cmd_base;
 VAR_4 = FUNC_0(VAR_2->base + VAR_0) / sizeof(struct its_cmd_block);


 if (((VAR_3 + 1) % VAR_1) == VAR_4)
  return 1;

 return 0;
}

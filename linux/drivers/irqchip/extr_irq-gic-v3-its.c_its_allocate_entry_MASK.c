
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct its_node {scalar_t__ cmd_write; scalar_t__ cmd_base; } ;
struct its_cmd_block {scalar_t__* raw_cmd; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct its_node*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static struct its_cmd_block *FUNC_4(struct its_node *VAR_1)
{
 struct its_cmd_block *VAR_2;
 u32 VAR_3 = 1000000;

 while (FUNC_1(VAR_1)) {
  VAR_3--;
  if (!VAR_3) {
   FUNC_2("ITS queue not draining\n");
   return ((void*)0);
  }
  FUNC_0();
  FUNC_3(1);
 }

 VAR_2 = VAR_1->cmd_write++;


 if (VAR_1->cmd_write == (VAR_1->cmd_base + VAR_0))
  VAR_1->cmd_write = VAR_1->cmd_base;


 VAR_2->raw_cmd[0] = 0;
 VAR_2->raw_cmd[1] = 0;
 VAR_2->raw_cmd[2] = 0;
 VAR_2->raw_cmd[3] = 0;

 return VAR_2;
}

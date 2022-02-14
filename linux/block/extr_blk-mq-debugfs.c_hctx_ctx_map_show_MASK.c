
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct blk_mq_hw_ctx {int ctx_map; } ;


 int FUNC_0 (int *,struct seq_file*) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, struct seq_file *VAR_1)
{
 struct blk_mq_hw_ctx *VAR_2 = VAR_0;

 FUNC_0(&VAR_2->ctx_map, VAR_1);
 return 0;
}

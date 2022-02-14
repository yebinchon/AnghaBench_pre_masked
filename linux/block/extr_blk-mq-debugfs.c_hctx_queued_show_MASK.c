
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct blk_mq_hw_ctx {int queued; } ;


 int FUNC_0 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, struct seq_file *VAR_1)
{
 struct blk_mq_hw_ctx *VAR_2 = VAR_0;

 FUNC_0(VAR_1, "%lu\n", VAR_2->queued);
 return 0;
}

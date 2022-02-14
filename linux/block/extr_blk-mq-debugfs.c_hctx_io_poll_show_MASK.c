
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct blk_mq_hw_ctx {int poll_success; int poll_invoked; int poll_considered; } ;


 int FUNC_0 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, struct seq_file *VAR_1)
{
 struct blk_mq_hw_ctx *VAR_2 = VAR_0;

 FUNC_0(VAR_1, "considered=%lu\n", VAR_2->poll_considered);
 FUNC_0(VAR_1, "invoked=%lu\n", VAR_2->poll_invoked);
 FUNC_0(VAR_1, "success=%lu\n", VAR_2->poll_success);
 return 0;
}

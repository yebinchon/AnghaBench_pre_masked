
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct blk_mq_hw_ctx {size_t type; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_2 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_2, struct seq_file *VAR_3)
{
 struct blk_mq_hw_ctx *VAR_4 = VAR_2;

 FUNC_1(FUNC_0(VAR_1) != VAR_0);
 FUNC_2(VAR_3, "%s\n", VAR_1[VAR_4->type]);
 return 0;
}

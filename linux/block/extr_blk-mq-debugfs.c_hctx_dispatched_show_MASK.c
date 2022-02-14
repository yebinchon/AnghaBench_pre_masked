
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct blk_mq_hw_ctx {int * dispatched; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, struct seq_file *VAR_2)
{
 struct blk_mq_hw_ctx *VAR_3 = VAR_1;
 int VAR_4;

 FUNC_0(VAR_2, "%8u\t%lu\n", 0U, VAR_3->dispatched[0]);

 for (VAR_4 = 1; VAR_4 < VAR_0 - 1; VAR_4++) {
  unsigned int VAR_5 = 1U << (VAR_4 - 1);

  FUNC_0(VAR_2, "%8u\t%lu\n", VAR_5, VAR_3->dispatched[VAR_4]);
 }

 FUNC_0(VAR_2, "%8u+\t%lu\n", 1U << (VAR_4 - 1), VAR_3->dispatched[VAR_4]);
 return 0;
}

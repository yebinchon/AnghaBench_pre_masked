
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct blk_mq_hw_ctx {int flags; } ;


 int const FUNC_0 (char**) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int) ;
 char** VAR_0 ;
 int FUNC_3 (struct seq_file*,int,char**,int const) ;
 char** VAR_1 ;
 int FUNC_4 (struct seq_file*,char*,int const) ;
 int FUNC_5 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_6(void *VAR_2, struct seq_file *VAR_3)
{
 struct blk_mq_hw_ctx *VAR_4 = VAR_2;
 const int VAR_5 = FUNC_2(VAR_4->flags);

 FUNC_5(VAR_3, "alloc_policy=");
 if (VAR_5 < FUNC_0(VAR_0) &&
     VAR_0[VAR_5])
  FUNC_5(VAR_3, VAR_0[VAR_5]);
 else
  FUNC_4(VAR_3, "%d", VAR_5);
 FUNC_5(VAR_3, " ");
 FUNC_3(VAR_3,
         VAR_4->flags ^ FUNC_1(VAR_5),
         VAR_1, FUNC_0(VAR_1));
 FUNC_5(VAR_3, "\n");
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct request_queue {int queue_flags; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, struct seq_file *VAR_2)
{
 struct request_queue *VAR_3 = VAR_1;

 FUNC_1(VAR_2, VAR_3->queue_flags, VAR_0,
         FUNC_0(VAR_0));
 FUNC_2(VAR_2, "\n");
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct request_queue {int pm_only; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, struct seq_file *VAR_1)
{
 struct request_queue *VAR_2 = VAR_0;

 FUNC_1(VAR_1, "%d\n", FUNC_0(&VAR_2->pm_only));
 return 0;
}

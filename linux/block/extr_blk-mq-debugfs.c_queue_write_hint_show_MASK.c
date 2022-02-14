
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct request_queue {int * write_hints; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,int,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, struct seq_file *VAR_2)
{
 struct request_queue *VAR_3 = VAR_1;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_0(VAR_2, "hint%d: %llu\n", VAR_4, VAR_3->write_hints[VAR_4]);

 return 0;
}

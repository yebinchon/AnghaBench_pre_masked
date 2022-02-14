
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct request_queue {int * poll_stat; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,int *) ;
 int FUNC_1 (struct seq_file*,char*,int) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, struct seq_file *VAR_2)
{
 struct request_queue *VAR_3 = VAR_1;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < (VAR_0 / 2); VAR_4++) {
  FUNC_1(VAR_2, "read  (%d Bytes): ", 1 << (9 + VAR_4));
  FUNC_0(VAR_2, &VAR_3->poll_stat[2 * VAR_4]);
  FUNC_2(VAR_2, "\n");

  FUNC_1(VAR_2, "write (%d Bytes): ", 1 << (9 + VAR_4));
  FUNC_0(VAR_2, &VAR_3->poll_stat[2 * VAR_4 + 1]);
  FUNC_2(VAR_2, "\n");
 }
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct seq_file*,char*,long,...) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_0, long VAR_1)
{

 if (FUNC_2(VAR_1 >= 1000000)) {

  FUNC_1(VAR_0, "%ld,", VAR_1 / 1000000);
  VAR_1 %= 1000000;
  FUNC_1(VAR_0, "%03ld,%03ld", VAR_1/1000, VAR_1 % 1000);
 } else if (FUNC_0(VAR_1 >= 1000))
  FUNC_1(VAR_0, "%ld,%03ld", VAR_1/1000, VAR_1 % 1000);
 else
  FUNC_1(VAR_0, "%ld", VAR_1);
}

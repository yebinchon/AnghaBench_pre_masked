
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char) ;
 int FUNC_1 (struct seq_file*,char const*) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_0,
 bool VAR_1, char *VAR_2, const char *VAR_3, const char *VAR_4)
{
 if (VAR_1 && VAR_3) {
  FUNC_0(VAR_0, *VAR_2);
  FUNC_1(VAR_0, VAR_3);
  *VAR_2 = '|';
 } else if (!VAR_1 && VAR_4) {
  FUNC_0(VAR_0, *VAR_2);
  FUNC_1(VAR_0, VAR_4);
  *VAR_2 = '|';
 }
}

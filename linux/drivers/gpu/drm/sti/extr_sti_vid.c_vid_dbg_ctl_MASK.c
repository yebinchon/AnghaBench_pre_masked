
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char) ;
 int FUNC_1 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_0, int VAR_1)
{
 VAR_1 = VAR_1 >> 30;
 FUNC_0(VAR_0, '\t');

 if (!(VAR_1 & 1))
  FUNC_1(VAR_0, "NOT ");
 FUNC_1(VAR_0, "ignored on main mixer - ");

 if (!(VAR_1 & 2))
  FUNC_1(VAR_0, "NOT ");
 FUNC_1(VAR_0, "ignored on aux mixer");
}

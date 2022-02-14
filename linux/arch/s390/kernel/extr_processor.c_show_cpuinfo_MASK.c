
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,unsigned long) ;
 int FUNC_1 (struct seq_file*,unsigned long) ;
 int FUNC_2 (struct seq_file*,void*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_1, void *VAR_2)
{
 unsigned long VAR_3 = (unsigned long) VAR_2 - 1;

 if (!VAR_3)
  FUNC_2(VAR_1, VAR_2);
 if (!VAR_0)
  return 0;
 FUNC_0(VAR_1, "\ncpu number      : %ld\n", VAR_3);
 FUNC_1(VAR_1, VAR_3);
 return 0;
}

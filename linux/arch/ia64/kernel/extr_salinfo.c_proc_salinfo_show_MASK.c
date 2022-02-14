
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_1, void *VAR_2)
{
 unsigned long VAR_3 = (unsigned long)VAR_2;
 FUNC_0(VAR_1, (VAR_0 & VAR_3) ? "1\n" : "0\n");
 return 0;
}

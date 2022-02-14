
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
typedef size_t loff_t ;


 int * VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_1, void *VAR_2)
{
 loff_t *VAR_3 = VAR_2;

 FUNC_0(VAR_1, "%s\n", VAR_0[*VAR_3]);
 return 0;
}

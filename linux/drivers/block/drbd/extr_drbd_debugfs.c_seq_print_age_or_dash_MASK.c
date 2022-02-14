
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct seq_file*,char*,...) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_0, bool VAR_1, unsigned long VAR_2)
{
 if (VAR_1)
  FUNC_1(VAR_0, "\t%d", FUNC_0(VAR_2));
 else
  FUNC_1(VAR_0, "\t-");
}

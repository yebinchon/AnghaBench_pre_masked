
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (struct seq_file*,char*,int) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 1; VAR_2 < 8; VAR_2++)
  FUNC_1(VAR_0, "-0x%08X", (int)FUNC_0(VAR_1 + VAR_2 * 4));
}

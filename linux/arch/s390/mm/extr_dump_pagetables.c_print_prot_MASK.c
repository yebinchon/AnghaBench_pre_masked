
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct seq_file*,char*,...) ;
 int FUNC_1 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_3, unsigned int VAR_4, int VAR_5)
{
 static const char * const VAR_6[] =
  { "ASCE", "PGD", "PUD", "PMD", "PTE" };

 FUNC_0(VAR_3, "%s ", VAR_6[VAR_5]);
 if (VAR_4 & VAR_0) {
  FUNC_0(VAR_3, "I\n");
  return;
 }
 FUNC_1(VAR_3, (VAR_4 & VAR_2) ? "RO " : "RW ");
 FUNC_1(VAR_3, (VAR_4 & VAR_1) ? "NX\n" : "X\n");
}

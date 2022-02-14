
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char*,char*,char*) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0, "\t%-24s %s", "HD DAC:",
     VAR_1 & 1 ? "disabled" : "enabled");
}

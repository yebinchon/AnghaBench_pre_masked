
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char*,char const*,char*) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_0, const char *VAR_1,
        bool VAR_2)
{
 FUNC_0(VAR_0, "%-16s : %s\n", VAR_1, VAR_2 ? "yes" : "no");
}

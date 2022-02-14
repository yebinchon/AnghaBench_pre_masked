
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char*,int,int) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0, "\txds:%4d\tyds:%4d", VAR_1 & 0x0FFF, (VAR_1 >> 16) & 0x0FFF);
}

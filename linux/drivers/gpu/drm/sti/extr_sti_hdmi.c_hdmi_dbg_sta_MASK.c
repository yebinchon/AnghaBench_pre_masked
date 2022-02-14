
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct seq_file*,char) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_2, '\t');
 VAR_4 = (VAR_3 & VAR_0);
 FUNC_0("pll:", VAR_4 ? "locked" : "not locked");
 FUNC_2(VAR_2, "\t\t\t\t\t");
 VAR_4 = (VAR_3 & VAR_1);
 FUNC_0("hdmi cable:", VAR_4 ? "connected" : "not connected");
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct seq_file*,char*,int) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_5, void *VAR_6)
{
 FUNC_0(VAR_5, "PMU driver version     : %d\n", VAR_0);
 FUNC_0(VAR_5, "PMU firmware version   : %02x\n", VAR_4);
 FUNC_0(VAR_5, "AC Power               : %d\n",
  ((VAR_3 & VAR_1) != 0) || VAR_2 == 0);
 FUNC_0(VAR_5, "Battery count          : %d\n", VAR_2);

 return 0;
}

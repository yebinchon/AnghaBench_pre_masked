
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,...) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_1, void *VAR_2)
{
 if (VAR_0 == 0)
  FUNC_0(VAR_1, "Power on time not set\n");
 else
  FUNC_0(VAR_1, "%lu\n",VAR_0);
 return 0;
}

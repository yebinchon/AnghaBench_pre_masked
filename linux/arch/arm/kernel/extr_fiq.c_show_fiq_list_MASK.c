
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_3__ {int name; } ;


 TYPE_1__* VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (struct seq_file*,char*,int,char*,int ) ;

int FUNC_1(struct seq_file *VAR_2, int VAR_3)
{
 if (VAR_0 != &VAR_1)
  FUNC_0(VAR_2, "%*s:              %s\n", VAR_3, "FIQ",
   VAR_0->name);

 return 0;
}

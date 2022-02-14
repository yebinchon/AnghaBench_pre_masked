
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {scalar_t__ private; } ;
struct TYPE_2__ {int time_remaining; int voltage; int amperage; int max_charge; int charge; int flags; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,int ) ;
 int FUNC_1 (struct seq_file*,char) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_1, void *VAR_2)
{
 long VAR_3 = (long)VAR_1->private;

 FUNC_1(VAR_1, '\n');
 FUNC_0(VAR_1, "flags      : %08x\n", VAR_0[VAR_3].flags);
 FUNC_0(VAR_1, "charge     : %d\n", VAR_0[VAR_3].charge);
 FUNC_0(VAR_1, "max_charge : %d\n", VAR_0[VAR_3].max_charge);
 FUNC_0(VAR_1, "current    : %d\n", VAR_0[VAR_3].amperage);
 FUNC_0(VAR_1, "voltage    : %d\n", VAR_0[VAR_3].voltage);
 FUNC_0(VAR_1, "time rem.  : %d\n", VAR_0[VAR_3].time_remaining);
 return 0;
}

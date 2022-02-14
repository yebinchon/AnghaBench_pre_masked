
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct cpumask {int dummy; } ;
struct rdtgroup {scalar_t__ mode; struct cpumask cpu_mask; TYPE_2__* plr; } ;
struct kernfs_open_file {int kn; } ;
struct TYPE_4__ {TYPE_1__* d; } ;
struct TYPE_3__ {struct cpumask cpu_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct cpumask*) ;
 scalar_t__ FUNC_1 (struct kernfs_open_file*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 struct rdtgroup* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_7(struct kernfs_open_file *VAR_3,
         struct seq_file *VAR_4, void *VAR_5)
{
 struct rdtgroup *VAR_6;
 struct cpumask *VAR_7;
 int VAR_8 = 0;

 VAR_6 = FUNC_4(VAR_3->kn);

 if (VAR_6) {
  if (VAR_6->mode == VAR_2) {
   if (!VAR_6->plr->d) {
    FUNC_2();
    FUNC_3("Cache domain offline\n");
    VAR_8 = -VAR_0;
   } else {
    VAR_7 = &VAR_6->plr->d->cpu_mask;
    FUNC_6(VAR_4, FUNC_1(VAR_3) ?
        "%*pbl\n" : "%*pb\n",
        FUNC_0(VAR_7));
   }
  } else {
   FUNC_6(VAR_4, FUNC_1(VAR_3) ? "%*pbl\n" : "%*pb\n",
       FUNC_0(&VAR_6->cpu_mask));
  }
 } else {
  VAR_8 = -VAR_1;
 }
 FUNC_5(VAR_3->kn);

 return VAR_8;
}

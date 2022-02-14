
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct mvebu_mbus_state {TYPE_1__* soc; } ;
struct TYPE_2__ {int (* show_cpu_target ) (struct mvebu_mbus_state*,struct seq_file*,void*) ;} ;


 struct mvebu_mbus_state VAR_0 ;
 int FUNC_0 (struct mvebu_mbus_state*,struct seq_file*,void*) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_1, void *VAR_2)
{
 struct mvebu_mbus_state *VAR_3 = &VAR_0;
 return VAR_3->soc->show_cpu_target(VAR_3, VAR_1, VAR_2);
}

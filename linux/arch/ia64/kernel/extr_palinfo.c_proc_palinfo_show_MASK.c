
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {int private; } ;
struct TYPE_4__ {scalar_t__ req_cpu; size_t func_id; } ;
typedef TYPE_1__ pal_func_cpu_u_t ;
struct TYPE_5__ {int (* proc_read ) (struct seq_file*) ;} ;


 scalar_t__ FUNC_0 () ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 (struct seq_file*,TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct seq_file*) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_1, void *VAR_2)
{
 pal_func_cpu_u_t *VAR_3 = (pal_func_cpu_u_t *)&VAR_1->private;





 if (VAR_3->req_cpu == FUNC_0())
  (*VAR_0[VAR_3->func_id].proc_read)(VAR_1);
 else
  FUNC_1(VAR_1, VAR_3);

 FUNC_2();
 return 0;
}

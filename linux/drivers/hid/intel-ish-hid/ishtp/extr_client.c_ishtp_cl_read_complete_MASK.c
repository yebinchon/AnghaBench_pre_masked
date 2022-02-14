
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ishtp_cl_rb {int list; struct ishtp_cl* cl; } ;
struct TYPE_2__ {int list; } ;
struct ishtp_cl {int device; int in_process_spinlock; TYPE_1__ in_process_list; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct ishtp_cl_rb *VAR_0)
{
 unsigned long VAR_1;
 int VAR_2 = 0;
 struct ishtp_cl *VAR_3 = VAR_0->cl;

 FUNC_3(&VAR_3->in_process_spinlock, VAR_1);




 VAR_2 = FUNC_2(&VAR_3->in_process_list.list);
 FUNC_1(&VAR_0->list, &VAR_3->in_process_list.list);
 FUNC_4(&VAR_3->in_process_spinlock, VAR_1);

 if (VAR_2)
  FUNC_0(VAR_3->device);
}

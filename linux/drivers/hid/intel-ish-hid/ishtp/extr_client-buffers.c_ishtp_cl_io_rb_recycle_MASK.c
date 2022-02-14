
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ishtp_cl_rb {int list; struct ishtp_cl* cl; } ;
struct TYPE_2__ {int list; } ;
struct ishtp_cl {int out_flow_ctrl_creds; int free_list_spinlock; TYPE_1__ free_rb_list; } ;


 int VAR_0 ;
 int FUNC_0 (struct ishtp_cl*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct ishtp_cl_rb *VAR_1)
{
 struct ishtp_cl *VAR_2;
 int VAR_3 = 0;
 unsigned long VAR_4;

 if (!VAR_1 || !VAR_1->cl)
  return -VAR_0;

 VAR_2 = VAR_1->cl;
 FUNC_2(&VAR_2->free_list_spinlock, VAR_4);
 FUNC_1(&VAR_1->list, &VAR_2->free_rb_list.list);
 FUNC_3(&VAR_2->free_list_spinlock, VAR_4);





 if (!VAR_2->out_flow_ctrl_creds)
  VAR_3 = FUNC_0(VAR_2);

 return VAR_3;
}

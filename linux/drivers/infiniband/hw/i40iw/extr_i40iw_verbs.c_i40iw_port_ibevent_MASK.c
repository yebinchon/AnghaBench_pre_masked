
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int port_num; } ;
struct ib_event {int event; TYPE_1__ element; int * device; } ;
struct i40iw_ib_device {int ibdev; } ;
struct i40iw_device {scalar_t__ iw_status; struct i40iw_ib_device* iwibdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ib_event*) ;

void FUNC_1(struct i40iw_device *VAR_2)
{
 struct i40iw_ib_device *VAR_3 = VAR_2->iwibdev;
 struct ib_event VAR_4;

 VAR_4.device = &VAR_3->ibdev;
 VAR_4.element.port_num = 1;
 VAR_4.event = VAR_2->iw_status ? VAR_0 : VAR_1;
 FUNC_0(&VAR_4);
}

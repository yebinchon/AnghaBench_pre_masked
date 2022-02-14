
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int port_num; } ;
struct ib_event {TYPE_3__ element; int * device; int event; } ;
struct TYPE_4__ {int ibdev; } ;
struct TYPE_5__ {TYPE_1__ rdi; } ;
struct hfi1_devdata {TYPE_2__ verbs_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_event*) ;

void FUNC_1(struct hfi1_devdata *VAR_1, u8 VAR_2)
{
 struct ib_event VAR_3;

 VAR_3.event = VAR_0;
 VAR_3.device = &VAR_1->verbs_dev.rdi.ibdev;
 VAR_3.element.port_num = VAR_2;
 FUNC_0(&VAR_3);
}

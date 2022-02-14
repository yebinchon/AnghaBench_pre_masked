
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct srpt_port {int work; int sm_lid; int lid; } ;
struct srpt_device {TYPE_2__* device; struct srpt_port* port; } ;
struct ib_event_handler {int dummy; } ;
struct TYPE_3__ {int port_num; } ;
struct ib_event {int event; TYPE_1__ element; TYPE_2__* device; } ;
struct TYPE_4__ {size_t phys_port_cnt; int dev; } ;
 int FUNC_0 (int,char*,int,int ,size_t) ;
 int FUNC_1 (int *) ;
 struct srpt_device* FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (char*,int,int ) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_6(struct ib_event_handler *VAR_1,
          struct ib_event *VAR_2)
{
 struct srpt_device *VAR_3;
 struct srpt_port *VAR_4;
 u8 VAR_5;

 VAR_3 = FUNC_2(VAR_2->device, &VAR_0);
 if (!VAR_3 || VAR_3->device != VAR_2->device)
  return;

 FUNC_3("ASYNC event= %d on device= %s\n", VAR_2->event,
   FUNC_1(&VAR_3->device->dev));

 switch (VAR_2->event) {
 case 129:
  VAR_5 = VAR_2->element.port_num - 1;
  if (VAR_5 < VAR_3->device->phys_port_cnt) {
   VAR_4 = &VAR_3->port[VAR_5];
   VAR_4->lid = 0;
   VAR_4->sm_lid = 0;
  } else {
   FUNC_0(1, "event %d: port_num %d out of range 1..%d\n",
        VAR_2->event, VAR_5 + 1,
        VAR_3->device->phys_port_cnt);
  }
  break;
 case 130:
 case 132:
 case 131:
 case 128:
 case 134:
 case 133:

  VAR_5 = VAR_2->element.port_num - 1;
  if (VAR_5 < VAR_3->device->phys_port_cnt) {
   VAR_4 = &VAR_3->port[VAR_5];
   if (!VAR_4->lid && !VAR_4->sm_lid)
    FUNC_5(&VAR_4->work);
  } else {
   FUNC_0(1, "event %d: port_num %d out of range 1..%d\n",
        VAR_2->event, VAR_5 + 1,
        VAR_3->device->phys_port_cnt);
  }
  break;
 default:
  FUNC_4("received unrecognized IB event %d\n", VAR_2->event);
  break;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vfid; int chipid; } ;
union mbox_msg {scalar_t__ type; scalar_t__ value; TYPE_1__ id; int data; } ;
struct TYPE_4__ {int opcode; scalar_t__ value; int data; } ;
struct nitrox_vfdev {int mbx_resp; TYPE_2__ msg; int ring; int state; int nr_queues; int vfno; } ;
struct nitrox_device {int idx; int mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct nitrox_device*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(struct nitrox_device *VAR_4,
    struct nitrox_vfdev *VAR_5)
{
 union mbox_msg VAR_6;

 VAR_6.value = VAR_5->msg.value;

 switch (VAR_5->msg.opcode) {
 case 129:
  VAR_6.data = VAR_4->mode;
  break;
 case 128:
  VAR_5->nr_queues = VAR_5->msg.data;
  FUNC_1(&VAR_5->state, VAR_3);
  break;
 case 131:
  VAR_6.id.chipid = VAR_4->idx;
  VAR_6.id.vfid = VAR_5->vfno;
  break;
 case 130:
  VAR_5->nr_queues = 0;
  FUNC_1(&VAR_5->state, VAR_2);
  break;
 default:
  VAR_6.type = VAR_1;
  break;
 }

 if (VAR_6.type == VAR_1)
  return;


 VAR_6.type = VAR_0;
 FUNC_2(VAR_4, VAR_6.value, VAR_5->ring);

 VAR_5->msg.value = 0;
 FUNC_0(&VAR_5->mbx_resp);
}

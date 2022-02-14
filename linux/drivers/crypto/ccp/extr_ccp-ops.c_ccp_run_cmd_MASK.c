
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ccp_cmd_queue {TYPE_3__* ccp; int free_slots; scalar_t__ int_rcvd; scalar_t__ cmd_error; } ;
struct TYPE_9__ {int mode; } ;
struct TYPE_10__ {TYPE_4__ aes; } ;
struct ccp_cmd {int engine; int flags; TYPE_5__ u; scalar_t__ engine_error; } ;
struct TYPE_8__ {TYPE_2__* vdata; } ;
struct TYPE_7__ {TYPE_1__* perform; } ;
struct TYPE_6__ {int (* get_free_slots ) (struct ccp_cmd_queue*) ;} ;




 int VAR_0 ;







 int VAR_1 ;
 int FUNC_0 (struct ccp_cmd_queue*,struct ccp_cmd*) ;
 int FUNC_1 (struct ccp_cmd_queue*,struct ccp_cmd*) ;
 int FUNC_2 (struct ccp_cmd_queue*,struct ccp_cmd*) ;
 int FUNC_3 (struct ccp_cmd_queue*,struct ccp_cmd*) ;
 int FUNC_4 (struct ccp_cmd_queue*,struct ccp_cmd*) ;
 int FUNC_5 (struct ccp_cmd_queue*,struct ccp_cmd*) ;
 int FUNC_6 (struct ccp_cmd_queue*,struct ccp_cmd*) ;
 int FUNC_7 (struct ccp_cmd_queue*,struct ccp_cmd*) ;
 int FUNC_8 (struct ccp_cmd_queue*,struct ccp_cmd*) ;
 int FUNC_9 (struct ccp_cmd_queue*,struct ccp_cmd*) ;
 int FUNC_10 (struct ccp_cmd_queue*) ;

int FUNC_11(struct ccp_cmd_queue *VAR_2, struct ccp_cmd *VAR_3)
{
 int VAR_4;

 VAR_3->engine_error = 0;
 VAR_2->cmd_error = 0;
 VAR_2->int_rcvd = 0;
 VAR_2->free_slots = VAR_2->ccp->vdata->perform->get_free_slots(VAR_2);

 switch (VAR_3->engine) {
 case 134:
  switch (VAR_3->u.aes.mode) {
  case 136:
   VAR_4 = FUNC_0(VAR_2, VAR_3);
   break;
  case 135:
   VAR_4 = FUNC_2(VAR_2, VAR_3);
   break;
  default:
   VAR_4 = FUNC_1(VAR_2, VAR_3);
   break;
  }
  break;
 case 128:
  VAR_4 = FUNC_9(VAR_2, VAR_3);
  break;
 case 133:
  VAR_4 = FUNC_3(VAR_2, VAR_3);
  break;
 case 129:
  VAR_4 = FUNC_8(VAR_2, VAR_3);
  break;
 case 130:
  VAR_4 = FUNC_7(VAR_2, VAR_3);
  break;
 case 131:
  if (VAR_3->flags & VAR_0)
   VAR_4 = FUNC_6(VAR_2, VAR_3);
  else
   VAR_4 = FUNC_5(VAR_2, VAR_3);
  break;
 case 132:
  VAR_4 = FUNC_4(VAR_2, VAR_3);
  break;
 default:
  VAR_4 = -VAR_1;
 }

 return VAR_4;
}

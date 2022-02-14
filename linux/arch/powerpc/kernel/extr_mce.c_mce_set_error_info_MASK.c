
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_18__ {int link_error_type; int ra_error_type; int user_error_type; int tlb_error_type; int erat_error_type; int slb_error_type; int ue_error_type; } ;
struct mce_error_info {int error_type; TYPE_9__ u; } ;
struct TYPE_16__ {int link_error_type; } ;
struct TYPE_15__ {int ra_error_type; } ;
struct TYPE_14__ {int user_error_type; } ;
struct TYPE_13__ {int tlb_error_type; } ;
struct TYPE_12__ {int erat_error_type; } ;
struct TYPE_11__ {int slb_error_type; } ;
struct TYPE_10__ {int ue_error_type; } ;
struct TYPE_17__ {TYPE_7__ link_error; TYPE_6__ ra_error; TYPE_5__ user_error; TYPE_4__ tlb_error; TYPE_3__ erat_error; TYPE_2__ slb_error; TYPE_1__ ue_error; } ;
struct machine_check_event {int error_type; TYPE_8__ u; } ;
__attribute__((used)) static void FUNC_0(struct machine_check_event *VAR_0,
          struct mce_error_info *VAR_1)
{
 VAR_0->error_type = VAR_1->error_type;
 switch (VAR_1->error_type) {
 case 130:
  VAR_0->u.ue_error.ue_error_type = VAR_1->u.ue_error_type;
  break;
 case 132:
  VAR_0->u.slb_error.slb_error_type = VAR_1->u.slb_error_type;
  break;
 case 135:
  VAR_0->u.erat_error.erat_error_type = VAR_1->u.erat_error_type;
  break;
 case 131:
  VAR_0->u.tlb_error.tlb_error_type = VAR_1->u.tlb_error_type;
  break;
 case 128:
  VAR_0->u.user_error.user_error_type = VAR_1->u.user_error_type;
  break;
 case 133:
  VAR_0->u.ra_error.ra_error_type = VAR_1->u.ra_error_type;
  break;
 case 134:
  VAR_0->u.link_error.link_error_type = VAR_1->u.link_error_type;
  break;
 case 129:
 default:
  break;
 }
}

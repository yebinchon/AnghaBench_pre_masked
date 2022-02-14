
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int dlid; } ;
struct ib_qp_attr {void* path_mig_state; TYPE_4__ alt_ah_attr; int alt_timeout; int alt_pkey_index; int alt_port_num; int timeout; int max_rd_atomic; int rnr_retry; int retry_cnt; int sq_psn; } ;
struct TYPE_10__ {TYPE_4__ ah_attr; int timeout; int pkey_index; TYPE_3__* port; } ;
struct TYPE_7__ {int timeout; } ;
struct TYPE_6__ {int state; int lap_state; } ;
struct cm_id_private {int lock; TYPE_5__ alt_av; TYPE_2__ av; int initiator_depth; int rnr_retry_count; int retry_count; int qp_type; int sq_psn; TYPE_1__ id; } ;
struct TYPE_8__ {int port_num; } ;


 int VAR_0 ;

 int VAR_1 ;






 void* VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct cm_id_private *VAR_11,
          struct ib_qp_attr *VAR_12,
          int *VAR_13)
{
 unsigned long VAR_14;
 int VAR_15;

 FUNC_1(&VAR_11->lock, VAR_14);
 switch (VAR_11->id.state) {

 case 131:
 case 134:

 case 133:
 case 135:
 case 132:
 case 136:
 case 137:
  if (VAR_11->id.lap_state == VAR_1) {
   *VAR_13 = VAR_9 | VAR_8;
   VAR_12->sq_psn = FUNC_0(VAR_11->sq_psn);
   switch (VAR_11->qp_type) {
   case 130:
   case 129:
    *VAR_13 |= VAR_6 | VAR_7 |
       VAR_4;
    VAR_12->retry_cnt = VAR_11->retry_count;
    VAR_12->rnr_retry = VAR_11->rnr_retry_count;
    VAR_12->max_rd_atomic = VAR_11->initiator_depth;

   case 128:
    *VAR_13 |= VAR_10;
    VAR_12->timeout = VAR_11->av.timeout;
    break;
   default:
    break;
   }
   if (VAR_11->alt_av.ah_attr.dlid) {
    *VAR_13 |= VAR_5;
    VAR_12->path_mig_state = VAR_2;
   }
  } else {
   *VAR_13 = VAR_3 | VAR_5;
   VAR_12->alt_port_num = VAR_11->alt_av.port->port_num;
   VAR_12->alt_pkey_index = VAR_11->alt_av.pkey_index;
   VAR_12->alt_timeout = VAR_11->alt_av.timeout;
   VAR_12->alt_ah_attr = VAR_11->alt_av.ah_attr;
   VAR_12->path_mig_state = VAR_2;
  }
  VAR_15 = 0;
  break;
 default:
  VAR_15 = -VAR_0;
  break;
 }
 FUNC_2(&VAR_11->lock, VAR_14);
 return VAR_15;
}

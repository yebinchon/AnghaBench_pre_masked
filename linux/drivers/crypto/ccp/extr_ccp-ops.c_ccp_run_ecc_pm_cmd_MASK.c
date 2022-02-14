
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_18__ ;
typedef struct TYPE_26__ TYPE_17__ ;
typedef struct TYPE_25__ TYPE_16__ ;
typedef struct TYPE_24__ TYPE_15__ ;
typedef struct TYPE_23__ TYPE_14__ ;
typedef struct TYPE_22__ TYPE_13__ ;
typedef struct TYPE_21__ TYPE_12__ ;
typedef struct TYPE_20__ TYPE_11__ ;
typedef struct TYPE_19__ TYPE_10__ ;


typedef int u8 ;
struct TYPE_35__ {scalar_t__ function; } ;
struct TYPE_36__ {TYPE_8__ ecc; } ;
struct TYPE_32__ {int length; scalar_t__ offset; int address; } ;
struct TYPE_33__ {TYPE_5__ dma; } ;
struct TYPE_34__ {TYPE_6__ u; } ;
struct TYPE_28__ {int length; scalar_t__ offset; int address; } ;
struct TYPE_29__ {TYPE_1__ dma; } ;
struct TYPE_30__ {TYPE_2__ u; } ;
struct ccp_op {int soc; TYPE_9__ u; TYPE_7__ dst; TYPE_3__ src; int jobid; struct ccp_cmd_queue* cmd_q; } ;
struct TYPE_24__ {scalar_t__ x_len; scalar_t__ y_len; int y; int x; } ;
struct TYPE_23__ {scalar_t__ x_len; scalar_t__ y_len; int y; int x; } ;
struct TYPE_22__ {scalar_t__ x_len; scalar_t__ y_len; int y; int x; } ;
struct TYPE_25__ {scalar_t__ domain_a_len; scalar_t__ scalar_len; TYPE_15__ result; int scalar; int domain_a; TYPE_14__ point_2; TYPE_13__ point_1; } ;
struct TYPE_26__ {TYPE_16__ pm; } ;
struct ccp_ecc_engine {scalar_t__ function; scalar_t__ mod_len; int ecc_result; TYPE_17__ u; int mod; } ;
struct TYPE_31__ {int address; } ;
struct ccp_dm_workarea {int* address; int length; TYPE_4__ dma; } ;
struct ccp_cmd_queue {int cmd_error; TYPE_18__* ccp; } ;
struct TYPE_21__ {struct ccp_ecc_engine ecc; } ;
struct ccp_cmd {int engine_error; TYPE_12__ u; } ;
typedef int op ;
typedef int __le16 ;
struct TYPE_27__ {TYPE_11__* vdata; } ;
struct TYPE_20__ {TYPE_10__* perform; } ;
struct TYPE_19__ {int (* ecc ) (struct ccp_op*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_18__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct ccp_dm_workarea*) ;
 int FUNC_2 (struct ccp_dm_workarea*,struct ccp_cmd_queue*,int ,int ) ;
 int FUNC_3 (struct ccp_dm_workarea*,int ,int ,int ,scalar_t__) ;
 int FUNC_4 (struct ccp_dm_workarea*,int ,int ,int ,scalar_t__) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (struct ccp_op*,int ,int) ;
 int FUNC_7 (struct ccp_op*) ;

__attribute__((used)) static int FUNC_8(struct ccp_cmd_queue *VAR_13, struct ccp_cmd *VAR_14)
{
 struct ccp_ecc_engine *VAR_15 = &VAR_14->u.ecc;
 struct ccp_dm_workarea VAR_16, VAR_17;
 struct ccp_op VAR_18;
 int VAR_19;
 u8 *VAR_20;

 if (!VAR_15->u.pm.point_1.x ||
     (VAR_15->u.pm.point_1.x_len > VAR_3) ||
     !VAR_15->u.pm.point_1.y ||
     (VAR_15->u.pm.point_1.y_len > VAR_3))
  return -VAR_11;

 if (VAR_15->function == VAR_1) {
  if (!VAR_15->u.pm.point_2.x ||
      (VAR_15->u.pm.point_2.x_len > VAR_3) ||
      !VAR_15->u.pm.point_2.y ||
      (VAR_15->u.pm.point_2.y_len > VAR_3))
   return -VAR_11;
 } else {
  if (!VAR_15->u.pm.domain_a ||
      (VAR_15->u.pm.domain_a_len > VAR_3))
   return -VAR_11;

  if (VAR_15->function == VAR_2)
   if (!VAR_15->u.pm.scalar ||
       (VAR_15->u.pm.scalar_len > VAR_3))
    return -VAR_11;
 }

 if (!VAR_15->u.pm.result.x ||
     (VAR_15->u.pm.result.x_len < VAR_3) ||
     !VAR_15->u.pm.result.y ||
     (VAR_15->u.pm.result.y_len < VAR_3))
  return -VAR_11;

 FUNC_6(&VAR_18, 0, sizeof(VAR_18));
 VAR_18.cmd_q = VAR_13;
 VAR_18.jobid = FUNC_0(VAR_13->ccp);






 VAR_19 = FUNC_2(&VAR_16, VAR_13, VAR_8,
       VAR_10);
 if (VAR_19)
  return VAR_19;




 VAR_20 = VAR_16.address;


 VAR_19 = FUNC_4(&VAR_16, 0, VAR_15->mod, 0, VAR_15->mod_len);
 if (VAR_19)
  goto e_src;
 VAR_16.address += VAR_4;


 VAR_19 = FUNC_4(&VAR_16, 0, VAR_15->u.pm.point_1.x, 0,
          VAR_15->u.pm.point_1.x_len);
 if (VAR_19)
  goto e_src;
 VAR_16.address += VAR_4;
 VAR_19 = FUNC_4(&VAR_16, 0, VAR_15->u.pm.point_1.y, 0,
          VAR_15->u.pm.point_1.y_len);
 if (VAR_19)
  goto e_src;
 VAR_16.address += VAR_4;


 *VAR_16.address = 0x01;
 VAR_16.address += VAR_4;

 if (VAR_15->function == VAR_1) {

  VAR_19 = FUNC_4(&VAR_16, 0, VAR_15->u.pm.point_2.x, 0,
           VAR_15->u.pm.point_2.x_len);
  if (VAR_19)
   goto e_src;
  VAR_16.address += VAR_4;
  VAR_19 = FUNC_4(&VAR_16, 0, VAR_15->u.pm.point_2.y, 0,
           VAR_15->u.pm.point_2.y_len);
  if (VAR_19)
   goto e_src;
  VAR_16.address += VAR_4;


  *VAR_16.address = 0x01;
  VAR_16.address += VAR_4;
 } else {

  VAR_19 = FUNC_4(&VAR_16, 0, VAR_15->u.pm.domain_a, 0,
           VAR_15->u.pm.domain_a_len);
  if (VAR_19)
   goto e_src;
  VAR_16.address += VAR_4;

  if (VAR_15->function == VAR_2) {

   VAR_19 = FUNC_4(&VAR_16, 0,
            VAR_15->u.pm.scalar, 0,
            VAR_15->u.pm.scalar_len);
   if (VAR_19)
    goto e_src;
   VAR_16.address += VAR_4;
  }
 }


 VAR_16.address = VAR_20;


 VAR_19 = FUNC_2(&VAR_17, VAR_13, VAR_0,
       VAR_9);
 if (VAR_19)
  goto e_src;

 VAR_18.soc = 1;
 VAR_18.src.u.dma.address = VAR_16.dma.address;
 VAR_18.src.u.dma.offset = 0;
 VAR_18.src.u.dma.length = VAR_16.length;
 VAR_18.dst.u.dma.address = VAR_17.dma.address;
 VAR_18.dst.u.dma.offset = 0;
 VAR_18.dst.u.dma.length = VAR_17.length;

 VAR_18.u.ecc.function = VAR_14->u.ecc.function;

 VAR_19 = VAR_13->ccp->vdata->perform->ecc(&VAR_18);
 if (VAR_19) {
  VAR_14->engine_error = VAR_13->cmd_error;
  goto e_dst;
 }

 VAR_15->ecc_result = FUNC_5(
  (const __le16 *)(VAR_17.address + VAR_6));
 if (!(VAR_15->ecc_result & VAR_7)) {
  VAR_19 = -VAR_12;
  goto e_dst;
 }




 VAR_20 = VAR_17.address;


 FUNC_3(&VAR_17, 0, VAR_15->u.pm.result.x, 0,
    VAR_3);
 VAR_17.address += VAR_5;
 FUNC_3(&VAR_17, 0, VAR_15->u.pm.result.y, 0,
    VAR_3);
 VAR_17.address += VAR_5;


 VAR_17.address = VAR_20;

e_dst:
 FUNC_1(&VAR_17);

e_src:
 FUNC_1(&VAR_16);

 return VAR_19;
}

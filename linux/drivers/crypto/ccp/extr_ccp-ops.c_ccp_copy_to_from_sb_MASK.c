
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef void* u32 ;
struct TYPE_23__ {void* byte_swap; } ;
struct TYPE_24__ {TYPE_8__ passthru; } ;
struct TYPE_16__ {int length; int address; } ;
struct TYPE_21__ {void* sb; TYPE_1__ dma; } ;
struct TYPE_22__ {TYPE_6__ u; void* type; } ;
struct TYPE_18__ {int length; int address; } ;
struct TYPE_19__ {TYPE_3__ dma; void* sb; } ;
struct TYPE_20__ {TYPE_4__ u; void* type; } ;
struct ccp_op {int eom; int soc; TYPE_9__ u; TYPE_7__ dst; TYPE_5__ src; void* jobid; struct ccp_cmd_queue* cmd_q; } ;
struct TYPE_17__ {int address; } ;
struct ccp_dm_workarea {int length; TYPE_2__ dma; } ;
struct ccp_cmd_queue {TYPE_12__* ccp; } ;
typedef int op ;
struct TYPE_15__ {TYPE_11__* vdata; } ;
struct TYPE_14__ {TYPE_10__* perform; } ;
struct TYPE_13__ {int (* passthru ) (struct ccp_op*) ;} ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct ccp_op*,int ,int) ;
 int FUNC_1 (struct ccp_op*) ;

__attribute__((used)) static int FUNC_2(struct ccp_cmd_queue *VAR_2,
          struct ccp_dm_workarea *VAR_3, u32 VAR_4, u32 VAR_5,
          u32 VAR_6, bool VAR_7)
{
 struct ccp_op VAR_8;

 FUNC_0(&VAR_8, 0, sizeof(VAR_8));

 VAR_8.cmd_q = VAR_2;
 VAR_8.jobid = VAR_4;
 VAR_8.eom = 1;

 if (VAR_7) {
  VAR_8.soc = 1;
  VAR_8.src.type = VAR_0;
  VAR_8.src.u.sb = VAR_5;
  VAR_8.dst.type = VAR_1;
  VAR_8.dst.u.dma.address = VAR_3->dma.address;
  VAR_8.dst.u.dma.length = VAR_3->length;
 } else {
  VAR_8.src.type = VAR_1;
  VAR_8.src.u.dma.address = VAR_3->dma.address;
  VAR_8.src.u.dma.length = VAR_3->length;
  VAR_8.dst.type = VAR_0;
  VAR_8.dst.u.sb = VAR_5;
 }

 VAR_8.u.passthru.byte_swap = VAR_6;

 return VAR_2->ccp->vdata->perform->passthru(&VAR_8);
}

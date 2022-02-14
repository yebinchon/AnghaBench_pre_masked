
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


typedef int u8 ;
typedef scalar_t__ u64 ;
struct TYPE_23__ {int ctxl; int arg; int ctxc; } ;
struct TYPE_24__ {TYPE_8__ s; } ;
struct se_crypto_request {int gph; int opcode; TYPE_9__ ctrl; scalar_t__ ctx_handle; int comp; int orh; int gfp; int flags; } ;
struct TYPE_16__ {void* rptr; int ssz; } ;
struct TYPE_17__ {TYPE_1__ s; void** value; } ;
struct TYPE_13__ {int ctxl; void* ctxp; int opcode; int arg; int ctxc; scalar_t__ destport; int uddl; } ;
struct TYPE_14__ {TYPE_10__ s; void** value; } ;
struct TYPE_20__ {int g; scalar_t__ fsz; scalar_t__ tlen; int ssz; int gsz; } ;
struct TYPE_22__ {void* value; TYPE_5__ s; } ;
struct TYPE_15__ {scalar_t__* fdata; TYPE_2__ slc; TYPE_11__ irh; TYPE_7__ ih; void* dptr0; } ;
struct TYPE_19__ {void* sgcomp_dma; int sgmap_cnt; } ;
struct TYPE_21__ {scalar_t__ total_bytes; int sgmap_cnt; void* sgcomp_dma; } ;
struct TYPE_18__ {int completion; int orh; } ;
struct nitrox_softreq {TYPE_12__ instr; TYPE_4__ out; TYPE_6__ in; int * cmdq; TYPE_3__ resp; int status; void* cb_arg; int callback; int gfp; int flags; struct nitrox_device* ndev; } ;
struct nitrox_device {int nr_queues; int * pkt_inq; } ;
struct gphdr {int dummy; } ;
struct ctx_hdr {void* ctx_dma; } ;
typedef void* dma_addr_t ;
typedef int completion_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,int ) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (struct nitrox_softreq*) ;
 struct nitrox_softreq* FUNC_3 (int,int ) ;
 int FUNC_4 (struct nitrox_softreq*) ;
 int FUNC_5 (struct nitrox_device*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct nitrox_softreq*) ;
 int FUNC_8 (struct nitrox_softreq*,struct se_crypto_request*) ;

int FUNC_9(struct nitrox_device *VAR_7,
         struct se_crypto_request *VAR_8,
         completion_t VAR_9,
         void *VAR_10)
{
 struct nitrox_softreq *VAR_11;
 dma_addr_t VAR_12 = 0;
 int VAR_13, VAR_14 = 0;

 if (!FUNC_5(VAR_7))
  return -VAR_0;

 VAR_11 = FUNC_3(sizeof(*VAR_11), VAR_8->gfp);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->ndev = VAR_7;
 VAR_11->flags = VAR_8->flags;
 VAR_11->gfp = VAR_8->gfp;
 VAR_11->callback = VAR_9;
 VAR_11->cb_arg = VAR_10;

 FUNC_0(&VAR_11->status, VAR_5);

 VAR_11->resp.orh = VAR_8->orh;
 VAR_11->resp.completion = VAR_8->comp;

 VAR_14 = FUNC_8(VAR_11, VAR_8);
 if (VAR_14) {
  FUNC_2(VAR_11);
  return VAR_14;
 }


 if (VAR_8->ctx_handle) {
  struct ctx_hdr *VAR_15;
  u8 *VAR_16;

  VAR_16 = (u8 *)(uintptr_t)VAR_8->ctx_handle;
  VAR_15 = (struct ctx_hdr *)(VAR_16 - sizeof(struct ctx_hdr));
  VAR_12 = VAR_15->ctx_dma;
 }


 VAR_13 = FUNC_6() % VAR_7->nr_queues;

 VAR_11->cmdq = &VAR_7->pkt_inq[VAR_13];
 VAR_11->instr.dptr0 = FUNC_1(VAR_11->in.sgcomp_dma);


 VAR_11->instr.ih.value = 0;
 VAR_11->instr.ih.s.g = 1;
 VAR_11->instr.ih.s.gsz = VAR_11->in.sgmap_cnt;
 VAR_11->instr.ih.s.ssz = VAR_11->out.sgmap_cnt;
 VAR_11->instr.ih.s.fsz = VAR_3 + sizeof(struct gphdr);
 VAR_11->instr.ih.s.tlen = VAR_11->instr.ih.s.fsz + VAR_11->in.total_bytes;
 VAR_11->instr.ih.value = FUNC_1(VAR_11->instr.ih.value);


 VAR_11->instr.irh.value[0] = 0;
 VAR_11->instr.irh.s.uddl = VAR_4;

 VAR_11->instr.irh.s.ctxl = (VAR_8->ctrl.s.ctxl / 8);

 VAR_11->instr.irh.s.destport = VAR_6 + VAR_13;
 VAR_11->instr.irh.s.ctxc = VAR_8->ctrl.s.ctxc;
 VAR_11->instr.irh.s.arg = VAR_8->ctrl.s.arg;
 VAR_11->instr.irh.s.opcode = VAR_8->opcode;
 VAR_11->instr.irh.value[0] = FUNC_1(VAR_11->instr.irh.value[0]);


 VAR_11->instr.irh.s.ctxp = FUNC_1(VAR_12);


 VAR_11->instr.slc.value[0] = 0;
 VAR_11->instr.slc.s.ssz = VAR_11->out.sgmap_cnt;
 VAR_11->instr.slc.value[0] = FUNC_1(VAR_11->instr.slc.value[0]);


 VAR_11->instr.slc.s.rptr = FUNC_1(VAR_11->out.sgcomp_dma);






 VAR_11->instr.fdata[0] = *((u64 *)&VAR_8->gph);
 VAR_11->instr.fdata[1] = 0;

 VAR_14 = FUNC_4(VAR_11);
 if (VAR_14 == -VAR_2)
  goto send_fail;

 return VAR_14;

send_fail:
 FUNC_7(VAR_11);
 return VAR_14;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_8__ {TYPE_2__* sge; } ;
struct TYPE_9__ {TYPE_3__ nonemb_req; } ;
struct TYPE_6__ {int pyld_len; int spcl_sge_cnt_emb; } ;
struct ocrdma_rdma_stats_resp {int reset_stats; TYPE_4__ u; TYPE_1__ hdr; } ;
struct ocrdma_rdma_stats_req {int reset_stats; TYPE_4__ u; TYPE_1__ hdr; } ;
struct ocrdma_mqe {int reset_stats; TYPE_4__ u; TYPE_1__ hdr; } ;
struct ocrdma_mbx_hdr {int dummy; } ;
struct TYPE_10__ {int size; int pa; struct ocrdma_rdma_stats_resp* va; struct ocrdma_rdma_stats_resp mqe; } ;
struct ocrdma_dev {TYPE_5__ stats_mem; } ;
struct TYPE_7__ {int len; void* pa_hi; void* pa_lo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ocrdma_rdma_stats_resp*) ;
 struct ocrdma_rdma_stats_resp* FUNC_1 (int,int ) ;
 int FUNC_2 (struct ocrdma_rdma_stats_resp*,struct ocrdma_rdma_stats_resp*,int) ;
 int FUNC_3 (struct ocrdma_rdma_stats_resp*,int ,int) ;
 int FUNC_4 (struct ocrdma_mbx_hdr*,int ,int ,int) ;
 int FUNC_5 (struct ocrdma_rdma_stats_resp*,int) ;
 int FUNC_6 (struct ocrdma_dev*,struct ocrdma_rdma_stats_resp*,struct ocrdma_rdma_stats_resp*) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(struct ocrdma_dev *VAR_6, bool VAR_7)
{
 struct ocrdma_rdma_stats_req *VAR_8 = VAR_6->stats_mem.va;
 struct ocrdma_mqe *VAR_9 = &VAR_6->stats_mem.mqe;
 struct ocrdma_rdma_stats_resp *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_1);
 if (VAR_10 == ((void*)0))
  return -VAR_0;

 FUNC_3(VAR_9, 0, sizeof(*VAR_9));
 VAR_9->hdr.pyld_len = VAR_6->stats_mem.size;
 VAR_9->hdr.spcl_sge_cnt_emb |=
   (1 << VAR_4) &
    VAR_3;
 VAR_9->u.nonemb_req.sge[0].pa_lo = (u32) (VAR_6->stats_mem.pa & 0xffffffff);
 VAR_9->u.nonemb_req.sge[0].pa_hi = (u32) FUNC_7(VAR_6->stats_mem.pa);
 VAR_9->u.nonemb_req.sge[0].len = VAR_6->stats_mem.size;


 FUNC_2(VAR_10, VAR_8, sizeof(struct ocrdma_rdma_stats_resp));
 FUNC_3(VAR_8, 0, VAR_6->stats_mem.size);

 FUNC_4((struct ocrdma_mbx_hdr *)VAR_8,
   VAR_2,
   VAR_5,
   VAR_6->stats_mem.size);
 if (VAR_7)
  VAR_8->reset_stats = VAR_7;

 VAR_11 = FUNC_6(VAR_6, VAR_9, VAR_6->stats_mem.va);
 if (VAR_11)

  FUNC_2(VAR_8, VAR_10, sizeof(struct ocrdma_rdma_stats_resp));
 else
  FUNC_5(VAR_8, VAR_6->stats_mem.size);

 FUNC_0(VAR_10);
 return VAR_11;
}

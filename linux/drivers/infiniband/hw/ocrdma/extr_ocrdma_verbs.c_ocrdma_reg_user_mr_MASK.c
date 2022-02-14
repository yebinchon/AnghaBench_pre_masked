
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u64 ;
typedef int u32 ;
struct ocrdma_pd {int id; } ;
struct TYPE_4__ {int remote_wr; int remote_rd; int local_wr; int local_rd; int remote_atomic; int lkey; void* len; void* va; int fbo; int pbe_size; } ;
struct ib_mr {int rkey; int lkey; } ;
struct ocrdma_mr {TYPE_1__ hwmr; struct ib_mr ibmr; int umem; } ;
struct ocrdma_dev {int dummy; } ;
struct ib_udata {int dummy; } ;
struct ib_pd {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ib_mr* FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_8 ;
 int FUNC_2 (struct ocrdma_dev*,struct ocrdma_mr*,int ) ;
 struct ocrdma_dev* FUNC_3 (int ) ;
 struct ocrdma_pd* FUNC_4 (struct ib_pd*) ;
 int FUNC_5 (struct ib_udata*,void*,void*,int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct ocrdma_mr*) ;
 struct ocrdma_mr* FUNC_9 (int,int ) ;
 int FUNC_10 (struct ocrdma_dev*,TYPE_1__*) ;
 int FUNC_11 (struct ocrdma_dev*,TYPE_1__*) ;
 int FUNC_12 (struct ocrdma_dev*,struct ocrdma_mr*,int ) ;
 int FUNC_13 (struct ocrdma_dev*,TYPE_1__*,int ,int) ;

struct ib_mr *FUNC_14(struct ib_pd *VAR_9, u64 VAR_10, u64 VAR_11,
     u64 VAR_12, int VAR_13, struct ib_udata *VAR_14)
{
 int VAR_15 = -VAR_2;
 struct ocrdma_dev *VAR_16 = FUNC_3(VAR_9->device);
 struct ocrdma_mr *VAR_17;
 struct ocrdma_pd *VAR_18;
 u32 VAR_19;

 VAR_18 = FUNC_4(VAR_9);

 if (VAR_13 & VAR_7 && !(VAR_13 & VAR_4))
  return FUNC_0(-VAR_1);

 VAR_17 = FUNC_9(sizeof(*VAR_17), VAR_3);
 if (!VAR_17)
  return FUNC_0(VAR_15);
 VAR_17->umem = FUNC_5(VAR_14, VAR_10, VAR_11, VAR_13, 0);
 if (FUNC_1(VAR_17->umem)) {
  VAR_15 = -VAR_0;
  goto umem_err;
 }
 VAR_19 = FUNC_7(VAR_17->umem);
 VAR_15 = FUNC_12(VAR_16, VAR_17, VAR_19);
 if (VAR_15)
  goto umem_err;

 VAR_17->hwmr.pbe_size = VAR_8;
 VAR_17->hwmr.fbo = FUNC_6(VAR_17->umem);
 VAR_17->hwmr.va = VAR_12;
 VAR_17->hwmr.len = VAR_11;
 VAR_17->hwmr.remote_wr = (VAR_13 & VAR_7) ? 1 : 0;
 VAR_17->hwmr.remote_rd = (VAR_13 & VAR_6) ? 1 : 0;
 VAR_17->hwmr.local_wr = (VAR_13 & VAR_4) ? 1 : 0;
 VAR_17->hwmr.local_rd = 1;
 VAR_17->hwmr.remote_atomic = (VAR_13 & VAR_5) ? 1 : 0;
 VAR_15 = FUNC_10(VAR_16, &VAR_17->hwmr);
 if (VAR_15)
  goto umem_err;
 FUNC_2(VAR_16, VAR_17, VAR_19);
 VAR_15 = FUNC_13(VAR_16, &VAR_17->hwmr, VAR_18->id, VAR_13);
 if (VAR_15)
  goto mbx_err;
 VAR_17->ibmr.lkey = VAR_17->hwmr.lkey;
 if (VAR_17->hwmr.remote_wr || VAR_17->hwmr.remote_rd)
  VAR_17->ibmr.rkey = VAR_17->hwmr.lkey;

 return &VAR_17->ibmr;

mbx_err:
 FUNC_11(VAR_16, &VAR_17->hwmr);
umem_err:
 FUNC_8(VAR_17);
 return FUNC_0(VAR_15);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {struct ib_gid_attr* sgid_attr; } ;
struct rdma_ah_attr {scalar_t__ type; TYPE_1__ grh; } ;
struct ocrdma_pd {TYPE_3__* uctx; int id; } ;
struct ocrdma_dev {int update_sl; } ;
struct ocrdma_ah {int id; scalar_t__ hdr_type; } ;
struct ib_udata {int dummy; } ;
struct ib_gid_attr {int gid; } ;
struct ib_ah {int device; int pd; } ;
struct TYPE_5__ {int* va; } ;
struct TYPE_6__ {TYPE_2__ ah_tbl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int *,int,int ) ;
 struct ocrdma_ah* FUNC_1 (struct ib_ah*) ;
 struct ocrdma_dev* FUNC_2 (int ) ;
 struct ocrdma_pd* FUNC_3 (int ) ;
 int FUNC_4 (struct ocrdma_dev*,struct ocrdma_ah*) ;
 int FUNC_5 (struct ocrdma_dev*,struct ocrdma_ah*) ;
 int FUNC_6 (struct ocrdma_dev*) ;
 scalar_t__ FUNC_7 (struct ocrdma_dev*) ;
 int FUNC_8 (struct rdma_ah_attr*) ;
 int FUNC_9 (struct rdma_ah_attr*) ;
 scalar_t__ FUNC_10 (struct ib_gid_attr const*) ;
 int FUNC_11 (struct ib_gid_attr const*,int*,int *) ;
 int FUNC_12 (struct ocrdma_dev*,struct ocrdma_ah*,struct rdma_ah_attr*,int *,int ,int*,int) ;

int FUNC_13(struct ib_ah *VAR_8, struct rdma_ah_attr *VAR_9, u32 VAR_10,
       struct ib_udata *VAR_11)
{
 u32 *VAR_12;
 int VAR_13;
 struct ocrdma_ah *VAR_14 = FUNC_1(VAR_8);
 bool VAR_15 = 0;
 u16 VAR_16 = 0xffff;
 const struct ib_gid_attr *VAR_17;
 struct ocrdma_pd *VAR_18 = FUNC_3(VAR_8->pd);
 struct ocrdma_dev *VAR_19 = FUNC_2(VAR_8->device);

 if ((VAR_9->type != VAR_7) ||
     !(FUNC_8(VAR_9) & VAR_1))
  return -VAR_0;

 if (FUNC_0(&VAR_19->update_sl, 1, 0))
  FUNC_6(VAR_19);

 VAR_17 = VAR_9->grh.sgid_attr;
 VAR_13 = FUNC_11(VAR_17, &VAR_16, ((void*)0));
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_4(VAR_19, VAR_14);
 if (VAR_13)
  goto av_err;


 VAR_14->hdr_type = FUNC_10(VAR_17);

 VAR_13 = FUNC_12(VAR_19, VAR_14, VAR_9, &VAR_17->gid, VAR_18->id,
        &VAR_15, VAR_16);
 if (VAR_13)
  goto av_conf_err;


 if ((VAR_18->uctx) && (VAR_18->uctx->ah_tbl.va)) {
  VAR_12 = VAR_18->uctx->ah_tbl.va + FUNC_9(VAR_9);
  *VAR_12 = 0;
  *VAR_12 |= VAR_14->id & VAR_2;
  if (FUNC_7(VAR_19)) {
   *VAR_12 |= ((u32)VAR_14->hdr_type &
           VAR_3) <<
           VAR_4;
  }
  if (VAR_15)
   *VAR_12 |= (VAR_5 <<
           VAR_6);
 }

 return 0;

av_conf_err:
 FUNC_5(VAR_19, VAR_14);
av_err:
 return VAR_13;
}

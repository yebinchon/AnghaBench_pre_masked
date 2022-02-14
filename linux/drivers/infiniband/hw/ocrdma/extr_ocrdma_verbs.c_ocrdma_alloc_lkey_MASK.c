
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int local_rd; int remote_rd; int remote_wr; int local_wr; int mw_bind; int remote_atomic; int lkey; int num_pbls; scalar_t__ fr_mr; } ;
struct TYPE_3__ {int rkey; int lkey; } ;
struct ocrdma_mr {TYPE_2__ hwmr; TYPE_1__ ibmr; } ;
struct ocrdma_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ocrdma_dev*,TYPE_2__*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct ocrdma_dev *VAR_5, struct ocrdma_mr *VAR_6,
       u32 VAR_7, int VAR_8, u32 VAR_9, u32 VAR_10)
{
 int VAR_11;

 VAR_6->hwmr.fr_mr = 0;
 VAR_6->hwmr.local_rd = 1;
 VAR_6->hwmr.remote_rd = (VAR_8 & VAR_3) ? 1 : 0;
 VAR_6->hwmr.remote_wr = (VAR_8 & VAR_4) ? 1 : 0;
 VAR_6->hwmr.local_wr = (VAR_8 & VAR_0) ? 1 : 0;
 VAR_6->hwmr.mw_bind = (VAR_8 & VAR_1) ? 1 : 0;
 VAR_6->hwmr.remote_atomic = (VAR_8 & VAR_2) ? 1 : 0;
 VAR_6->hwmr.num_pbls = VAR_9;

 VAR_11 = FUNC_0(VAR_5, &VAR_6->hwmr, VAR_7, VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_6->ibmr.lkey = VAR_6->hwmr.lkey;
 if (VAR_6->hwmr.remote_wr || VAR_6->hwmr.remote_rd)
  VAR_6->ibmr.rkey = VAR_6->hwmr.lkey;
 return 0;
}

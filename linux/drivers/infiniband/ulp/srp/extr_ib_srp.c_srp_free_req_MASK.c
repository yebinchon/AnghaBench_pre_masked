
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_request {int dummy; } ;
struct srp_rdma_ch {int lock; int req_lim; } ;
struct scsi_cmnd {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct scsi_cmnd*,struct srp_rdma_ch*,struct srp_request*) ;

__attribute__((used)) static void FUNC_3(struct srp_rdma_ch *VAR_0, struct srp_request *VAR_1,
    struct scsi_cmnd *VAR_2, s32 VAR_3)
{
 unsigned long VAR_4;

 FUNC_2(VAR_2, VAR_0, VAR_1);

 FUNC_0(&VAR_0->lock, VAR_4);
 VAR_0->req_lim += VAR_3;
 FUNC_1(&VAR_0->lock, VAR_4);
}

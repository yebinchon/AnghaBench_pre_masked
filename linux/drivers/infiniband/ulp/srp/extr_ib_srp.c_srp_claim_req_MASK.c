
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_request {struct scsi_cmnd* scmnd; } ;
struct srp_rdma_ch {int lock; } ;
struct scsi_device {int dummy; } ;
struct scsi_cmnd {struct scsi_device* device; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static struct scsi_cmnd *FUNC_2(struct srp_rdma_ch *VAR_0,
           struct srp_request *VAR_1,
           struct scsi_device *VAR_2,
           struct scsi_cmnd *VAR_3)
{
 unsigned long VAR_4;

 FUNC_0(&VAR_0->lock, VAR_4);
 if (VAR_1->scmnd &&
     (!VAR_2 || VAR_1->scmnd->device == VAR_2) &&
     (!VAR_3 || VAR_1->scmnd == VAR_3)) {
  VAR_3 = VAR_1->scmnd;
  VAR_1->scmnd = ((void*)0);
 } else {
  VAR_3 = ((void*)0);
 }
 FUNC_1(&VAR_0->lock, VAR_4);

 return VAR_3;
}

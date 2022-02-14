
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_request {int dummy; } ;
struct srp_rdma_ch {int dummy; } ;
struct scsi_device {int dummy; } ;
struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;} ;


 struct scsi_cmnd* FUNC_0 (struct srp_rdma_ch*,struct srp_request*,struct scsi_device*,int *) ;
 int FUNC_1 (struct srp_rdma_ch*,struct srp_request*,struct scsi_cmnd*,int ) ;
 int FUNC_2 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_3(struct srp_rdma_ch *VAR_0, struct srp_request *VAR_1,
      struct scsi_device *VAR_2, int VAR_3)
{
 struct scsi_cmnd *VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, ((void*)0));

 if (VAR_4) {
  FUNC_1(VAR_0, VAR_1, VAR_4, 0);
  VAR_4->result = VAR_3;
  VAR_4->scsi_done(VAR_4);
 }
}

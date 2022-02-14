
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct srp_target_port {size_t ch_count; TYPE_2__* rport; int scsi_host; struct srp_rdma_ch* ch; } ;
struct srp_request {int dummy; } ;
struct srp_rdma_ch {int dummy; } ;
struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;TYPE_1__* device; int request; scalar_t__ host_scribble; } ;
struct TYPE_4__ {scalar_t__ state; } ;
struct TYPE_3__ {int lun; int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 struct srp_target_port* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,char*,...) ;
 int FUNC_5 (struct srp_rdma_ch*,struct srp_request*,int *,struct scsi_cmnd*) ;
 int FUNC_6 (struct srp_rdma_ch*,struct srp_request*,struct scsi_cmnd*,int ) ;
 scalar_t__ FUNC_7 (struct srp_rdma_ch*,int ,int ,int ,int *) ;
 int FUNC_8 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_9(struct scsi_cmnd *VAR_7)
{
 struct srp_target_port *VAR_8 = FUNC_3(VAR_7->device->host);
 struct srp_request *VAR_9 = (struct srp_request *) VAR_7->host_scribble;
 u32 VAR_10;
 u16 VAR_11;
 struct srp_rdma_ch *VAR_12;
 int VAR_13;

 FUNC_4(VAR_3, VAR_8->scsi_host, "SRP abort called\n");

 if (!VAR_9)
  return VAR_6;
 VAR_10 = FUNC_1(VAR_7->request);
 VAR_11 = FUNC_2(VAR_10);
 if (FUNC_0(VAR_11 >= VAR_8->ch_count))
  return VAR_6;
 VAR_12 = &VAR_8->ch[VAR_11];
 if (!FUNC_5(VAR_12, VAR_9, ((void*)0), VAR_7))
  return VAR_6;
 FUNC_4(VAR_3, VAR_8->scsi_host,
       "Sending SRP abort for tag %#x\n", VAR_10);
 if (FUNC_7(VAR_12, VAR_10, VAR_7->device->lun,
         VAR_5, ((void*)0)) == 0)
  VAR_13 = VAR_6;
 else if (VAR_8->rport->state == VAR_4)
  VAR_13 = VAR_2;
 else
  VAR_13 = VAR_1;
 if (VAR_13 == VAR_6) {
  FUNC_6(VAR_12, VAR_9, VAR_7, 0);
  VAR_7->result = VAR_0 << 16;
  VAR_7->scsi_done(VAR_7);
 }

 return VAR_13;
}

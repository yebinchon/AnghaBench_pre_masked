
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct srp_target_port {struct srp_rdma_ch* ch; int scsi_host; } ;
struct srp_rdma_ch {int dummy; } ;
struct scsi_cmnd {TYPE_1__* device; } ;
struct TYPE_2__ {int lun; int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct srp_target_port* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*) ;
 scalar_t__ FUNC_2 (struct srp_rdma_ch*,int ,int ,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(struct scsi_cmnd *VAR_5)
{
 struct srp_target_port *VAR_6 = FUNC_0(VAR_5->device->host);
 struct srp_rdma_ch *VAR_7;
 u8 VAR_8;

 FUNC_1(VAR_1, VAR_6->scsi_host, "SRP reset_device called\n");

 VAR_7 = &VAR_6->ch[0];
 if (FUNC_2(VAR_7, VAR_2, VAR_5->device->lun,
         VAR_3, &VAR_8))
  return VAR_0;
 if (VAR_8)
  return VAR_0;

 return VAR_4;
}

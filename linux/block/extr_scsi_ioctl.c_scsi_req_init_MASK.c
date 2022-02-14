
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_request {scalar_t__ sense_len; int cmd_len; int __cmd; int cmd; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

void FUNC_1(struct scsi_request *VAR_1)
{
 FUNC_0(VAR_1->__cmd, 0, sizeof(VAR_1->__cmd));
 VAR_1->cmd = VAR_1->__cmd;
 VAR_1->cmd_len = VAR_0;
 VAR_1->sense_len = 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_request {long* cmd; int cmd_len; } ;
struct request_queue {int dummy; } ;
struct request {int dummy; } ;


 long VAR_0 ;
 long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (struct request_queue*) ;
 scalar_t__ FUNC_3 (struct request*) ;
 struct scsi_request* FUNC_4 (struct request*) ;

__attribute__((used)) static bool FUNC_5(struct request_queue *VAR_3, struct request *VAR_4)
{
 int VAR_5 = FUNC_2(VAR_3);
 long VAR_6 = (long)FUNC_0(VAR_4) / (VAR_5 >> 9);
 unsigned long VAR_7 = FUNC_1(VAR_4) / (VAR_5 >> 9);
 struct scsi_request *VAR_8 = FUNC_4(VAR_4);

 if (FUNC_3(VAR_4) == VAR_2)
  VAR_8->cmd[0] = VAR_0;
 else
  VAR_8->cmd[0] = VAR_1;




 VAR_8->cmd[2] = (VAR_6 >> 24) & 0xff;
 VAR_8->cmd[3] = (VAR_6 >> 16) & 0xff;
 VAR_8->cmd[4] = (VAR_6 >> 8) & 0xff;
 VAR_8->cmd[5] = VAR_6 & 0xff;




 VAR_8->cmd[7] = (VAR_7 >> 8) & 0xff;
 VAR_8->cmd[8] = VAR_7 & 0xff;
 VAR_8->cmd_len = 10;
 return 1;
}

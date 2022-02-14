
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_io_hdr {int timeout; int cmd_len; int cmdp; } ;
struct scsi_request {int cmd_len; int cmd; } ;
struct request_queue {scalar_t__ sg_timeout; } ;
struct request {scalar_t__ timeout; } ;
typedef int fmode_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct scsi_request* FUNC_3 (struct request*) ;

__attribute__((used)) static int FUNC_4(struct request_queue *VAR_4, struct request *VAR_5,
        struct sg_io_hdr *VAR_6, fmode_t VAR_7)
{
 struct scsi_request *VAR_8 = FUNC_3(VAR_5);

 if (FUNC_1(VAR_8->cmd, VAR_6->cmdp, VAR_6->cmd_len))
  return -VAR_2;
 if (FUNC_0(VAR_8->cmd, VAR_7))
  return -VAR_3;




 VAR_8->cmd_len = VAR_6->cmd_len;

 VAR_5->timeout = FUNC_2(VAR_6->timeout);
 if (!VAR_5->timeout)
  VAR_5->timeout = VAR_4->sg_timeout;
 if (!VAR_5->timeout)
  VAR_5->timeout = VAR_0;
 if (VAR_5->timeout < VAR_1)
  VAR_5->timeout = VAR_1;

 return 0;
}

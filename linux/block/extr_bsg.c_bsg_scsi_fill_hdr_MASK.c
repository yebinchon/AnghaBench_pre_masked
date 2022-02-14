
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_io_v4 {scalar_t__ request_len; int request; scalar_t__ din_xfer_len; scalar_t__ dout_xfer_len; } ;
struct scsi_request {scalar_t__ cmd_len; int cmd; } ;
struct request {int dummy; } ;
typedef int fmode_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (char*) ;
 struct scsi_request* FUNC_4 (struct request*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct request *VAR_6, struct sg_io_v4 *VAR_7,
  fmode_t VAR_8)
{
 struct scsi_request *VAR_9 = FUNC_4(VAR_6);

 if (VAR_7->dout_xfer_len && VAR_7->din_xfer_len) {
  FUNC_3("BIDI support in bsg has been removed.\n");
  return -VAR_3;
 }

 VAR_9->cmd_len = VAR_7->request_len;
 if (VAR_9->cmd_len > VAR_0) {
  VAR_9->cmd = FUNC_2(VAR_9->cmd_len, VAR_5);
  if (!VAR_9->cmd)
   return -VAR_2;
 }

 if (FUNC_1(VAR_9->cmd, FUNC_5(VAR_7->request), VAR_9->cmd_len))
  return -VAR_1;
 if (FUNC_0(VAR_9->cmd, VAR_8))
  return -VAR_4;
 return 0;
}

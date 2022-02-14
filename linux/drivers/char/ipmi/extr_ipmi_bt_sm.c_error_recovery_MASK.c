
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct si_sm_data {int error_retries; int BT_CAP_retries; unsigned char seq; int state; TYPE_1__* io; int nonzero_status; int BT_CAP_req2rsp; int timeout; } ;
typedef enum si_sm_result { ____Placeholder_si_sm_result } si_sm_result ;
struct TYPE_2__ {int dev; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct si_sm_data*,unsigned char) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static enum si_sm_result FUNC_4(struct si_sm_data *VAR_10,
     unsigned char VAR_11,
     unsigned char VAR_12)
{
 char *VAR_13;

 VAR_10->timeout = VAR_10->BT_CAP_req2rsp;

 switch (VAR_12) {
 case 128:
  VAR_13 = "timeout";
  break;
 default:
  VAR_13 = "internal error";
  break;
 }

 FUNC_1(VAR_10->io->dev, "IPMI BT: %s in %s %s ",
   VAR_13, VAR_8, VAR_9);





 (VAR_10->error_retries)++;
 if (VAR_10->error_retries < VAR_10->BT_CAP_retries) {
  FUNC_3("%d retries left\n",
   VAR_10->BT_CAP_retries - VAR_10->error_retries);
  VAR_10->state = VAR_4;
  return VAR_6;
 }

 FUNC_1(VAR_10->io->dev, "failed %d retries, sending error response\n",
   VAR_10->BT_CAP_retries);
 if (!VAR_10->nonzero_status)
  FUNC_0(VAR_10->io->dev, "stuck, try power cycle\n");


 else if (VAR_10->seq <= (unsigned char)(VAR_10->BT_CAP_retries & 0xFF)) {
  FUNC_1(VAR_10->io->dev, "BT reset (takes 5 secs)\n");
  VAR_10->state = VAR_3;
  return VAR_6;
 }






 VAR_10->state = VAR_1;
 switch (VAR_12) {
 case 128:
  if (VAR_11 & VAR_0) {
   VAR_12 = VAR_5;
   VAR_10->state = VAR_2;
  }
  break;
 default:
  break;
 }
 FUNC_2(VAR_10, VAR_12);
 return VAR_7;
}

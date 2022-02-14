
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct si_sm_data {unsigned char BT_CAP_req2rsp; unsigned char BT_CAP_retries; TYPE_1__* io; } ;
typedef enum si_sm_result { ____Placeholder_si_sm_result } si_sm_result ;
struct TYPE_2__ {int dev; } ;
typedef int GetBT_CAP ;
typedef int BT_CAP ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 int FUNC_0 (struct si_sm_data*,int ) ;
 int FUNC_1 (struct si_sm_data*,unsigned char*,int) ;
 int FUNC_2 (struct si_sm_data*,TYPE_1__*) ;
 int FUNC_3 (struct si_sm_data*,unsigned char*,int) ;
 int FUNC_4 (int ,char*,unsigned char,unsigned char) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct si_sm_data*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct si_sm_data *VAR_6)
{
 unsigned char VAR_7[] = { 0x18, 0x36 };
 unsigned char VAR_8[8];
 enum si_sm_result VAR_9;
 int VAR_10;
 if ((VAR_1 == 0xFF) && (VAR_0 == 0xFF))
  return 1;
 FUNC_7(VAR_6);




 VAR_10 = FUNC_3(VAR_6, VAR_7, sizeof(VAR_7));
 if (VAR_10) {
  FUNC_5(VAR_6->io->dev,
    "Can't start capabilities transaction: %d\n", VAR_10);
  goto out_no_bt_cap;
 }

 VAR_9 = VAR_2;
 for (;;) {
  if (VAR_9 == VAR_3 ||
      VAR_9 == VAR_4) {
   FUNC_8(1);
   VAR_9 = FUNC_0(VAR_6, FUNC_6(1));
  } else if (VAR_9 == VAR_2) {
   VAR_9 = FUNC_0(VAR_6, 0);
  } else
   break;
 }

 VAR_10 = FUNC_1(VAR_6, VAR_8, sizeof(VAR_8));
 FUNC_2(VAR_6, VAR_6->io);
 if (VAR_10 < 8) {
  FUNC_5(VAR_6->io->dev, "bt cap response too short: %d\n", VAR_10);
  goto out_no_bt_cap;
 }

 if (VAR_8[2]) {
  FUNC_5(VAR_6->io->dev, "Error fetching bt cap: %x\n", VAR_8[2]);
out_no_bt_cap:
  FUNC_5(VAR_6->io->dev, "using default values\n");
 } else {
  VAR_6->BT_CAP_req2rsp = VAR_8[6] * VAR_5;
  VAR_6->BT_CAP_retries = VAR_8[7];
 }

 FUNC_4(VAR_6->io->dev, "req2rsp=%ld secs retries=%d\n",
   VAR_6->BT_CAP_req2rsp / VAR_5, VAR_6->BT_CAP_retries);

 return 0;
}

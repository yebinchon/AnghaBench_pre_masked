
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smu_i2c_cmd {int stage; int* pdata; scalar_t__ retries; scalar_t__ read; } ;
struct smu_cmd {scalar_t__ status; int reply_len; int* reply_buf; int* data_buf; int data_len; } ;
struct TYPE_2__ {int i2c_timer; struct smu_i2c_cmd* cmd_i2c_cur; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_5 (struct smu_i2c_cmd*,int) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int FUNC_7 (struct smu_cmd*) ;

__attribute__((used)) static void FUNC_8(struct smu_cmd *VAR_3, void *VAR_4)
{
 struct smu_i2c_cmd *VAR_5 = VAR_4;
 int VAR_6 = 0;

 FUNC_1("SMU: i2c compl. stage=%d status=%x pdata[0]=%x rlen: %x\n",
  VAR_5->stage, VAR_3->status, VAR_5->pdata[0], VAR_3->reply_len);


 if (VAR_3->status < 0)
  VAR_6 = 1;
 else if (VAR_5->read) {
  if (VAR_5->stage == 0)
   VAR_6 = VAR_5->pdata[0] != 0;
  else
   VAR_6 = VAR_5->pdata[0] >= 0x80;
 } else {
  VAR_6 = VAR_5->pdata[0] != 0;
 }



 if (VAR_6 && --VAR_5->retries > 0) {
  FUNC_1("SMU: i2c failure, starting timer...\n");
  FUNC_0(VAR_5 != VAR_1->cmd_i2c_cur);
  if (!VAR_2) {
   FUNC_2(5);
   FUNC_6(((void*)0));
   return;
  }
  FUNC_3(&VAR_1->i2c_timer, VAR_0 + FUNC_4(5));
  return;
 }


 if (VAR_6 || VAR_5->stage != 0) {
  FUNC_5(VAR_5, VAR_6);
  return;
 }

 FUNC_1("SMU: going to stage 1\n");


 VAR_3->reply_buf = VAR_5->pdata;
 VAR_3->reply_len = sizeof(VAR_5->pdata);
 VAR_3->data_buf = VAR_5->pdata;
 VAR_3->data_len = 1;
 VAR_5->pdata[0] = 0;
 VAR_5->stage = 1;
 VAR_5->retries = 20;
 FUNC_7(VAR_3);
}

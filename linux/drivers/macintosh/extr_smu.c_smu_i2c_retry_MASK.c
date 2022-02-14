
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_3__ {int reply_len; } ;
struct smu_i2c_cmd {int* pdata; TYPE_1__ scmd; } ;
struct TYPE_4__ {struct smu_i2c_cmd* cmd_i2c_cur; } ;


 int FUNC_0 (char*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_1)
{
 struct smu_i2c_cmd *VAR_2 = VAR_0->cmd_i2c_cur;

 FUNC_0("SMU: i2c failure, requeuing...\n");


 VAR_2->pdata[0] = 0xff;
 VAR_2->scmd.reply_len = sizeof(VAR_2->pdata);
 FUNC_1(&VAR_2->scmd);
}

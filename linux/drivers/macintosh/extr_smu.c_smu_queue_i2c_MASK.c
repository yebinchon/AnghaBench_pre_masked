
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int* reply_buf; int reply_len; int status; int data_len; int link; int * data_buf; struct smu_i2c_cmd* misc; int done; int cmd; } ;
struct TYPE_4__ {int caddr; int devaddr; int type; int sublen; int datalen; int* data; int * subaddr; int bus; } ;
struct smu_i2c_cmd {int* pdata; int retries; int status; int read; int link; TYPE_2__ scmd; TYPE_1__ info; scalar_t__ stage; } ;
struct TYPE_6__ {int lock; int cmd_i2c_list; int * cmd_cur; int cmd_list; struct smu_i2c_cmd* cmd_i2c_cur; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int*,int,int) ;
 TYPE_3__* VAR_5 ;
 int VAR_6 ;
 int FUNC_3 () ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct smu_i2c_cmd *VAR_7)
{
 unsigned long VAR_8;

 if (VAR_5 == ((void*)0))
  return -VAR_1;


 VAR_7->scmd.cmd = VAR_2;
 VAR_7->scmd.done = VAR_6;
 VAR_7->scmd.misc = VAR_7;
 VAR_7->scmd.reply_buf = VAR_7->pdata;
 VAR_7->scmd.reply_len = sizeof(VAR_7->pdata);
 VAR_7->scmd.data_buf = (u8 *)(char *)&VAR_7->info;
 VAR_7->scmd.status = 1;
 VAR_7->stage = 0;
 VAR_7->pdata[0] = 0xff;
 VAR_7->retries = 20;
 VAR_7->status = 1;




 VAR_7->info.caddr = VAR_7->info.devaddr;
 VAR_7->read = VAR_7->info.devaddr & 0x01;
 switch(VAR_7->info.type) {
 case 129:
  FUNC_2(&VAR_7->info.sublen, 0, 4);
  break;
 case 130:
  VAR_7->info.devaddr &= 0xfe;

 case 128:
  if (VAR_7->info.sublen > 3)
   return -VAR_0;
  break;
 default:
  return -VAR_0;
 }



 if (VAR_7->read) {
  if (VAR_7->info.datalen > VAR_3)
   return -VAR_0;
  FUNC_2(VAR_7->info.data, 0xff, VAR_7->info.datalen);
  VAR_7->scmd.data_len = 9;
 } else {
  if (VAR_7->info.datalen > VAR_4)
   return -VAR_0;
  VAR_7->scmd.data_len = 9 + VAR_7->info.datalen;
 }

 FUNC_0("SMU: i2c enqueuing command\n");
 FUNC_0("SMU:   %s, len=%d bus=%x addr=%x sub0=%x type=%x\n",
  VAR_7->read ? "read" : "write", VAR_7->info.datalen,
  VAR_7->info.bus, VAR_7->info.caddr,
  VAR_7->info.subaddr[0], VAR_7->info.type);





 FUNC_4(&VAR_5->lock, VAR_8);
 if (VAR_5->cmd_i2c_cur == ((void*)0)) {
  VAR_5->cmd_i2c_cur = VAR_7;
  FUNC_1(&VAR_7->scmd.link, &VAR_5->cmd_list);
  if (VAR_5->cmd_cur == ((void*)0))
   FUNC_3();
 } else
  FUNC_1(&VAR_7->link, &VAR_5->cmd_i2c_list);
 FUNC_5(&VAR_5->lock, VAR_8);

 return 0;
}

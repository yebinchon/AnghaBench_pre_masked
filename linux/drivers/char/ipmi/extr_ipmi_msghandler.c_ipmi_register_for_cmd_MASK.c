
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_user {struct ipmi_smi* intf; } ;
struct ipmi_smi {int cmd_rcvrs_mutex; int cmd_rcvrs; } ;
struct cmd_rcvr {unsigned char cmd; unsigned char netfn; unsigned int chans; int link; struct ipmi_user* user; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ipmi_user* FUNC_0 (struct ipmi_user*,int*) ;
 int FUNC_1 (struct ipmi_smi*,unsigned char,unsigned char,unsigned int) ;
 int FUNC_2 (struct cmd_rcvr*) ;
 struct cmd_rcvr* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ipmi_user*,int) ;
 int FUNC_8 (struct ipmi_smi*,int ) ;

int FUNC_9(struct ipmi_user *VAR_5,
     unsigned char VAR_6,
     unsigned char VAR_7,
     unsigned int VAR_8)
{
 struct ipmi_smi *VAR_9 = VAR_5->intf;
 struct cmd_rcvr *VAR_10;
 int VAR_11 = 0, VAR_12;

 VAR_5 = FUNC_0(VAR_5, &VAR_12);
 if (!VAR_5)
  return -VAR_1;

 VAR_10 = FUNC_3(sizeof(*VAR_10), VAR_3);
 if (!VAR_10) {
  VAR_11 = -VAR_2;
  goto out_release;
 }
 VAR_10->cmd = VAR_7;
 VAR_10->netfn = VAR_6;
 VAR_10->chans = VAR_8;
 VAR_10->user = VAR_5;

 FUNC_5(&VAR_9->cmd_rcvrs_mutex);

 if (!FUNC_1(VAR_9, VAR_6, VAR_7, VAR_8)) {
  VAR_11 = -VAR_0;
  goto out_unlock;
 }

 FUNC_8(VAR_9, VAR_4);

 FUNC_4(&VAR_10->link, &VAR_9->cmd_rcvrs);

out_unlock:
 FUNC_6(&VAR_9->cmd_rcvrs_mutex);
 if (VAR_11)
  FUNC_2(VAR_10);
out_release:
 FUNC_7(VAR_5, VAR_12);

 return VAR_11;
}

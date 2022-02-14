
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_user {struct ipmi_smi* intf; } ;
struct ipmi_smi {int cmd_rcvrs_mutex; } ;
struct cmd_rcvr {unsigned int chans; struct cmd_rcvr* next; int link; struct ipmi_user* user; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ipmi_user* FUNC_0 (struct ipmi_user*,int*) ;
 struct cmd_rcvr* FUNC_1 (struct ipmi_smi*,unsigned char,unsigned char,int) ;
 int FUNC_2 (struct cmd_rcvr*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ipmi_user*,int) ;
 int FUNC_7 (struct ipmi_smi*,int ) ;
 int FUNC_8 () ;

int FUNC_9(struct ipmi_user *VAR_4,
       unsigned char VAR_5,
       unsigned char VAR_6,
       unsigned int VAR_7)
{
 struct ipmi_smi *VAR_8 = VAR_4->intf;
 struct cmd_rcvr *VAR_9;
 struct cmd_rcvr *VAR_10 = ((void*)0);
 int VAR_11, VAR_12 = -VAR_1, VAR_13;

 VAR_4 = FUNC_0(VAR_4, &VAR_13);
 if (!VAR_4)
  return -VAR_0;

 FUNC_4(&VAR_8->cmd_rcvrs_mutex);
 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  if (((1 << VAR_11) & VAR_7) == 0)
   continue;
  VAR_9 = FUNC_1(VAR_8, VAR_5, VAR_6, VAR_11);
  if (VAR_9 == ((void*)0))
   continue;
  if (VAR_9->user == VAR_4) {
   VAR_12 = 0;
   VAR_9->chans &= ~VAR_7;
   if (VAR_9->chans == 0) {
    FUNC_3(&VAR_9->link);
    VAR_9->next = VAR_10;
    VAR_10 = VAR_9;
   }
  }
 }
 FUNC_5(&VAR_8->cmd_rcvrs_mutex);
 FUNC_8();
 FUNC_6(VAR_4, VAR_13);
 while (VAR_10) {
  FUNC_7(VAR_8, VAR_3);
  VAR_9 = VAR_10;
  VAR_10 = VAR_9->next;
  FUNC_2(VAR_9);
 }

 return VAR_12;
}

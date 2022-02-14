
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opal_msg {int * params; } ;
struct notifier_block {int dummy; } ;
struct OpalHmiEvtNode {int list; int hmi_evt; } ;
struct OpalHMIEvent {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 struct OpalHmiEvtNode* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,struct OpalHMIEvent*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct notifier_block *VAR_6,
     unsigned long VAR_7, void *VAR_8)
{
 unsigned long VAR_9;
 struct OpalHMIEvent *VAR_10;
 struct opal_msg *VAR_11 = VAR_8;
 struct OpalHmiEvtNode *VAR_12;


 if (VAR_7 != VAR_2)
  return 0;


 VAR_10 = (struct OpalHMIEvent *)&VAR_11->params[0];


 VAR_12 = FUNC_0(sizeof(*VAR_12), VAR_1);
 if (!VAR_12) {
  FUNC_3("HMI: out of memory, Opal message event not handled\n");
  return -VAR_0;
 }
 FUNC_2(&VAR_12->hmi_evt, VAR_10, sizeof(*VAR_10));

 FUNC_5(&VAR_5, VAR_9);
 FUNC_1(&VAR_12->list, &VAR_4);
 FUNC_6(&VAR_5, VAR_9);

 FUNC_4(&VAR_3);
 return 0;
}

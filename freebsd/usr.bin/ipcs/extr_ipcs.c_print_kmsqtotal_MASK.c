
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msginfo {int msgmax; int msgmni; int msgmnb; int msgtql; int msgssz; int msgseg; } ;


 int FUNC_0 (char*,...) ;

void
FUNC_1(struct msginfo VAR_0)
{

 FUNC_0("msginfo:\n");
 FUNC_0("\tmsgmax: %12d\t(max characters in a message)\n",
     VAR_0.msgmax);
 FUNC_0("\tmsgmni: %12d\t(# of message queues)\n",
     VAR_0.msgmni);
 FUNC_0("\tmsgmnb: %12d\t(max characters in a message queue)\n",
     VAR_0.msgmnb);
 FUNC_0("\tmsgtql: %12d\t(max # of messages in system)\n",
     VAR_0.msgtql);
 FUNC_0("\tmsgssz: %12d\t(size of a message segment)\n",
     VAR_0.msgssz);
 FUNC_0("\tmsgseg: %12d\t(# of message segments in system)\n\n",
     VAR_0.msgseg);
}

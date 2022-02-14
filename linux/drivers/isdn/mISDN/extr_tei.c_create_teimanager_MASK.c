
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int st; int ctrl; int send; } ;
struct TYPE_7__ {int debug; int state; int * fsm; int printdebug; struct manager* userdata; } ;
struct manager {int nextid; TYPE_2__ ch; int datimer; TYPE_3__ deact; TYPE_2__ bcast; int lastid; int sendq; int lock; int layer2; } ;
struct TYPE_5__ {int st; } ;
struct mISDNdevice {TYPE_2__* teimgr; TYPE_1__ D; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int* VAR_9 ;
 struct manager* FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;
 int FUNC_6 (int *) ;

int
FUNC_7(struct mISDNdevice *VAR_14)
{
 struct manager *VAR_15;

 VAR_15 = FUNC_2(sizeof(struct manager), VAR_2);
 if (!VAR_15)
  return -VAR_1;
 FUNC_0(&VAR_15->layer2);
 FUNC_4(&VAR_15->lock);
 FUNC_6(&VAR_15->sendq);
 VAR_15->nextid = 1;
 VAR_15->lastid = VAR_4;
 VAR_15->ch.send = VAR_13;
 VAR_15->ch.ctrl = VAR_12;
 VAR_15->ch.st = VAR_14->D.st;
 FUNC_5(&VAR_15->ch, VAR_6, VAR_3);
 FUNC_1(&VAR_15->ch, VAR_14->D.st);
 VAR_15->bcast.send = VAR_10;
 VAR_15->bcast.ctrl = VAR_11;
 VAR_15->bcast.st = VAR_14->D.st;
 FUNC_5(&VAR_15->bcast, 0, VAR_3);
 FUNC_1(&VAR_15->bcast, VAR_14->D.st);
 VAR_15->deact.debug = *VAR_9 & VAR_0;
 VAR_15->deact.userdata = VAR_15;
 VAR_15->deact.printdebug = VAR_7;
 VAR_15->deact.fsm = &VAR_8;
 VAR_15->deact.state = VAR_5;
 FUNC_3(&VAR_15->deact, &VAR_15->datimer);
 VAR_14->teimgr = &VAR_15->ch;
 return 0;
}

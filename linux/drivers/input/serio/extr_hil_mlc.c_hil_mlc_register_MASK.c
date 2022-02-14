
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int id; } ;
struct serio {TYPE_1__* port_data; int close; int open; int write; TYPE_3__ id; int phys; int name; } ;
struct TYPE_9__ {int icount; int seidx; int list; int * tasklet; scalar_t__* serio_oidx; scalar_t__* serio_opacket; TYPE_1__* serio_map; struct serio** serio; int csem; scalar_t__ opercnt; scalar_t__ imatch; int isem; int osem; int lock; scalar_t__ ostarted; scalar_t__ istarted; } ;
typedef TYPE_2__ hil_mlc ;
struct TYPE_8__ {int didx; int di_revmap; TYPE_2__* mlc; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int VAR_4 ;
 TYPE_3__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct serio*) ;
 struct serio* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (struct serio*) ;
 int FUNC_10 (int ,int,char*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;

int FUNC_14(hil_mlc *VAR_11)
{
 int VAR_12;
 unsigned long VAR_13;

 FUNC_0(VAR_11 == ((void*)0));

 VAR_11->istarted = 0;
 VAR_11->ostarted = 0;

 FUNC_7(&VAR_11->lock);
 FUNC_8(&VAR_11->osem, 1);

 FUNC_8(&VAR_11->isem, 1);
 VAR_11->icount = -1;
 VAR_11->imatch = 0;

 VAR_11->opercnt = 0;

 FUNC_8(&(VAR_11->csem), 0);

 FUNC_2(VAR_11);
 FUNC_1(VAR_11, 0);
 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  struct serio *VAR_14;
  FUNC_3(VAR_11, VAR_12);
  VAR_14 = FUNC_5(sizeof(*VAR_14), VAR_1);
  VAR_11->serio[VAR_12] = VAR_14;
  if (!VAR_11->serio[VAR_12]) {
   for (; VAR_12 >= 0; VAR_12--)
    FUNC_4(VAR_11->serio[VAR_12]);
   return -VAR_0;
  }
  FUNC_10(VAR_14->name, sizeof(VAR_14->name)-1, "HIL_SERIO%d", VAR_12);
  FUNC_10(VAR_14->phys, sizeof(VAR_14->phys)-1, "HIL%d", VAR_12);
  VAR_14->id = VAR_5;
  VAR_14->id.id = VAR_12;
  VAR_14->write = VAR_7;
  VAR_14->open = VAR_6;
  VAR_14->close = VAR_4;
  VAR_14->port_data = &(VAR_11->serio_map[VAR_12]);
  VAR_11->serio_map[VAR_12].mlc = VAR_11;
  VAR_11->serio_map[VAR_12].didx = VAR_12;
  VAR_11->serio_map[VAR_12].di_revmap = -1;
  VAR_11->serio_opacket[VAR_12] = 0;
  VAR_11->serio_oidx[VAR_12] = 0;
  FUNC_9(VAR_14);
 }

 VAR_11->tasklet = &VAR_10;

 FUNC_12(&VAR_9, VAR_13);
 FUNC_6(&VAR_11->list, &VAR_8);
 VAR_11->seidx = VAR_2;
 FUNC_13(&VAR_9, VAR_13);

 FUNC_11(&VAR_10);
 return 0;
}

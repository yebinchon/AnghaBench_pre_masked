
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u8 ;
struct serio {int dev; } ;
struct TYPE_6__ {int flags; } ;
struct psmouse {scalar_t__ state; int pktcnt; scalar_t__ badbyte; scalar_t__* packet; int resync_time; void* last; int resync_work; TYPE_1__* protocol; int phys; int name; TYPE_2__ ps2dev; } ;
typedef int irqreturn_t ;
struct TYPE_5__ {scalar_t__ type; int ignore_parity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int FUNC_0 (struct psmouse*,scalar_t__) ;
 void* VAR_13 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,void*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,void*) ;
 scalar_t__ FUNC_5 (struct psmouse*) ;
 int FUNC_6 (struct psmouse*,void*) ;
 int FUNC_7 (struct psmouse*,char*,int ,int ,int) ;
 int FUNC_8 (struct psmouse*,int *,int ) ;
 int FUNC_9 (struct psmouse*,char*,char*,char*) ;
 struct psmouse* FUNC_10 (struct serio*) ;
 int FUNC_11 (struct serio*) ;
 scalar_t__ FUNC_12 (void*,void*) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static irqreturn_t FUNC_14(struct serio *VAR_14,
         u8 VAR_15, unsigned int VAR_16)
{
 struct psmouse *VAR_17 = FUNC_10(VAR_14);

 if (VAR_17->state == VAR_6)
  goto out;

 if (FUNC_13((VAR_16 & VAR_12) ||
       ((VAR_16 & VAR_11) &&
        !VAR_17->protocol->ignore_parity))) {

  if (VAR_17->state == VAR_4)
   FUNC_9(VAR_17,
         "bad data from KBC -%s%s\n",
         VAR_16 & VAR_12 ? " timeout" : "",
         VAR_16 & VAR_11 ? " bad parity" : "");
  FUNC_2(&VAR_17->ps2dev);
  goto out;
 }

 if (VAR_16 & VAR_10) {
  FUNC_6(VAR_17, VAR_15);
  goto out;
 }

 if (FUNC_13(VAR_17->ps2dev.flags & VAR_2))
  if (FUNC_3(&VAR_17->ps2dev, VAR_15))
   goto out;

 if (FUNC_13(VAR_17->ps2dev.flags & VAR_3))
  if (FUNC_4(&VAR_17->ps2dev, VAR_15))
   goto out;

 FUNC_1(&VAR_14->dev, 0);

 if (VAR_17->state <= VAR_7)
  goto out;

 if (VAR_17->state == VAR_4 &&
     VAR_17->pktcnt && FUNC_12(VAR_13, VAR_17->last + VAR_0/2)) {
  FUNC_7(VAR_17, "%s at %s lost synchronization, throwing %d bytes away.\n",
        VAR_17->name, VAR_17->phys, VAR_17->pktcnt);
  VAR_17->badbyte = VAR_17->packet[0];
  FUNC_0(VAR_17, VAR_7);
  FUNC_8(VAR_17, &VAR_17->resync_work, 0);
  goto out;
 }

 VAR_17->packet[VAR_17->pktcnt++] = VAR_15;


 if (FUNC_13(VAR_17->packet[0] == VAR_8 && VAR_17->pktcnt <= 2)) {
  if (VAR_17->pktcnt == 1) {
   VAR_17->last = VAR_13;
   goto out;
  }

  if (VAR_17->packet[1] == VAR_9 ||
      (VAR_17->protocol->type == VAR_5 &&
       VAR_17->packet[1] == VAR_8)) {
   FUNC_0(VAR_17, VAR_6);
   FUNC_11(VAR_14);
   goto out;
  }


  VAR_17->pktcnt = 1;
  if (FUNC_5(VAR_17))
   goto out;

  VAR_17->packet[VAR_17->pktcnt++] = VAR_15;
 }





 if (VAR_17->state == VAR_4 &&
     VAR_17->pktcnt == 1 && VAR_17->resync_time &&
     FUNC_12(VAR_13, VAR_17->last + VAR_17->resync_time * VAR_0)) {
  VAR_17->badbyte = VAR_17->packet[0];
  FUNC_0(VAR_17, VAR_7);
  FUNC_8(VAR_17, &VAR_17->resync_work, 0);
  goto out;
 }

 VAR_17->last = VAR_13;
 FUNC_5(VAR_17);

 out:
 return VAR_1;
}

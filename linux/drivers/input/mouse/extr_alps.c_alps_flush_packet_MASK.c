
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {int serio; } ;
struct psmouse {scalar_t__ pktcnt; scalar_t__ pktsize; int* packet; TYPE_1__ ps2dev; } ;
struct alps_data {int (* process_packet ) (struct psmouse*) ;struct psmouse* psmouse; } ;


 struct alps_data* FUNC_0 (int ,struct timer_list*,int ) ;
 struct alps_data* VAR_0 ;
 int FUNC_1 (struct psmouse*,char*,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct psmouse*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_2)
{
 struct alps_data *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_1);
 struct psmouse *VAR_4 = VAR_3->psmouse;

 FUNC_3(VAR_4->ps2dev.serio);

 if (VAR_4->pktcnt == VAR_4->pktsize) {






  if ((VAR_4->packet[3] |
       VAR_4->packet[4] |
       VAR_4->packet[5]) & 0x80) {
   FUNC_1(VAR_4,
        "refusing packet %3ph (suspected interleaved ps/2)\n",
        VAR_4->packet + 3);
  } else {
   VAR_3->process_packet(VAR_4);
  }
  VAR_4->pktcnt = 0;
 }

 FUNC_2(VAR_4->ps2dev.serio);
}

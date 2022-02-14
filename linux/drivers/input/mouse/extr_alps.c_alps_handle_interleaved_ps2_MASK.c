
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int pktcnt; int* packet; struct alps_data* private; } ;
struct alps_data {int (* process_packet ) (struct psmouse*) ;int timer; } ;
typedef int psmouse_ret_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct alps_data*,int) ;
 int FUNC_1 (struct psmouse*,int*,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct psmouse*,char*,int*) ;
 int FUNC_6 (struct psmouse*) ;

__attribute__((used)) static psmouse_ret_t FUNC_7(struct psmouse *VAR_3)
{
 struct alps_data *VAR_4 = VAR_3->private;

 if (VAR_3->pktcnt < 6)
  return VAR_1;

 if (VAR_3->pktcnt == 6) {






  FUNC_3(&VAR_4->timer, VAR_2 + FUNC_4(20));
  return VAR_1;
 }

 FUNC_2(&VAR_4->timer);

 if (VAR_3->packet[6] & 0x80) {







  if (((VAR_3->packet[3] |
        VAR_3->packet[4] |
        VAR_3->packet[5]) & 0x80) ||
      (!FUNC_0(VAR_4, VAR_3->packet[6]))) {
   FUNC_5(VAR_3,
        "refusing packet %4ph (suspected interleaved ps/2)\n",
        VAR_3->packet + 3);
   return VAR_0;
  }

  VAR_4->process_packet(VAR_3);


  VAR_3->packet[0] = VAR_3->packet[6];
  VAR_3->pktcnt = 1;

 } else {
  FUNC_1(VAR_3, &VAR_3->packet[3],
         0);
  VAR_3->packet[3] = VAR_3->packet[6] & 0xf7;
  VAR_3->pktcnt = 4;
 }

 return VAR_1;
}

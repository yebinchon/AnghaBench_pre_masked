
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int* packet; int pktcnt; int pktsize; int out_of_sync_cnt; struct alps_data* private; } ;
struct alps_data {scalar_t__ proto_version; int flags; int (* process_packet ) (struct psmouse*) ;int byte0; int mask0; } ;
typedef int psmouse_ret_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct psmouse*) ;
 int FUNC_1 (struct alps_data*,int) ;
 int FUNC_2 (struct psmouse*) ;
 int FUNC_3 (struct psmouse*) ;
 int FUNC_4 (struct psmouse*,int*,int) ;
 int FUNC_5 (struct psmouse*,char*,int,int,...) ;
 int FUNC_6 (struct psmouse*) ;

__attribute__((used)) static psmouse_ret_t FUNC_7(struct psmouse *VAR_8)
{
 struct alps_data *VAR_9 = VAR_8->private;
 if (VAR_9->proto_version != VAR_3 &&
     !VAR_8->out_of_sync_cnt &&
     (VAR_8->packet[0] & 0xc8) == 0x08) {

  if (VAR_8->pktcnt == 3) {
   FUNC_4(VAR_8, VAR_8->packet,
          1);
   return VAR_6;
  }
  return VAR_7;
 }



 if ((VAR_9->flags & VAR_4) &&
     VAR_8->pktcnt >= 4 && (VAR_8->packet[3] & 0x0f) == 0x0f) {
  return FUNC_0(VAR_8);
 }

 if (!FUNC_1(VAR_9, VAR_8->packet[0])) {
  FUNC_5(VAR_8,
       "refusing packet[0] = %x (mask0 = %x, byte0 = %x)\n",
       VAR_8->packet[0], VAR_9->mask0, VAR_9->byte0);
  return VAR_5;
 }


 if (VAR_9->proto_version < VAR_1 &&
     VAR_8->pktcnt >= 2 && VAR_8->pktcnt <= VAR_8->pktsize &&
     (VAR_8->packet[VAR_8->pktcnt - 1] & 0x80)) {
  FUNC_5(VAR_8, "refusing packet[%i] = %x\n",
       VAR_8->pktcnt - 1,
       VAR_8->packet[VAR_8->pktcnt - 1]);

  if (VAR_9->proto_version == VAR_0 &&
      VAR_8->pktcnt == VAR_8->pktsize) {
   return VAR_6;
  }

  return VAR_5;
 }

 if ((VAR_9->proto_version == VAR_2 &&
   !FUNC_3(VAR_8)) ||
     (VAR_9->proto_version == VAR_3 &&
   !FUNC_2(VAR_8))) {
  FUNC_5(VAR_8, "refusing packet[%i] = %x\n",
       VAR_8->pktcnt - 1,
       VAR_8->packet[VAR_8->pktcnt - 1]);
  return VAR_5;
 }

 if (VAR_8->pktcnt == VAR_8->pktsize) {
  VAR_9->process_packet(VAR_8);
  return VAR_6;
 }

 return VAR_7;
}

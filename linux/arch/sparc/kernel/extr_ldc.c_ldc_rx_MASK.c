
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ldc_packet {int type; } ;
struct TYPE_2__ {scalar_t__ mode; } ;
struct ldc_channel {unsigned long chan_state; int rx_head; int rx_tail; scalar_t__ hs_state; int flags; int rx_num_entries; int lock; struct ldc_packet* rx_base; TYPE_1__ cfg; int id; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct ldc_channel*) ;
 unsigned long VAR_1 ;



 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct ldc_channel*,unsigned long) ;
 int FUNC_2 (struct ldc_channel*) ;
 int FUNC_3 (struct ldc_channel*,int ) ;
 int FUNC_4 (int ,char*,unsigned long,unsigned long,int,int) ;
 int FUNC_5 (struct ldc_channel*,struct ldc_packet*) ;
 int FUNC_6 (struct ldc_channel*,struct ldc_packet*) ;
 int FUNC_7 (struct ldc_channel*,unsigned int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int ,int*,int*,unsigned long*) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_11, void *VAR_12)
{
 struct ldc_channel *VAR_13 = VAR_12;
 unsigned long VAR_14, VAR_15;
 unsigned int VAR_16;

 FUNC_8(&VAR_13->lock, VAR_15);

 VAR_14 = VAR_13->chan_state;




 FUNC_10(VAR_13->id,
          &VAR_13->rx_head,
          &VAR_13->rx_tail,
          &VAR_13->chan_state);

 FUNC_4(VAR_10, "RX state[0x%02lx:0x%02lx] head[0x%04lx] tail[0x%04lx]\n",
        VAR_14, VAR_13->chan_state, VAR_13->rx_head, VAR_13->rx_tail);

 VAR_16 = 0;

 if (VAR_13->cfg.mode == VAR_7 &&
     VAR_13->chan_state == VAR_1) {
  VAR_13->hs_state = VAR_6;
  FUNC_3(VAR_13, VAR_9);





  if (VAR_14 != VAR_1) {
   VAR_16 |= VAR_4;
   VAR_14 = VAR_13->chan_state;
  }
 }




 if (VAR_13->flags & VAR_5) {
  (void) FUNC_2(VAR_13);
  goto out;
 }





 if (VAR_13->hs_state == VAR_6) {
handshake_complete:
  if (VAR_13->chan_state != VAR_14) {
   unsigned int VAR_17 = VAR_3;

   if (VAR_13->chan_state == VAR_1)
    VAR_17 = VAR_4;

   VAR_16 |= VAR_17;
  }
  if (VAR_13->rx_head != VAR_13->rx_tail)
   VAR_16 |= VAR_2;

  goto out;
 }

 if (VAR_13->chan_state != VAR_14)
  goto out;

 while (VAR_13->rx_head != VAR_13->rx_tail) {
  struct ldc_packet *VAR_18;
  unsigned long VAR_19;
  int VAR_20;

  VAR_18 = VAR_13->rx_base + (VAR_13->rx_head / VAR_8);

  switch (VAR_18->type) {
  case 130:
   VAR_20 = FUNC_5(VAR_13, VAR_18);
   if (VAR_20 > 0)
    VAR_16 |= VAR_20;
   break;

  case 129:
   VAR_16 |= VAR_2;
   VAR_20 = 0;
   break;

  case 128:
   VAR_20 = FUNC_6(VAR_13, VAR_18);
   break;

  default:
   VAR_20 = FUNC_0(VAR_13);
   break;
  }

  if (VAR_20 < 0)
   break;

  VAR_19 = VAR_13->rx_head;
  VAR_19 += VAR_8;
  if (VAR_19 == (VAR_13->rx_num_entries * VAR_8))
   VAR_19 = 0;
  VAR_13->rx_head = VAR_19;

  VAR_20 = FUNC_1(VAR_13, VAR_19);
  if (VAR_20 < 0) {
   (void) FUNC_0(VAR_13);
   break;
  }
  if (VAR_13->hs_state == VAR_6)
   goto handshake_complete;
 }

out:
 FUNC_9(&VAR_13->lock, VAR_15);

 FUNC_7(VAR_13, VAR_16);

 return VAR_0;
}

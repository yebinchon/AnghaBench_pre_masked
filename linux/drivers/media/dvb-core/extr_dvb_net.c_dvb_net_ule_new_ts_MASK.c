
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dvb_net_ule_handle {int* ts; int* from_where; int ts_remain; int error; TYPE_3__* priv; TYPE_2__* dev; } ;
struct TYPE_6__ {int tscc; int need_pusi; int ule_sndu_remain; scalar_t__ ule_skb; int ts_count; } ;
struct TYPE_4__ {int rx_length_errors; int rx_errors; int rx_frame_errors; } ;
struct TYPE_5__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int ,int,...) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_3(struct dvb_net_ule_handle *VAR_1)
{

 if ((VAR_1->ts[3] & 0x0F) == VAR_1->priv->tscc)
  VAR_1->priv->tscc = (VAR_1->priv->tscc + 1) & 0x0F;
 else {

  FUNC_1("%lu: TS discontinuity: got %#x, expected %#x.\n",
   VAR_1->priv->ts_count, VAR_1->ts[3] & 0x0F,
   VAR_1->priv->tscc);

  if (VAR_1->priv->ule_skb) {
   FUNC_0(VAR_1->priv->ule_skb);


   VAR_1->dev->stats.rx_errors++;
   VAR_1->dev->stats.rx_frame_errors++;
  }
  FUNC_2(VAR_1->priv);

  VAR_1->priv->need_pusi = 1;
  return 1;
 }






 if (VAR_1->ts[1] & VAR_0) {
  if (!VAR_1->priv->need_pusi) {
   if (!(*VAR_1->from_where < (VAR_1->ts_remain-1)) ||
       *VAR_1->from_where != VAR_1->priv->ule_sndu_remain) {




    FUNC_1("%lu: Invalid pointer field: %u.\n",
     VAR_1->priv->ts_count,
     *VAR_1->from_where);





    if (VAR_1->priv->ule_skb) {
     VAR_1->error = 1;
     FUNC_0(VAR_1->priv->ule_skb);
    }

    if (VAR_1->error || VAR_1->priv->ule_sndu_remain) {
     VAR_1->dev->stats.rx_errors++;
     VAR_1->dev->stats.rx_frame_errors++;
     VAR_1->error = 0;
    }

    FUNC_2(VAR_1->priv);
    VAR_1->priv->need_pusi = 1;
    return 1;
   }




   VAR_1->from_where += 1;
   VAR_1->ts_remain -= 1;
  } else
   VAR_1->priv->need_pusi = 0;

  if (VAR_1->priv->ule_sndu_remain > 183) {




   VAR_1->dev->stats.rx_errors++;
   VAR_1->dev->stats.rx_length_errors++;
   FUNC_1("%lu: Expected %d more SNDU bytes, but got PUSI (pf %d, h->ts_remain %d).  Flushing incomplete payload.\n",
    VAR_1->priv->ts_count,
    VAR_1->priv->ule_sndu_remain,
    VAR_1->ts[4], VAR_1->ts_remain);
   FUNC_0(VAR_1->priv->ule_skb);

   FUNC_2(VAR_1->priv);




   VAR_1->from_where += VAR_1->ts[4];
   VAR_1->ts_remain -= VAR_1->ts[4];
  }
 }
 return 0;
}

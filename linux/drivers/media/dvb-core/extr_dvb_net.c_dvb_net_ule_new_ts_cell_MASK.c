
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dvb_net_ule_handle {int* ts; int ts_remain; int* from_where; TYPE_3__* priv; TYPE_2__* dev; } ;
struct TYPE_6__ {int need_pusi; int ts_count; scalar_t__ ule_skb; } ;
struct TYPE_4__ {int rx_frame_errors; int rx_errors; } ;
struct TYPE_5__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int*,int) ;
 int FUNC_3 (char*,int ,int,int,int) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;

__attribute__((used)) static int FUNC_5(struct dvb_net_ule_handle *VAR_7)
{
 if ((VAR_7->ts[0] != VAR_1) || (VAR_7->ts[1] & VAR_3) ||
     ((VAR_7->ts[3] & VAR_0) != 0)) {
  FUNC_3("%lu: Invalid TS cell: SYNC %#x, TEI %u, SC %#x.\n",
   VAR_7->priv->ts_count, VAR_7->ts[0],
   (VAR_7->ts[1] & VAR_3) >> 7,
   (VAR_7->ts[3] & VAR_0) >> 6);


  if (VAR_7->priv->ule_skb) {
   FUNC_0(VAR_7->priv->ule_skb);

   VAR_7->dev->stats.rx_errors++;
   VAR_7->dev->stats.rx_frame_errors++;
  }
  FUNC_4(VAR_7->priv);
  VAR_7->priv->need_pusi = 1;


  VAR_7->ts += VAR_2;
  VAR_7->priv->ts_count++;
  return 1;
 }

 VAR_7->ts_remain = 184;
 VAR_7->from_where = VAR_7->ts + 4;

 return 0;
}

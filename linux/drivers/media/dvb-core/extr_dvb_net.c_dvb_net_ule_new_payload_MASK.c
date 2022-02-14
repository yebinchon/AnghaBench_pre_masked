
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct dvb_net_ule_handle {int ts_remain; int* from_where; int new_ts; TYPE_3__* priv; TYPE_2__* dev; int ts; } ;
struct TYPE_9__ {TYPE_2__* dev; } ;
struct TYPE_8__ {int ule_sndu_len; int need_pusi; int ule_dbit; int ule_sndu_remain; int ule_sndu_type; int ule_sndu_type_1; TYPE_4__* ule_skb; int ts_count; } ;
struct TYPE_6__ {int rx_dropped; int rx_length_errors; int rx_errors; } ;
struct TYPE_7__ {TYPE_1__ stats; int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (TYPE_4__*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct dvb_net_ule_handle *VAR_3)
{
 if (VAR_3->ts_remain < 2) {
  FUNC_2("Invalid payload packing: only %d bytes left in TS.  Resyncing.\n",
   VAR_3->ts_remain);
  VAR_3->priv->ule_sndu_len = 0;
  VAR_3->priv->need_pusi = 1;
  VAR_3->ts += VAR_2;
  return 1;
 }

 if (!VAR_3->priv->ule_sndu_len) {

  VAR_3->priv->ule_sndu_len = VAR_3->from_where[0] << 8 |
     VAR_3->from_where[1];
  if (VAR_3->priv->ule_sndu_len & 0x8000) {

   VAR_3->priv->ule_sndu_len &= 0x7FFF;
   VAR_3->priv->ule_dbit = 1;
  } else
   VAR_3->priv->ule_dbit = 0;

  if (VAR_3->priv->ule_sndu_len < 5) {
   FUNC_2("%lu: Invalid ULE SNDU length %u. Resyncing.\n",
    VAR_3->priv->ts_count,
    VAR_3->priv->ule_sndu_len);
   VAR_3->dev->stats.rx_errors++;
   VAR_3->dev->stats.rx_length_errors++;
   VAR_3->priv->ule_sndu_len = 0;
   VAR_3->priv->need_pusi = 1;
   VAR_3->new_ts = 1;
   VAR_3->ts += VAR_2;
   VAR_3->priv->ts_count++;
   return 1;
  }
  VAR_3->ts_remain -= 2;
  VAR_3->from_where += 2;
 }

 VAR_3->priv->ule_sndu_remain = VAR_3->priv->ule_sndu_len + 2;







 switch (VAR_3->ts_remain) {
 case 1:
  VAR_3->priv->ule_sndu_remain--;
  VAR_3->priv->ule_sndu_type = VAR_3->from_where[0] << 8;


  VAR_3->priv->ule_sndu_type_1 = 1;
  VAR_3->ts_remain -= 1;
  VAR_3->from_where += 1;

 case 0:
  VAR_3->new_ts = 1;
  VAR_3->ts += VAR_2;
  VAR_3->priv->ts_count++;
  return 1;

 default:

  if (VAR_3->priv->ule_sndu_type_1) {
   VAR_3->priv->ule_sndu_type_1 = 0;
   VAR_3->priv->ule_sndu_type |= VAR_3->from_where[0];
   VAR_3->from_where += 1;
   VAR_3->ts_remain -= 1;
  } else {

   VAR_3->priv->ule_sndu_type = VAR_3->from_where[0] << 8 |
       VAR_3->from_where[1];
   VAR_3->from_where += 2;
   VAR_3->ts_remain -= 2;
  }
  break;
 }
 VAR_3->priv->ule_skb = FUNC_0(VAR_3->priv->ule_sndu_len +
      VAR_1 + VAR_0);
 if (!VAR_3->priv->ule_skb) {
  FUNC_1("%s: Memory squeeze, dropping packet.\n",
     VAR_3->dev->name);
  VAR_3->dev->stats.rx_dropped++;
  return -1;
 }


 VAR_3->priv->ule_sndu_remain = VAR_3->priv->ule_sndu_len;
 VAR_3->priv->ule_skb->dev = VAR_3->dev;




 FUNC_3(VAR_3->priv->ule_skb, VAR_1 + VAR_0);

 return 0;
}

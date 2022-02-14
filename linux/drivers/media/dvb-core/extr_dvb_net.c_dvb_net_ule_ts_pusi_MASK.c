
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_net_ule_handle {int* ts; int ts_remain; int* from_where; TYPE_1__* priv; scalar_t__ skipped; } ;
struct TYPE_2__ {int tscc; int ts_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_net_ule_handle *VAR_2)
{
 if (VAR_2->ts[1] & VAR_0) {


  VAR_2->priv->tscc = VAR_2->ts[3] & 0x0F;

  if (VAR_2->ts[4] > VAR_2->ts_remain) {
   FUNC_0("%lu: Invalid ULE packet (pointer field %d)\n",
    VAR_2->priv->ts_count, VAR_2->ts[4]);
   VAR_2->ts += VAR_1;
   VAR_2->priv->ts_count++;
   return 1;
  }

  VAR_2->from_where = &VAR_2->ts[5] + VAR_2->ts[4];
  VAR_2->ts_remain -= 1 + VAR_2->ts[4];
  VAR_2->skipped = 0;
 } else {
  VAR_2->skipped++;
  VAR_2->ts += VAR_1;
  VAR_2->priv->ts_count++;
  return 1;
 }

 return 0;
}

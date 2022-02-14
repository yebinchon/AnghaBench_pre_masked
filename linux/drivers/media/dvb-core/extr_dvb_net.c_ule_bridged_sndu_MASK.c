
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ethhdr {int h_proto; } ;
struct dvb_net_priv {int ule_next_hdr; int ule_sndu_len; int ule_bridged; TYPE_1__* ule_skb; } ;
struct TYPE_2__ {int data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1( struct dvb_net_priv *VAR_1 )
{
 struct ethhdr *VAR_2 = (struct ethhdr*) VAR_1->ule_next_hdr;
 if(FUNC_0(VAR_2->h_proto) < VAR_0) {
  int VAR_3 = VAR_1->ule_sndu_len - ((VAR_1->ule_next_hdr+sizeof(struct ethhdr)) - VAR_1->ule_skb->data);

  if(VAR_3 != FUNC_0(VAR_2->h_proto)) {
   return -1;
  }
 }






 VAR_1->ule_bridged = 1;
 return 0;
}

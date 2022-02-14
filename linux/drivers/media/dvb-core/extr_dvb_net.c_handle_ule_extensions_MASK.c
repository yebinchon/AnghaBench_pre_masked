
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_net_priv {scalar_t__ ule_sndu_type; int ule_next_hdr; TYPE_1__* ule_skb; } ;
struct TYPE_2__ {int data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct dvb_net_priv*) ;
 int FUNC_1 (char*,int ,int,int,int) ;

__attribute__((used)) static int FUNC_2( struct dvb_net_priv *VAR_1 )
{
 int VAR_2 = 0, VAR_3;

 VAR_1->ule_next_hdr = VAR_1->ule_skb->data;
 do {
  VAR_3 = FUNC_0( VAR_1 );
  if (VAR_3 < 0)
   return VAR_3;
  VAR_2 += VAR_3;
  FUNC_1("ule_next_hdr=%p, ule_sndu_type=%i, l=%i, total_ext_len=%i\n",
    VAR_1->ule_next_hdr, (int)VAR_1->ule_sndu_type,
    VAR_3, VAR_2);

 } while (VAR_1->ule_sndu_type < VAR_0);

 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_6__ {int * aal_desc_base; TYPE_2__* aal_desc; int * oam_desc_base; int * oam_buf_base; int * tx_desc_base; int * tx_skb_base; TYPE_1__* conn; } ;
struct TYPE_5__ {int dataptr; scalar_t__ eop; scalar_t__ sop; } ;
struct TYPE_4__ {struct sk_buff** tx_skb; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 struct sk_buff* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(void)
{
 int VAR_4, VAR_5;
 struct sk_buff *VAR_6;

 for ( VAR_4 = 0; VAR_4 < VAR_0; VAR_4++ ) {
  if ( VAR_3.conn[VAR_4].tx_skb != ((void*)0) ) {
   for ( VAR_5 = 0; VAR_5 < VAR_2; VAR_5++ )
    if ( VAR_3.conn[VAR_4].tx_skb[VAR_5] != ((void*)0) )
     FUNC_0(VAR_3.conn[VAR_4].tx_skb[VAR_5]);
  }
 }

 if ( VAR_3.tx_skb_base != ((void*)0) )
  FUNC_2(VAR_3.tx_skb_base);

 if ( VAR_3.tx_desc_base != ((void*)0) )
  FUNC_2(VAR_3.tx_desc_base);

 if ( VAR_3.oam_buf_base != ((void*)0) )
  FUNC_2(VAR_3.oam_buf_base);

 if ( VAR_3.oam_desc_base != ((void*)0) )
  FUNC_2(VAR_3.oam_desc_base);

 if ( VAR_3.aal_desc_base != ((void*)0) ) {
  for ( VAR_4 = 0; VAR_4 < VAR_1; VAR_4++ ) {
   if ( VAR_3.aal_desc[VAR_4].sop || VAR_3.aal_desc[VAR_4].eop ) {
    VAR_6 = FUNC_1(VAR_3.aal_desc[VAR_4].dataptr);
    FUNC_0(VAR_6);
   }
  }
  FUNC_2(VAR_3.aal_desc_base);
 }
}

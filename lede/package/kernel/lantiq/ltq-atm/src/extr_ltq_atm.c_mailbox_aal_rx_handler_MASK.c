
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sk_buff {int truesize; scalar_t__ data; } ;
struct rx_inband_trailer {scalar_t__ stw_ovz; scalar_t__ stw_crc; } ;
struct rx_descriptor {int own; int id; unsigned int dataptr; unsigned int byteoff; unsigned int datalen; scalar_t__ c; scalar_t__ err; } ;
struct TYPE_8__ {scalar_t__ aal; } ;
struct atm_vcc {TYPE_3__* stats; TYPE_2__ qos; int (* push ) (struct atm_vcc*,struct sk_buff*) ;} ;
struct TYPE_12__ {struct atm_vcc* vcc; } ;
struct TYPE_11__ {unsigned int vlddes; } ;
struct TYPE_10__ {size_t aal_desc_pos; struct rx_descriptor* aal_desc; int wrx_drop_pdu; int wrx_pdu; TYPE_1__* conn; } ;
struct TYPE_9__ {int rx_drop; int rx; int rx_err; } ;
struct TYPE_7__ {int aal5_vcc_oversize_sdu; int aal5_vcc_crc_err; struct atm_vcc* vcc; } ;


 int FUNC_0 (int,char*,unsigned int,int,int,size_t) ;
 scalar_t__ VAR_0 ;
 TYPE_6__* FUNC_1 (struct sk_buff*) ;
 unsigned long VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 TYPE_5__* FUNC_2 (int ) ;
 int FUNC_3 () ;
 struct sk_buff* FUNC_4 () ;
 scalar_t__ FUNC_5 (struct atm_vcc*,int ) ;
 int FUNC_6 (struct atm_vcc*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (unsigned long,unsigned long) ;
 size_t VAR_5 ;
 TYPE_4__ VAR_6 ;
 struct sk_buff* FUNC_9 (unsigned int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct sk_buff*,unsigned long) ;
 int FUNC_12 (struct sk_buff*,unsigned long) ;
 int FUNC_13 (struct atm_vcc*,struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_14(void)
{
 unsigned int VAR_7 = FUNC_2(VAR_3)->vlddes;
 struct rx_descriptor VAR_8;
 int VAR_9;
 struct atm_vcc *VAR_10;
 struct sk_buff *VAR_11, *VAR_12;
 struct rx_inband_trailer *VAR_13;
 unsigned int VAR_14;

 for ( VAR_14 = 0; VAR_14 < VAR_7; VAR_14++ ) {
  unsigned int VAR_15 = 0;

  do {
   VAR_8 = VAR_6.aal_desc[VAR_6.aal_desc_pos];
   if ( ++VAR_15 == 1000 )
    break;
  } while ( VAR_8.own || !VAR_8.c );
  FUNC_0(VAR_15 == 1, "loop_count = %u, own = %d, c = %d, aal_desc_pos = %u", VAR_15, (int)VAR_8.own, (int)VAR_8.c, VAR_6.aal_desc_pos);

  VAR_9 = VAR_8.id;

  if ( VAR_6.conn[VAR_9].vcc != ((void*)0) ) {
   VAR_10 = VAR_6.conn[VAR_9].vcc;

   VAR_11 = FUNC_9(VAR_8.dataptr);

   if ( VAR_8.err ) {
    if ( VAR_10->qos.aal == VAR_0 ) {
     VAR_13 = (struct rx_inband_trailer *)((unsigned int)VAR_11->data + ((VAR_8.byteoff + VAR_8.datalen + VAR_2) & ~VAR_2));
     if ( VAR_13->stw_crc )
      VAR_6.conn[VAR_9].aal5_vcc_crc_err++;
     if ( VAR_13->stw_ovz )
      VAR_6.conn[VAR_9].aal5_vcc_oversize_sdu++;
     VAR_6.wrx_drop_pdu++;
    }
    if ( VAR_10->stats ) {
     FUNC_7(&VAR_10->stats->rx_drop);
     FUNC_7(&VAR_10->stats->rx_err);
    }
    VAR_8.err = 0;
   } else if ( FUNC_5(VAR_10, VAR_11->truesize) ) {
    VAR_12 = FUNC_4();
    if ( VAR_12 != ((void*)0) ) {





     FUNC_12(VAR_11, VAR_8.byteoff);
     FUNC_11(VAR_11, VAR_8.datalen);
     FUNC_1(VAR_11)->vcc = VAR_10;

     VAR_10->push(VAR_10, VAR_11);

     if ( VAR_10->qos.aal == VAR_0 )
      VAR_6.wrx_pdu++;
     if ( VAR_10->stats )
      FUNC_7(&VAR_10->stats->rx);
     FUNC_3();

     VAR_8.dataptr = (unsigned int)VAR_12->data >> 2;
    } else {
     FUNC_6(VAR_10, VAR_11->truesize);
     if ( VAR_10->qos.aal == VAR_0 )
      VAR_6.wrx_drop_pdu++;
     if ( VAR_10->stats )
      FUNC_7(&VAR_10->stats->rx_drop);
    }
   } else {
    if ( VAR_10->qos.aal == VAR_0 )
     VAR_6.wrx_drop_pdu++;
    if ( VAR_10->stats )
     FUNC_7(&VAR_10->stats->rx_drop);
   }
  } else {
   VAR_6.wrx_drop_pdu++;
  }

  VAR_8.byteoff = 0;
  VAR_8.datalen = VAR_4;
  VAR_8.own = 1;
  VAR_8.c = 0;

  VAR_6.aal_desc[VAR_6.aal_desc_pos] = VAR_8;
  if ( ++VAR_6.aal_desc_pos == VAR_5 )
   VAR_6.aal_desc_pos = 0;

  FUNC_10(VAR_3, 0);
 }
}

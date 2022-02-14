
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ ackid; } ;
struct TYPE_4__ {TYPE_1__ r; } ;
struct ldc_packet {scalar_t__ seqid; TYPE_2__ u; } ;
struct ldc_channel {unsigned long tx_acked; unsigned long tx_tail; struct ldc_packet* tx_base; } ;


 int FUNC_0 (struct ldc_channel*) ;
 unsigned long VAR_0 ;
 unsigned long FUNC_1 (struct ldc_channel*,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct ldc_channel *VAR_1,
       struct ldc_packet *VAR_2)
{
 unsigned long VAR_3 = VAR_1->tx_acked;
 u32 VAR_4 = VAR_2->u.r.ackid;

 while (1) {
  struct ldc_packet *VAR_5 = VAR_1->tx_base + (VAR_3 / VAR_0);

  VAR_3 = FUNC_1(VAR_1, VAR_3);

  if (VAR_5->seqid == VAR_4) {
   VAR_1->tx_acked = VAR_3;
   return 0;
  }
  if (VAR_3 == VAR_1->tx_tail)
   return FUNC_0(VAR_1);
 }

 return 0;
}

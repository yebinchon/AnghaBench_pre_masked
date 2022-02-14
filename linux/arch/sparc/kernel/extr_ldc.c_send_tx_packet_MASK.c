
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ldc_packet {int dummy; } ;
struct ldc_channel {int tx_tail; struct ldc_packet* tx_base; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct ldc_channel*,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct ldc_channel *VAR_1,
     struct ldc_packet *VAR_2,
     unsigned long VAR_3)
{
 FUNC_0(VAR_2 != (VAR_1->tx_base + (VAR_1->tx_tail / VAR_0)));

 return FUNC_1(VAR_1, VAR_3);
}

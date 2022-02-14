
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ldc_packet {int dummy; } ;
struct ldc_channel {int tx_tail; struct ldc_packet* tx_base; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (struct ldc_channel*) ;
 unsigned long FUNC_1 (struct ldc_channel*,int) ;

__attribute__((used)) static struct ldc_packet *FUNC_2(struct ldc_channel *VAR_1,
          unsigned long *VAR_2)
{
 struct ldc_packet *VAR_3;
 unsigned long VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_1);
 VAR_5 = FUNC_1(VAR_1, VAR_1->tx_tail);
 if (VAR_5 == VAR_4)
  return ((void*)0);

 *VAR_2 = VAR_5;

 VAR_3 = VAR_1->tx_base;
 return VAR_3 + (VAR_1->tx_tail / VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ldc_channel {unsigned long tx_tail; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct ldc_channel *VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5 = VAR_3->tx_tail;
 int VAR_6 = 1000;

 VAR_3->tx_tail = VAR_4;
 while (VAR_6-- > 0) {
  unsigned long VAR_7;

  VAR_7 = FUNC_0(VAR_3->id, VAR_4);
  if (!VAR_7)
   return 0;

  if (VAR_7 != VAR_2) {
   VAR_3->tx_tail = VAR_5;
   return -VAR_1;
  }
  FUNC_1(1);
 }

 VAR_3->tx_tail = VAR_5;
 return -VAR_0;
}

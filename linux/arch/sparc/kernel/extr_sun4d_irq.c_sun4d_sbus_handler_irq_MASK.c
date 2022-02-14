
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_bucket {int irq; struct irq_bucket* next; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int ,int) ;
 int FUNC_2 (int,unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 struct irq_bucket** VAR_0 ;
 int FUNC_5 (int ,unsigned int) ;
 unsigned int FUNC_6 (unsigned int,int,unsigned int) ;

__attribute__((used)) static void FUNC_7(int VAR_1)
{
 unsigned int VAR_2;
 unsigned int VAR_3, VAR_4;
 unsigned int VAR_5;

 VAR_2 = FUNC_3(VAR_1) & 0x3ffff;
 FUNC_2(VAR_1, VAR_2);

 VAR_5 = (VAR_1 << 2);

 for (VAR_3 = 0; VAR_2; VAR_3++, VAR_2 >>= 1) {
  unsigned int VAR_6, VAR_7;

  if (!(VAR_2 & 1))
   continue;





  VAR_7 = FUNC_1(FUNC_0(VAR_3), 0xf << VAR_5);
  VAR_7 &= (0xf << VAR_5);


  VAR_4 = (1 << VAR_5);
  for (VAR_6 = 0; VAR_7 != 0; VAR_6++, VAR_4 <<= 1) {
   unsigned int VAR_8;
   struct irq_bucket *VAR_9;

   if (!(VAR_7 & VAR_4))
    continue;

   VAR_7 &= ~VAR_4;
   VAR_8 = FUNC_6(VAR_3, VAR_1, VAR_6);

   VAR_9 = VAR_0[VAR_8];
   while (VAR_9) {
    struct irq_bucket *VAR_10;

    VAR_10 = VAR_9->next;
    FUNC_4(VAR_9->irq);
    VAR_9 = VAR_10;
   }
   FUNC_5(FUNC_0(VAR_3), VAR_4);
  }
 }
}

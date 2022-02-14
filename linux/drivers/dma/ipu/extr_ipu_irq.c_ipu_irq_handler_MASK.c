
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct irq_desc {int dummy; } ;
struct ipu_irq_map {unsigned int irq; } ;
struct ipu_irq_bank {int control; int status; } ;
struct ipu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned int) ;
 unsigned long FUNC_2 (struct ipu*,int ) ;
 struct ipu_irq_bank* VAR_2 ;
 struct ipu* FUNC_3 (struct irq_desc*) ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct ipu_irq_map* FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct irq_desc *VAR_3)
{
 struct ipu *VAR_4 = FUNC_3(VAR_3);
 u32 VAR_5;
 int VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  struct ipu_irq_bank *VAR_8 = VAR_2 + VAR_6;

  FUNC_5(&VAR_1);
  VAR_5 = FUNC_2(VAR_4, VAR_8->status);





  VAR_5 &= FUNC_2(VAR_4, VAR_8->control);
  FUNC_6(&VAR_1);
  while ((VAR_7 = FUNC_0(VAR_5))) {
   struct ipu_irq_map *VAR_9;
   unsigned int VAR_10;

   VAR_7--;
   VAR_5 &= ~(1UL << VAR_7);

   FUNC_5(&VAR_1);
   VAR_9 = FUNC_7(32 * VAR_6 + VAR_7);
   if (!VAR_9) {
    FUNC_6(&VAR_1);
    FUNC_4("IPU: Interrupt on unmapped source %u bank %d\n",
           VAR_7, VAR_6);
    continue;
   }
   VAR_10 = VAR_9->irq;
   FUNC_6(&VAR_1);
   FUNC_1(VAR_10);
  }
 }
}

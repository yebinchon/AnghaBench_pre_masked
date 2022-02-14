
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct irq_data {unsigned int irq; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (int,unsigned long) ;
 int VAR_9 ;
 int FUNC_2 (struct irq_data*) ;

__attribute__((used)) static unsigned int FUNC_3(struct irq_data *VAR_10)
{
 unsigned int VAR_11 = VAR_10->irq - VAR_8;
 unsigned long VAR_12;




 VAR_12 = VAR_5;

 VAR_12 += VAR_7 + (VAR_11 & 0x3f);
 if (FUNC_0(VAR_12) == 0)
  FUNC_1(VAR_9--, VAR_12);

 VAR_11 = VAR_10->irq;
 if ((VAR_11 >= VAR_1) && (VAR_11 <= VAR_2)) {
  u8 VAR_13;

  VAR_11 -= VAR_0;


  VAR_13 = FUNC_0(VAR_3);
  FUNC_1(VAR_13 & ~(0x1 << VAR_11), VAR_3);


  VAR_13 = FUNC_0(VAR_4);
  FUNC_1(VAR_13 | (0x1 << VAR_11), VAR_4);
 }

 FUNC_2(VAR_10);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct irq_data {unsigned int irq; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct irq_data*) ;
 unsigned int FUNC_3 (unsigned int) ;

__attribute__((used)) static unsigned int FUNC_4(struct irq_data *VAR_8)
{
 unsigned int VAR_9 = VAR_8->irq;

 if ((VAR_9 >= VAR_0) && (VAR_9 <= VAR_1)) {
  unsigned int VAR_10 = FUNC_3(VAR_9);
  u8 VAR_11;
  VAR_11 = FUNC_0(VAR_3);
  FUNC_1(VAR_11 | (0x1 << VAR_10), VAR_3);
 }

 VAR_9 -= VAR_7;
 if (VAR_6 && (VAR_9 > 128))
  FUNC_1(5, VAR_6 + VAR_9 - 128);
 else if (VAR_5 && (VAR_9 > 64))
  FUNC_1(5, VAR_5 + VAR_9 - 64);
 else
  FUNC_1(5, VAR_4 + VAR_9);

 FUNC_2(VAR_8);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct irq_desc {int dummy; } ;
typedef scalar_t__ irq_hw_number_t ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct irq_desc*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int VAR_5 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;
 scalar_t__ FUNC_6 (int,unsigned int,int ) ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct irq_desc *VAR_6)
{
 unsigned int VAR_7 = FUNC_2(VAR_6) - 2;
 u32 VAR_8;
 irq_hw_number_t VAR_9;
 int VAR_10 = FUNC_7();

 VAR_8 = FUNC_6(VAR_10, VAR_7, VAR_3);
 if (VAR_8 == 0)
  return;





 VAR_8 = FUNC_0(VAR_8);
 VAR_9 = VAR_8 + VAR_4 + (VAR_0 * VAR_7);
 FUNC_1(FUNC_3(VAR_5, VAR_9));


 if ((VAR_8 == VAR_2) && (VAR_7 == 0) && VAR_1)
  FUNC_5(FUNC_4(VAR_1) | 0x10,
   VAR_1);
}

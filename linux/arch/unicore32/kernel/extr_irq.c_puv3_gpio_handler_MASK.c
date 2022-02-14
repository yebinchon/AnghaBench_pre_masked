
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_3(struct irq_desc *VAR_2)
{
 unsigned int VAR_3, VAR_4;

 VAR_3 = FUNC_1(VAR_0);
 do {




  FUNC_2(VAR_3, VAR_0);

  VAR_4 = VAR_1;
  do {
   if (VAR_3 & 1)
    FUNC_0(VAR_4);
   VAR_3 >>= 1;
   VAR_4++;
  } while (VAR_3);
  VAR_3 = FUNC_1(VAR_0);
 } while (VAR_3);
}

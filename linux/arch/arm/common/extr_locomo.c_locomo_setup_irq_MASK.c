
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct locomo {int irq_base; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ,struct locomo*) ;
 int FUNC_2 (int,int *,int ) ;
 int FUNC_3 (int,struct locomo*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_5(struct locomo *VAR_6)
{
 int VAR_7 = VAR_6->irq_base;




 FUNC_4(VAR_6->irq, VAR_2);
 FUNC_1(VAR_6->irq, VAR_5, VAR_6);


 for ( ; VAR_7 <= VAR_6->irq_base + 3; VAR_7++) {
  FUNC_2(VAR_7, &VAR_4, VAR_3);
  FUNC_3(VAR_7, VAR_6);
  FUNC_0(VAR_7, VAR_1 | VAR_0);
 }
}

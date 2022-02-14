
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em_gio_priv {int irq_domain; } ;
typedef int irqreturn_t ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (struct em_gio_priv*,int ) ;
 int FUNC_3 (struct em_gio_priv*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_4, void *VAR_5)
{
 struct em_gio_priv *VAR_6 = VAR_5;
 unsigned long VAR_7;
 unsigned int VAR_8, VAR_9 = 0;

 while ((VAR_7 = FUNC_2(VAR_6, VAR_1))) {
  VAR_8 = FUNC_1(VAR_7);
  FUNC_3(VAR_6, VAR_0, FUNC_0(VAR_8));
  FUNC_4(FUNC_5(VAR_6->irq_domain, VAR_8));
  VAR_9++;
 }

 return VAR_9 ? VAR_2 : VAR_3;
}

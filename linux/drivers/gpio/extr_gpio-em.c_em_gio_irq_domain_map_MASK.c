
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {struct em_gio_priv* host_data; } ;
struct em_gio_priv {int irq_chip; } ;
typedef scalar_t__ irq_hw_number_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int *,int ) ;
 int FUNC_1 (unsigned int,struct em_gio_priv*) ;
 int FUNC_2 (char*,int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct irq_domain *VAR_1, unsigned int VAR_2,
     irq_hw_number_t VAR_3)
{
 struct em_gio_priv *VAR_4 = VAR_1->host_data;

 FUNC_2("gio: map hw irq = %d, irq = %d\n", (int)VAR_3, VAR_2);

 FUNC_1(VAR_2, VAR_1->host_data);
 FUNC_0(VAR_2, &VAR_4->irq_chip, VAR_0);
 return 0;
}

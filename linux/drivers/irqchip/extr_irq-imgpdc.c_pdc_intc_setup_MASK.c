
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdc_intc_priv {int irq_route; int nr_syswakes; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct pdc_intc_priv*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct pdc_intc_priv *VAR_7)
{
 int VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;





 FUNC_0(VAR_7, VAR_0, 0);





 VAR_7->irq_route = ((VAR_2 << VAR_7->nr_syswakes) -
    VAR_2);
 FUNC_0(VAR_7, VAR_1, VAR_7->irq_route);


 for (VAR_8 = 0; VAR_8 < VAR_7->nr_syswakes; ++VAR_8) {

  VAR_9 = VAR_3 + VAR_8*VAR_6;
  VAR_10 = VAR_5
    << VAR_4;
  FUNC_0(VAR_7, VAR_9, VAR_10);
 }
}

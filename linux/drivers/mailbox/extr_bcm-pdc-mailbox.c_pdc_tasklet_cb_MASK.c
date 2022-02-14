
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdc_state {scalar_t__ pdc_reg_vbase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct pdc_state*) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_2)
{
 struct pdc_state *VAR_3 = (struct pdc_state *)VAR_2;

 FUNC_1(VAR_3);


 FUNC_0(VAR_0, VAR_3->pdc_reg_vbase + VAR_1);
}

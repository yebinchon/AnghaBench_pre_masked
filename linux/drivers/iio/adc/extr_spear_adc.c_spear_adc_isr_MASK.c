
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spear_adc_state {int completion; int value; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct spear_adc_state*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct spear_adc_state *VAR_3 = VAR_2;


 VAR_3->value = FUNC_1(VAR_3);
 FUNC_0(&VAR_3->completion);

 return VAR_0;
}

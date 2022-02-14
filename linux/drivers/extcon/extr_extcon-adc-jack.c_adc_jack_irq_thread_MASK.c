
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adc_jack_data {int handling_delay; int handler; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_2, void *VAR_3)
{
 struct adc_jack_data *VAR_4 = VAR_3;

 FUNC_0(VAR_1,
      &VAR_4->handler, VAR_4->handling_delay);
 return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at91_adc_state {scalar_t__ oversampling_ratio; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct at91_adc_state *VAR_3, int *VAR_4)
{
 if (VAR_3->oversampling_ratio == VAR_0) {




  *VAR_4 <<= 2;
 } else if (VAR_3->oversampling_ratio == VAR_1) {




  *VAR_4 <<= 1;
 }

 return VAR_2;
}

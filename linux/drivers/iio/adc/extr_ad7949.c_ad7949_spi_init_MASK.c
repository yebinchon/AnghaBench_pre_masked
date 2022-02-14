
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad7949_adc_chip {int current_channel; } ;


 int VAR_0 ;
 int FUNC_0 (struct ad7949_adc_chip*,int*,int ) ;
 int FUNC_1 (struct ad7949_adc_chip*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct ad7949_adc_chip *VAR_1)
{
 int VAR_2;
 int VAR_3;


 VAR_1->current_channel = 0;
 VAR_2 = FUNC_1(VAR_1, 0x3C79, VAR_0);





 FUNC_0(VAR_1, &VAR_3, VAR_1->current_channel);
 FUNC_0(VAR_1, &VAR_3, VAR_1->current_channel);

 return VAR_2;
}

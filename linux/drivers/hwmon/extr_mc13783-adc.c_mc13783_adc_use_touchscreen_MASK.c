
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mc13783_adc_priv {int mc13xxx; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 struct mc13783_adc_priv* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 struct mc13783_adc_priv *VAR_2 = FUNC_1(VAR_1);
 unsigned VAR_3 = FUNC_0(VAR_2->mc13xxx);

 return VAR_3 & VAR_0;
}

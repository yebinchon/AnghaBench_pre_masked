
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cc10001_adc_device {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cc10001_adc_device*,int ) ;
 int FUNC_1 (struct cc10001_adc_device*,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct cc10001_adc_device *VAR_4,
         unsigned int VAR_5)
{
 u32 VAR_6;


 VAR_6 = (VAR_5 & VAR_0) | VAR_2;
 FUNC_1(VAR_4, VAR_1, VAR_6);

 FUNC_2(1);
 VAR_6 = FUNC_0(VAR_4, VAR_1);
 VAR_6 = VAR_6 | VAR_3;
 FUNC_1(VAR_4, VAR_1, VAR_6);
}

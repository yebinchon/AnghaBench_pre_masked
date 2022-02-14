
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct at91_adc_state {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct at91_adc_state*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 TYPE_1__* FUNC_3 (struct at91_adc_state*) ;

__attribute__((used)) static u16 FUNC_4(struct at91_adc_state *VAR_2, int VAR_3)
{
 u32 VAR_4;
 u32 VAR_5, VAR_6, VAR_7;







 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (!VAR_4)
  FUNC_1(&FUNC_3(VAR_2)->dev, "pos is 0\n");

 VAR_7 = VAR_4 & VAR_1;
 VAR_6 = (VAR_7 << VAR_0) - VAR_7;
 VAR_5 = (VAR_4 >> 16) & VAR_1;
 if (VAR_5 == 0) {
  FUNC_2(&FUNC_3(VAR_2)->dev, "scale is 0\n");
  return 0;
 }
 VAR_6 /= VAR_5;

 return VAR_6;
}

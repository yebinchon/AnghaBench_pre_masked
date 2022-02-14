
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct ad7780_state {void* filter_gpio; void* gain_gpio; TYPE_1__* chip_info; void* powerdown_gpio; } ;
struct TYPE_2__ {int is_ad778x; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,char*,int) ;
 void* FUNC_3 (struct device*,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2, struct ad7780_state *VAR_3)
{
 int VAR_4;

 VAR_3->powerdown_gpio = FUNC_3(VAR_2,
           "powerdown",
           VAR_1);
 if (FUNC_0(VAR_3->powerdown_gpio)) {
  VAR_4 = FUNC_1(VAR_3->powerdown_gpio);
  FUNC_2(VAR_2, "Failed to request powerdown GPIO: %d\n", VAR_4);
  return VAR_4;
 }

 if (!VAR_3->chip_info->is_ad778x)
  return 0;


 VAR_3->gain_gpio = FUNC_3(VAR_2,
      "adi,gain",
      VAR_0);
 if (FUNC_0(VAR_3->gain_gpio)) {
  VAR_4 = FUNC_1(VAR_3->gain_gpio);
  FUNC_2(VAR_2, "Failed to request gain GPIO: %d\n", VAR_4);
  return VAR_4;
 }

 VAR_3->filter_gpio = FUNC_3(VAR_2,
        "adi,filter",
        VAR_0);
 if (FUNC_0(VAR_3->filter_gpio)) {
  VAR_4 = FUNC_1(VAR_3->filter_gpio);
  FUNC_2(VAR_2, "Failed to request filter GPIO: %d\n", VAR_4);
  return VAR_4;
 }

 return 0;
}

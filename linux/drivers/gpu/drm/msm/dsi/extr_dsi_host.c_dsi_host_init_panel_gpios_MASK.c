
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dsi_host {void* te_gpio; void* disp_en_gpio; } ;
struct device {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (struct device*,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct msm_dsi_host *VAR_2,
   struct device *VAR_3)
{
 VAR_2->disp_en_gpio = FUNC_3(VAR_3,
        "disp-enable",
        VAR_1);
 if (FUNC_1(VAR_2->disp_en_gpio)) {
  FUNC_0("cannot get disp-enable-gpios %ld",
    FUNC_2(VAR_2->disp_en_gpio));
  return FUNC_2(VAR_2->disp_en_gpio);
 }

 VAR_2->te_gpio = FUNC_3(VAR_3, "disp-te",
        VAR_0);
 if (FUNC_1(VAR_2->te_gpio)) {
  FUNC_0("cannot get disp-te-gpios %ld", FUNC_2(VAR_2->te_gpio));
  return FUNC_2(VAR_2->te_gpio);
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct arizona_pdata {unsigned int hpdet_channel; unsigned int micd_detect_debounce; unsigned int micd_bias_start_time; unsigned int micd_rate; unsigned int micd_dbtime; unsigned int micd_timeout; unsigned int gpsw; void* jd_gpio5_nopull; void* jd_gpio5; void* jd_invert; void* micd_software_compare; void* micd_force_micbias; } ;
struct arizona {int dev; struct arizona_pdata pdata; } ;




 int FUNC_0 (struct device*,struct arizona*) ;
 int FUNC_1 (int ,char*,int) ;
 void* FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0,
        struct arizona *VAR_1)
{
 struct arizona_pdata *VAR_2 = &VAR_1->pdata;
 unsigned int VAR_3 = 129;
 int VAR_4;

 FUNC_3(VAR_1->dev, "wlf,hpdet-channel", &VAR_3);
 switch (VAR_3) {
 case 129:
 case 128:
  VAR_2->hpdet_channel = VAR_3;
  break;
 default:
  FUNC_1(VAR_1->dev,
   "Wrong wlf,hpdet-channel DT value %d\n", VAR_3);
  VAR_2->hpdet_channel = 129;
 }

 FUNC_3(VAR_1->dev, "wlf,micd-detect-debounce",
     &VAR_2->micd_detect_debounce);

 FUNC_3(VAR_1->dev, "wlf,micd-bias-start-time",
     &VAR_2->micd_bias_start_time);

 FUNC_3(VAR_1->dev, "wlf,micd-rate",
     &VAR_2->micd_rate);

 FUNC_3(VAR_1->dev, "wlf,micd-dbtime",
     &VAR_2->micd_dbtime);

 FUNC_3(VAR_1->dev, "wlf,micd-timeout-ms",
     &VAR_2->micd_timeout);

 VAR_2->micd_force_micbias = FUNC_2(VAR_1->dev,
      "wlf,micd-force-micbias");

 VAR_2->micd_software_compare = FUNC_2(VAR_1->dev,
      "wlf,micd-software-compare");

 VAR_2->jd_invert = FUNC_2(VAR_1->dev,
           "wlf,jd-invert");

 FUNC_3(VAR_1->dev, "wlf,gpsw", &VAR_2->gpsw);

 VAR_2->jd_gpio5 = FUNC_2(VAR_1->dev,
          "wlf,use-jd2");
 VAR_2->jd_gpio5_nopull = FUNC_2(VAR_1->dev,
      "wlf,use-jd2-nopull");

 VAR_4 = FUNC_0(VAR_0, VAR_1);
 if (VAR_4 < 0)
  FUNC_1(VAR_1->dev, "Failed to read micd configs: %d\n", VAR_4);

 return 0;
}

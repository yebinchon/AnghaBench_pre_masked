
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct anx78xx_platform_data {void* gpiod_reset; void* gpiod_pd; void* gpiod_hpd; void* dvdd10; } ;
struct anx78xx {TYPE_1__* client; struct anx78xx_platform_data pdata; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (struct device*,char*,int ) ;
 void* FUNC_5 (struct device*,char*) ;

__attribute__((used)) static int FUNC_6(struct anx78xx *VAR_3)
{
 struct anx78xx_platform_data *VAR_4 = &VAR_3->pdata;
 struct device *VAR_5 = &VAR_3->client->dev;


 VAR_4->dvdd10 = FUNC_5(VAR_5, "dvdd10");
 if (FUNC_1(VAR_4->dvdd10)) {
  FUNC_0("DVDD10 regulator not found\n");
  return FUNC_2(VAR_4->dvdd10);
 }


 VAR_4->gpiod_hpd = FUNC_4(VAR_5, "hpd", VAR_0);
 if (FUNC_1(VAR_4->gpiod_hpd))
  return FUNC_2(VAR_4->gpiod_hpd);


 VAR_4->gpiod_pd = FUNC_4(VAR_5, "pd", VAR_1);
 if (FUNC_1(VAR_4->gpiod_pd))
  return FUNC_2(VAR_4->gpiod_pd);


 VAR_4->gpiod_reset = FUNC_4(VAR_5, "reset", VAR_2);

 return FUNC_3(VAR_4->gpiod_reset);
}

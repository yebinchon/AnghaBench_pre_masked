
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int brightness_get; int brightness_set_blocking; int brightness; int max_brightness; int name; } ;
struct stmfts_data {int ledvdd; TYPE_2__ led_cdev; TYPE_1__* client; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct stmfts_data *VAR_5)
{
 int VAR_6;


 VAR_5->ledvdd = FUNC_3(&VAR_5->client->dev, "ledvdd");
 if (FUNC_0(VAR_5->ledvdd))
  return FUNC_1(VAR_5->ledvdd);

 VAR_5->led_cdev.name = VAR_2;
 VAR_5->led_cdev.max_brightness = VAR_1;
 VAR_5->led_cdev.brightness = VAR_0;
 VAR_5->led_cdev.brightness_set_blocking = VAR_4;
 VAR_5->led_cdev.brightness_get = VAR_3;

 VAR_6 = FUNC_2(&VAR_5->client->dev, &VAR_5->led_cdev);
 if (VAR_6) {
  FUNC_4(VAR_5->ledvdd);
  return VAR_6;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ht16k33_priv {int client; } ;
struct TYPE_2__ {int brightness; scalar_t__ power; scalar_t__ fb_blank; int state; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct ht16k33_priv* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct ht16k33_priv*) ;
 int FUNC_2 (struct ht16k33_priv*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct backlight_device *VAR_3)
{
 int VAR_4 = VAR_3->props.brightness;
 struct ht16k33_priv *VAR_5 = FUNC_0(VAR_3);

 if (VAR_3->props.power != VAR_1 ||
     VAR_3->props.fb_blank != VAR_1 ||
     VAR_3->props.state & VAR_0 || VAR_4 == 0) {
  return FUNC_1(VAR_5);
 }

 FUNC_2(VAR_5);
 return FUNC_3(VAR_5->client,
        VAR_2 | (VAR_4 - 1));
}

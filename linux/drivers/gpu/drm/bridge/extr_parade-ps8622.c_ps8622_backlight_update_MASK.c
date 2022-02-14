
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ps8622_bridge {int client; int enabled; } ;
struct TYPE_2__ {int brightness; scalar_t__ power; int state; } ;
struct backlight_device {TYPE_1__ props; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct ps8622_bridge* FUNC_0 (int *) ;
 int FUNC_1 (int ,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_4)
{
 struct ps8622_bridge *VAR_5 = FUNC_0(&VAR_4->dev);
 int VAR_6, VAR_7 = VAR_4->props.brightness;

 if (VAR_4->props.power != VAR_3 ||
     VAR_4->props.state & (VAR_1 | VAR_0))
  VAR_7 = 0;

 if (!VAR_5->enabled)
  return -VAR_2;

 VAR_6 = FUNC_1(VAR_5->client, 0x01, 0xa7, VAR_7);

 return VAR_6;
}

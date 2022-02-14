
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct otm8009a {int prepared; } ;
struct TYPE_2__ {scalar_t__ power; int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct otm8009a* FUNC_2 (struct backlight_device*) ;
 int FUNC_3 (struct otm8009a*,int*,int ) ;

__attribute__((used)) static int FUNC_4(struct backlight_device *VAR_4)
{
 struct otm8009a *VAR_5 = FUNC_2(VAR_4);
 u8 VAR_6[2];

 if (!VAR_5->prepared) {
  FUNC_1("lcd not ready yet for setting its backlight!\n");
  return -VAR_0;
 }

 if (VAR_4->props.power <= VAR_1) {




  VAR_6[0] = VAR_2;
  VAR_6[1] = VAR_4->props.brightness;
  FUNC_3(VAR_5, VAR_6, FUNC_0(VAR_6));


  VAR_6[1] = 0x24;

 } else {

  VAR_6[1] = 0;
 }


 VAR_6[0] = VAR_3;
 FUNC_3(VAR_5, VAR_6, FUNC_0(VAR_6));

 return 0;
}

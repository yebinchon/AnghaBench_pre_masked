
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mute; } ;
struct hdmi_context {int mutex; scalar_t__ powered; TYPE_1__ audio; } ;
struct device {int dummy; } ;


 struct hdmi_context* FUNC_0 (struct device*) ;
 int FUNC_1 (struct hdmi_context*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, void *VAR_1, bool VAR_2)
{
 struct hdmi_context *VAR_3 = FUNC_0(VAR_0);

 FUNC_2(&VAR_3->mutex);

 VAR_3->audio.mute = VAR_2;

 if (VAR_3->powered)
  FUNC_1(VAR_3);

 FUNC_3(&VAR_3->mutex);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_hdmi {void (* audio_abort_cb ) (struct device*) ;int lock; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct omap_hdmi* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0,
         void (*VAR_1)(struct device *VAR_2))
{
 struct omap_hdmi *VAR_3 = FUNC_1(VAR_0);

 FUNC_2(&VAR_3->lock);

 FUNC_0(VAR_3->audio_abort_cb != ((void*)0));

 VAR_3->audio_abort_cb = VAR_1;

 FUNC_3(&VAR_3->lock);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_2__ {int format; } ;
struct cdn_dp_device {int lock; TYPE_1__ audio_info; int active; } ;


 int VAR_0 ;
 int FUNC_0 (struct cdn_dp_device*,TYPE_1__*) ;
 struct cdn_dp_device* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_1, void *VAR_2)
{
 struct cdn_dp_device *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;

 FUNC_2(&VAR_3->lock);
 if (!VAR_3->active)
  goto out;

 VAR_4 = FUNC_0(VAR_3, &VAR_3->audio_info);
 if (!VAR_4)
  VAR_3->audio_info.format = VAR_0;
out:
 FUNC_3(&VAR_3->lock);
}

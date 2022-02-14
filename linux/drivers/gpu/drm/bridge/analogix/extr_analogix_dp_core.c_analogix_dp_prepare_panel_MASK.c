
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct analogix_dp_device {int panel_is_modeset; int panel_lock; TYPE_1__* plat_data; } ;
struct TYPE_2__ {int panel; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct analogix_dp_device *VAR_0,
         bool VAR_1, bool VAR_2)
{
 int VAR_3 = 0;

 if (!VAR_0->plat_data->panel)
  return 0;

 FUNC_2(&VAR_0->panel_lock);





 if (VAR_0->panel_is_modeset && !VAR_2)
  goto out;

 if (VAR_1)
  VAR_3 = FUNC_0(VAR_0->plat_data->panel);
 else
  VAR_3 = FUNC_1(VAR_0->plat_data->panel);

 if (VAR_3)
  goto out;

 if (VAR_2)
  VAR_0->panel_is_modeset = VAR_1;

out:
 FUNC_3(&VAR_0->panel_lock);
 return VAR_3;
}

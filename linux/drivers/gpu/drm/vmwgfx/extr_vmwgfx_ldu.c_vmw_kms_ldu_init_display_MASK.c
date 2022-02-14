
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vmw_private {int capabilities; TYPE_1__* ldu_priv; int active_display_unit; struct drm_device* dev; } ;
struct drm_device {int dummy; } ;
struct TYPE_3__ {int * fb; scalar_t__ last_num_active; scalar_t__ num_active; int active; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct drm_device*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int,int ) ;
 int VAR_5 ;
 int FUNC_5 (struct vmw_private*) ;
 int FUNC_6 (struct vmw_private*,int) ;

int FUNC_7(struct vmw_private *VAR_6)
{
 struct drm_device *VAR_7 = VAR_6->dev;
 int VAR_8, VAR_9;

 if (VAR_6->ldu_priv) {
  FUNC_0("ldu system already on\n");
  return -VAR_0;
 }

 VAR_6->ldu_priv = FUNC_4(sizeof(*VAR_6->ldu_priv), VAR_2);
 if (!VAR_6->ldu_priv)
  return -VAR_1;

 FUNC_1(&VAR_6->ldu_priv->active);
 VAR_6->ldu_priv->num_active = 0;
 VAR_6->ldu_priv->last_num_active = 0;
 VAR_6->ldu_priv->fb = ((void*)0);


 if (VAR_6->capabilities & VAR_3)
  VAR_9 = FUNC_2(VAR_7, VAR_4);
 else
  VAR_9 = FUNC_2(VAR_7, 1);
 if (VAR_9 != 0)
  goto err_free;

 FUNC_5(VAR_6);

 if (VAR_6->capabilities & VAR_3)
  for (VAR_8 = 0; VAR_8 < VAR_4; ++VAR_8)
   FUNC_6(VAR_6, VAR_8);
 else
  FUNC_6(VAR_6, 0);

 VAR_6->active_display_unit = VAR_5;

 FUNC_0("Legacy Display Unit initialized\n");

 return 0;

err_free:
 FUNC_3(VAR_6->ldu_priv);
 VAR_6->ldu_priv = ((void*)0);
 return VAR_9;
}

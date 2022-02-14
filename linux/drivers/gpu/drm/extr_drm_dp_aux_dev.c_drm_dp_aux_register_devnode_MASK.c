
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_dp_aux_dev {int index; struct drm_dp_aux_dev* dev; } ;
struct drm_dp_aux {int name; int dev; } ;


 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ FUNC_1 (struct drm_dp_aux_dev*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct drm_dp_aux_dev*) ;
 struct drm_dp_aux_dev* FUNC_4 (struct drm_dp_aux*) ;
 struct drm_dp_aux_dev* FUNC_5 (int ,int ,int ,int *,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (struct drm_dp_aux*) ;

int FUNC_7(struct drm_dp_aux *VAR_2)
{
 struct drm_dp_aux_dev *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_4(VAR_2);
 if (FUNC_1(VAR_3))
  return FUNC_3(VAR_3);

 VAR_3->dev = FUNC_5(VAR_1, VAR_2->dev,
         FUNC_2(VAR_0, VAR_3->index), ((void*)0),
         "drm_dp_aux%d", VAR_3->index);
 if (FUNC_1(VAR_3->dev)) {
  VAR_4 = FUNC_3(VAR_3->dev);
  VAR_3->dev = ((void*)0);
  goto error;
 }

 FUNC_0("drm_dp_aux_dev: aux [%s] registered as minor %d\n",
    VAR_2->name, VAR_3->index);
 return 0;
error:
 FUNC_6(VAR_2);
 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_dp_aux_dev {int index; int refcount; int usecount; struct drm_dp_aux* aux; } ;
struct drm_dp_aux {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_dp_aux_dev* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,struct drm_dp_aux_dev*,int ,int ,int ) ;
 int FUNC_3 (struct drm_dp_aux_dev*) ;
 int FUNC_4 (int *) ;
 struct drm_dp_aux_dev* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static struct drm_dp_aux_dev *FUNC_8(struct drm_dp_aux *VAR_5)
{
 struct drm_dp_aux_dev *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_5(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return FUNC_0(-VAR_1);
 VAR_6->aux = VAR_5;
 FUNC_1(&VAR_6->usecount, 1);
 FUNC_4(&VAR_6->refcount);

 FUNC_6(&VAR_4);
 VAR_7 = FUNC_2(&VAR_3, VAR_6, 0, VAR_0, VAR_2);
 FUNC_7(&VAR_4);
 if (VAR_7 < 0) {
  FUNC_3(VAR_6);
  return FUNC_0(VAR_7);
 }
 VAR_6->index = VAR_7;

 return VAR_6;
}

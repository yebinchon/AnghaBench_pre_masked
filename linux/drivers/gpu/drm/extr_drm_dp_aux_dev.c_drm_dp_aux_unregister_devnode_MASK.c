
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_dp_aux_dev {unsigned int index; int refcount; scalar_t__ dev; int usecount; } ;
struct drm_dp_aux {int name; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct drm_dp_aux_dev* FUNC_5 (struct drm_dp_aux*) ;
 int FUNC_6 (int *,unsigned int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_4 ;
 int FUNC_10 (int *,int) ;

void FUNC_11(struct drm_dp_aux *VAR_5)
{
 struct drm_dp_aux_dev *VAR_6;
 unsigned int VAR_7;

 VAR_6 = FUNC_5(VAR_5);
 if (!VAR_6)
  return;

 FUNC_8(&VAR_1);
 FUNC_6(&VAR_0, VAR_6->index);
 FUNC_9(&VAR_1);

 FUNC_2(&VAR_6->usecount);
 FUNC_10(&VAR_6->usecount, !FUNC_3(&VAR_6->usecount));

 VAR_7 = VAR_6->index;
 if (VAR_6->dev)
  FUNC_4(VAR_3,
          FUNC_1(VAR_2, VAR_7));

 FUNC_0("drm_dp_aux_dev: aux [%s] unregistering\n", VAR_5->name);
 FUNC_7(&VAR_6->refcount, VAR_4);
}

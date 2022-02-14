
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_dp_aux_dev {int refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_dp_aux_dev* FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct drm_dp_aux_dev *FUNC_4(unsigned VAR_2)
{
 struct drm_dp_aux_dev *VAR_3 = ((void*)0);

 FUNC_2(&VAR_1);
 VAR_3 = FUNC_0(&VAR_0, VAR_2);
 if (!FUNC_1(&VAR_3->refcount))
  VAR_3 = ((void*)0);
 FUNC_3(&VAR_1);

 return VAR_3;
}

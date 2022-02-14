
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_file {int syncobj_idr; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,struct drm_file*) ;

void
FUNC_2(struct drm_file *VAR_1)
{
 FUNC_1(&VAR_1->syncobj_idr,
       &VAR_0, VAR_1);
 FUNC_0(&VAR_1->syncobj_idr);
}

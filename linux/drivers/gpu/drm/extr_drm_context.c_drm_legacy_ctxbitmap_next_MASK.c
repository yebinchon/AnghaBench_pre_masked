
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int struct_mutex; int ctx_idr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct drm_device * VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_2->struct_mutex);
 VAR_3 = FUNC_0(&VAR_2->ctx_idr, ((void*)0), VAR_0, 0,
   VAR_1);
 FUNC_2(&VAR_2->struct_mutex);
 return VAR_3;
}

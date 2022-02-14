
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dummy; } ;
struct drm_connector_list_iter {int * conn; struct drm_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int,int *,int ) ;

void FUNC_1(struct drm_device *VAR_2,
       struct drm_connector_list_iter *VAR_3)
{
 VAR_3->dev = VAR_2;
 VAR_3->conn = ((void*)0);
 FUNC_0(&VAR_1, 0, 1, ((void*)0), VAR_0);
}

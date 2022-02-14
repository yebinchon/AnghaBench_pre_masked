
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_mode_config {int connector_list_lock; } ;
struct drm_connector_list_iter {scalar_t__ conn; TYPE_1__* dev; } ;
struct TYPE_2__ {struct drm_mode_config mode_config; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct drm_connector_list_iter *VAR_2)
{
 struct drm_mode_config *VAR_3 = &VAR_2->dev->mode_config;
 unsigned long VAR_4;

 VAR_2->dev = ((void*)0);
 if (VAR_2->conn) {
  FUNC_2(&VAR_3->connector_list_lock, VAR_4);
  FUNC_0(VAR_2->conn);
  FUNC_3(&VAR_3->connector_list_lock, VAR_4);
 }
 FUNC_1(&VAR_1, 0, VAR_0);
}

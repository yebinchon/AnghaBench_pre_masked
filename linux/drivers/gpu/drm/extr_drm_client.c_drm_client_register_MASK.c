
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int clientlist_mutex; int clientlist; } ;
struct drm_client_dev {int list; struct drm_device* dev; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct drm_client_dev *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;

 FUNC_1(&VAR_1->clientlist_mutex);
 FUNC_0(&VAR_0->list, &VAR_1->clientlist);
 FUNC_2(&VAR_1->clientlist_mutex);
}

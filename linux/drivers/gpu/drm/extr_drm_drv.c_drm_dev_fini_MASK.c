
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int unique; int struct_mutex; int filelist_mutex; int clientlist_mutex; int master_mutex; int dev; int anon_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct drm_device*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*,int ) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;

void FUNC_11(struct drm_device *VAR_3)
{
 FUNC_7(VAR_3);

 if (FUNC_0(VAR_3, VAR_0))
  FUNC_2(VAR_3);

 FUNC_3(VAR_3);
 FUNC_5(VAR_3);
 FUNC_1(VAR_3->anon_inode);

 FUNC_6(VAR_3, VAR_1);
 FUNC_6(VAR_3, VAR_2);

 FUNC_10(VAR_3->dev);

 FUNC_9(&VAR_3->master_mutex);
 FUNC_9(&VAR_3->clientlist_mutex);
 FUNC_9(&VAR_3->filelist_mutex);
 FUNC_9(&VAR_3->struct_mutex);
 FUNC_4(VAR_3);
 FUNC_8(VAR_3->unique);
}

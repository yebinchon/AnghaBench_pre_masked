
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shmob_drm_plane {unsigned int index; int alpha; int plane; } ;
struct shmob_drm_device {int ddev; int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct shmob_drm_plane* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,int *,int,int *,int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_3(struct shmob_drm_device *VAR_4, unsigned int VAR_5)
{
 struct shmob_drm_plane *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_4->dev, sizeof(*VAR_6), VAR_1);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_6->index = VAR_5;
 VAR_6->alpha = 255;

 VAR_7 = FUNC_2(VAR_4->ddev, &VAR_6->plane, 1,
        &VAR_3, VAR_2,
        FUNC_0(VAR_2), 0);

 return VAR_7;
}

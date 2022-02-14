
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panfrost_perfcnt {int lock; } ;
struct panfrost_file_priv {int dummy; } ;
struct panfrost_device {struct panfrost_perfcnt* perfcnt; } ;
struct drm_panfrost_perfcnt_enable {int counterset; scalar_t__ enable; } ;
struct drm_file {struct panfrost_file_priv* driver_priv; } ;
struct drm_device {struct panfrost_device* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct panfrost_device*) ;
 int FUNC_3 (struct panfrost_device*,struct panfrost_file_priv*) ;
 int FUNC_4 (struct panfrost_device*,struct panfrost_file_priv*,int) ;
 int FUNC_5 () ;

int FUNC_6(struct drm_device *VAR_1, void *VAR_2,
      struct drm_file *VAR_3)
{
 struct panfrost_file_priv *VAR_4 = VAR_3->driver_priv;
 struct panfrost_device *VAR_5 = VAR_1->dev_private;
 struct panfrost_perfcnt *VAR_6 = VAR_5->perfcnt;
 struct drm_panfrost_perfcnt_enable *VAR_7 = VAR_2;
 int VAR_8;

 VAR_8 = FUNC_5();
 if (VAR_8)
  return VAR_8;


 if (VAR_7->counterset > (FUNC_2(VAR_5) ? 1 : 0))
  return -VAR_0;

 FUNC_0(&VAR_6->lock);
 if (VAR_7->enable)
  VAR_8 = FUNC_4(VAR_5, VAR_4,
           VAR_7->counterset);
 else
  VAR_8 = FUNC_3(VAR_5, VAR_4);
 FUNC_1(&VAR_6->lock);

 return VAR_8;
}

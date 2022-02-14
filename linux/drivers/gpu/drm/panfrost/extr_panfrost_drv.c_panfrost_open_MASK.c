
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int color_adjust; } ;
struct panfrost_file_priv {TYPE_1__ mm; int mm_lock; struct panfrost_device* pfdev; } ;
struct panfrost_device {int dummy; } ;
struct drm_file {struct panfrost_file_priv* driver_priv; } ;
struct drm_device {struct panfrost_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct panfrost_file_priv*) ;
 struct panfrost_file_priv* FUNC_3 (int,int ) ;
 int VAR_5 ;
 int FUNC_4 (struct panfrost_file_priv*) ;
 int FUNC_5 (struct panfrost_file_priv*) ;
 int FUNC_6 (struct panfrost_file_priv*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct drm_device *VAR_6, struct drm_file *VAR_7)
{
 int VAR_8;
 struct panfrost_device *VAR_9 = VAR_6->dev_private;
 struct panfrost_file_priv *VAR_10;

 VAR_10 = FUNC_3(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->pfdev = VAR_9;
 VAR_7->driver_priv = VAR_10;

 FUNC_7(&VAR_10->mm_lock);


 FUNC_0(&VAR_10->mm, VAR_3 >> VAR_2, (VAR_4 - VAR_3) >> VAR_2);
 VAR_10->mm.color_adjust = VAR_5;

 VAR_8 = FUNC_5(VAR_10);
 if (VAR_8)
  goto err_pgtable;

 VAR_8 = FUNC_4(VAR_10);
 if (VAR_8)
  goto err_job;

 return 0;

err_job:
 FUNC_6(VAR_10);
err_pgtable:
 FUNC_1(&VAR_10->mm);
 FUNC_2(VAR_10);
 return VAR_8;
}

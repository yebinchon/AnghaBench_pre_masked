
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_unique {scalar_t__ unique_len; int unique; } ;
struct drm_master {scalar_t__ unique_len; TYPE_1__* dev; int unique; } ;
struct drm_file {struct drm_master* master; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {int master_mutex; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct drm_device *VAR_1, void *VAR_2,
    struct drm_file *VAR_3)
{
 struct drm_unique *VAR_4 = VAR_2;
 struct drm_master *VAR_5 = VAR_3->master;

 FUNC_1(&VAR_5->dev->master_mutex);
 if (VAR_4->unique_len >= VAR_5->unique_len) {
  if (FUNC_0(VAR_4->unique, VAR_5->unique, VAR_5->unique_len)) {
   FUNC_2(&VAR_5->dev->master_mutex);
   return -VAR_0;
  }
 }
 VAR_4->unique_len = VAR_5->unique_len;
 FUNC_2(&VAR_5->dev->master_mutex);

 return 0;
}

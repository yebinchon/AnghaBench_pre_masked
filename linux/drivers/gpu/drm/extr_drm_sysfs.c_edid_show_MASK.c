
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct drm_connector {TYPE_3__* dev; TYPE_1__* edid_blob_ptr; } ;
struct device {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef size_t ssize_t ;
typedef size_t loff_t ;
struct TYPE_5__ {int mutex; } ;
struct TYPE_6__ {TYPE_2__ mode_config; } ;
struct TYPE_4__ {unsigned char* data; size_t length; } ;


 struct device* FUNC_0 (struct kobject*) ;
 int FUNC_1 (char*,unsigned char*,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct drm_connector* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct file *VAR_0, struct kobject *VAR_1,
    struct bin_attribute *VAR_2, char *VAR_3, loff_t VAR_4,
    size_t VAR_5)
{
 struct device *VAR_6 = FUNC_0(VAR_1);
 struct drm_connector *VAR_7 = FUNC_4(VAR_6);
 unsigned char *VAR_8;
 size_t VAR_9;
 ssize_t VAR_10 = 0;

 FUNC_2(&VAR_7->dev->mode_config.mutex);
 if (!VAR_7->edid_blob_ptr)
  goto unlock;

 VAR_8 = VAR_7->edid_blob_ptr->data;
 VAR_9 = VAR_7->edid_blob_ptr->length;
 if (!VAR_8)
  goto unlock;

 if (VAR_4 >= VAR_9)
  goto unlock;

 if (VAR_4 + VAR_5 > VAR_9)
  VAR_5 = VAR_9 - VAR_4;
 FUNC_1(VAR_3, VAR_8 + VAR_4, VAR_5);

 VAR_10 = VAR_5;
unlock:
 FUNC_3(&VAR_7->dev->mode_config.mutex);

 return VAR_10;
}

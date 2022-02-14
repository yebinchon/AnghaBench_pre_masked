
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_dp_aux_dev {int refcount; TYPE_1__* aux; } ;
struct device_attribute {int dummy; } ;
struct device {int devt; } ;
typedef int ssize_t ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct drm_dp_aux_dev* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
    struct device_attribute *VAR_3, char *VAR_4)
{
 ssize_t VAR_5;
 struct drm_dp_aux_dev *VAR_6 =
  FUNC_1(FUNC_0(VAR_2->devt));

 if (!VAR_6)
  return -VAR_0;

 VAR_5 = FUNC_3(VAR_4, "%s\n", VAR_6->aux->name);
 FUNC_2(&VAR_6->refcount, VAR_1);

 return VAR_5;
}

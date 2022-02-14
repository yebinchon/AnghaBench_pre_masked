
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct device {int kobj; int release; struct attribute_group const** groups; struct device* parent; struct class* class; int devt; } ;
struct class {int dummy; } ;
struct attribute_group {int dummy; } ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct device* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct class*) ;
 int FUNC_2 (struct device*,void*) ;
 int FUNC_3 (struct device*) ;
 int VAR_3 ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (int *,char const*,int ) ;
 struct device* FUNC_6 (int,int ) ;
 int FUNC_7 (struct device*) ;

struct device *
FUNC_8(struct class *VAR_4, struct device *VAR_5,
      dev_t VAR_6, void *VAR_7,
      const struct attribute_group **VAR_8,
      const char *VAR_9, va_list VAR_10)
{
 struct device *VAR_11 = ((void*)0);
 int VAR_12 = -VAR_0;

 if (VAR_4 == ((void*)0) || FUNC_1(VAR_4))
  goto error;

 VAR_11 = FUNC_6(sizeof(*VAR_11), VAR_2);
 if (!VAR_11) {
  VAR_12 = -VAR_1;
  goto error;
 }

 FUNC_4(VAR_11);
 VAR_11->devt = VAR_6;
 VAR_11->class = VAR_4;
 VAR_11->parent = VAR_5;
 VAR_11->groups = VAR_8;
 VAR_11->release = VAR_3;
 FUNC_2(VAR_11, VAR_7);

 VAR_12 = FUNC_5(&VAR_11->kobj, VAR_9, VAR_10);
 if (VAR_12)
  goto error;

 VAR_12 = FUNC_3(VAR_11);
 if (VAR_12)
  goto error;

 return VAR_11;

error:
 FUNC_7(VAR_11);
 return FUNC_0(VAR_12);
}

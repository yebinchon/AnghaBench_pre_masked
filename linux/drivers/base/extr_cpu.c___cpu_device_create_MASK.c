
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct device {int kobj; int release; struct attribute_group const** groups; struct device* parent; } ;
struct attribute_group {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct device* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct device*,void*) ;
 int FUNC_2 (struct device*) ;
 int VAR_3 ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (int *,char const*,int ) ;
 struct device* FUNC_6 (int,int ) ;
 int FUNC_7 (struct device*) ;

__attribute__((used)) static struct device *
FUNC_8(struct device *VAR_4, void *VAR_5,
      const struct attribute_group **VAR_6,
      const char *VAR_7, va_list VAR_8)
{
 struct device *VAR_9 = ((void*)0);
 int VAR_10 = -VAR_0;

 VAR_9 = FUNC_6(sizeof(*VAR_9), VAR_2);
 if (!VAR_9) {
  VAR_10 = -VAR_1;
  goto error;
 }

 FUNC_3(VAR_9);
 VAR_9->parent = VAR_4;
 VAR_9->groups = VAR_6;
 VAR_9->release = VAR_3;
 FUNC_4(VAR_9);
 FUNC_1(VAR_9, VAR_5);

 VAR_10 = FUNC_5(&VAR_9->kobj, VAR_7, VAR_8);
 if (VAR_10)
  goto error;

 VAR_10 = FUNC_2(VAR_9);
 if (VAR_10)
  goto error;

 return VAR_9;

error:
 FUNC_7(VAR_9);
 return FUNC_0(VAR_10);
}

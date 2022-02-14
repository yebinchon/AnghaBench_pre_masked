
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct file_operations {int dummy; } ;
struct device {int dummy; } ;
struct cdev {int kobj; int owner; } ;
typedef int dev_t ;


 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct device*) ;
 int VAR_0 ;
 int FUNC_4 (struct cdev*,int const,int) ;
 int FUNC_5 (struct cdev*) ;
 int FUNC_6 (struct cdev*,struct file_operations const*) ;
 int FUNC_7 (struct cdev*,struct kobject*) ;
 int VAR_1 ;
 struct device* FUNC_8 (int ,int *,int const,int *,char*,char const*) ;
 int VAR_2 ;
 int FUNC_9 (int *,char const*) ;
 int FUNC_10 (char*,int,char const*,int) ;
 int VAR_3 ;

int FUNC_11(int VAR_4, const char *VAR_5,
     const struct file_operations *VAR_6,
     struct cdev *VAR_7, struct device **VAR_8,
     bool VAR_9,
     struct kobject *VAR_10)
{
 const dev_t VAR_11 = FUNC_2(FUNC_1(VAR_2), VAR_4);
 struct device *VAR_12 = ((void*)0);
 int VAR_13;

 FUNC_6(VAR_7, VAR_6);
 VAR_7->owner = VAR_0;
 FUNC_7(VAR_7, VAR_10);
 FUNC_9(&VAR_7->kobj, VAR_5);

 VAR_13 = FUNC_4(VAR_7, VAR_11, 1);
 if (VAR_13 < 0) {
  FUNC_10("Could not add cdev for minor %d, %s (err %d)\n",
         VAR_4, VAR_5, -VAR_13);
  goto done;
 }

 if (VAR_9)
  VAR_12 = FUNC_8(VAR_3, ((void*)0), VAR_11, ((void*)0), "%s", VAR_5);
 else
  VAR_12 = FUNC_8(VAR_1, ((void*)0), VAR_11, ((void*)0), "%s", VAR_5);

 if (FUNC_0(VAR_12)) {
  VAR_13 = FUNC_3(VAR_12);
  VAR_12 = ((void*)0);
  FUNC_10("Could not create device for minor %d, %s (err %d)\n",
   VAR_4, VAR_5, -VAR_13);
  FUNC_5(VAR_7);
 }
done:
 *VAR_8 = VAR_12;
 return VAR_13;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_operations {int dummy; } ;
struct device {int dummy; } ;
struct cdev {int kobj; struct file_operations const* ops; int owner; } ;
typedef int dev_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct device*) ;
 int VAR_1 ;
 int FUNC_4 (struct cdev*,int const,int) ;
 struct cdev* FUNC_5 () ;
 int FUNC_6 (struct cdev*) ;
 struct device* FUNC_7 (int ,int *,int const,int *,char*,char const*) ;
 int FUNC_8 (int *,char const*) ;
 int FUNC_9 (char*,int,char const*,...) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_10(int VAR_4, const char *VAR_5,
    const struct file_operations *VAR_6,
    struct cdev **VAR_7, struct device **VAR_8)
{
 const dev_t VAR_9 = FUNC_2(FUNC_1(VAR_3), VAR_4);
 struct cdev *VAR_10;
 struct device *VAR_11 = ((void*)0);
 int VAR_12;

 VAR_10 = FUNC_5();
 if (!VAR_10) {
  FUNC_9("Could not allocate cdev for minor %d, %s\n",
         VAR_4, VAR_5);
  VAR_12 = -VAR_0;
  goto done;
 }

 VAR_10->owner = VAR_1;
 VAR_10->ops = VAR_6;
 FUNC_8(&VAR_10->kobj, VAR_5);

 VAR_12 = FUNC_4(VAR_10, VAR_9, 1);
 if (VAR_12 < 0) {
  FUNC_9("Could not add cdev for minor %d, %s (err %d)\n",
         VAR_4, VAR_5, -VAR_12);
  goto err_cdev;
 }

 VAR_11 = FUNC_7(VAR_2, ((void*)0), VAR_9, ((void*)0), "%s", VAR_5);
 if (!FUNC_0(VAR_11))
  goto done;
 VAR_12 = FUNC_3(VAR_11);
 VAR_11 = ((void*)0);
 FUNC_9("Could not create device for minor %d, %s (err %d)\n",
        VAR_4, VAR_5, -VAR_12);
err_cdev:
 FUNC_6(VAR_10);
 VAR_10 = ((void*)0);
done:
 *VAR_7 = VAR_10;
 *VAR_8 = VAR_11;
 return VAR_12;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memory_block {int online_type; int dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 struct memory_block* FUNC_4 (struct device*) ;
 int FUNC_5 () ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1, struct device_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 struct memory_block *VAR_5 = FUNC_4(VAR_1);
 int VAR_6, VAR_7;

 VAR_6 = FUNC_2();
 if (VAR_6)
  return VAR_6;

 if (FUNC_3(VAR_3, "online_kernel"))
  VAR_7 = 129;
 else if (FUNC_3(VAR_3, "online_movable"))
  VAR_7 = 128;
 else if (FUNC_3(VAR_3, "online"))
  VAR_7 = 130;
 else if (FUNC_3(VAR_3, "offline"))
  VAR_7 = 131;
 else {
  VAR_6 = -VAR_0;
  goto err;
 }

 switch (VAR_7) {
 case 129:
 case 128:
 case 130:

  VAR_5->online_type = VAR_7;
  VAR_6 = FUNC_1(&VAR_5->dev);
  break;
 case 131:
  VAR_6 = FUNC_0(&VAR_5->dev);
  break;
 default:
  VAR_6 = -VAR_0;
 }

err:
 FUNC_5();

 if (VAR_6 < 0)
  return VAR_6;
 if (VAR_6)
  return -VAR_0;

 return VAR_4;
}

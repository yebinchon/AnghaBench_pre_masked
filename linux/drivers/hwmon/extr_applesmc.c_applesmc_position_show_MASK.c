
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (char*,int ,char*,int,int,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_4,
       struct device_attribute *VAR_5, char *VAR_6)
{
 int VAR_7;
 s16 VAR_8, VAR_9, VAR_10;

 VAR_7 = FUNC_0(VAR_0, &VAR_8);
 if (VAR_7)
  goto out;
 VAR_7 = FUNC_0(VAR_1, &VAR_9);
 if (VAR_7)
  goto out;
 VAR_7 = FUNC_0(VAR_2, &VAR_10);
 if (VAR_7)
  goto out;

out:
 if (VAR_7)
  return VAR_7;
 else
  return FUNC_1(VAR_6, VAR_3, "(%d,%d,%d)\n", VAR_8, VAR_9, VAR_10);
}

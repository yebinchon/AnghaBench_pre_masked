
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (char const*,char*,int*,char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_3,
     struct device_attribute *VAR_4,
     const char *VAR_5,
     size_t VAR_6)
{
 int VAR_7, VAR_8;
 char VAR_9;

 if (FUNC_4(VAR_5, "%d %c", &VAR_7, &VAR_9) != 1)
  return -VAR_0;
 if (VAR_7 != 0 && VAR_7 != 1)
  return -VAR_0;
 VAR_8 = 0;
 FUNC_0();
 FUNC_1(&VAR_2);
 if (VAR_1 == VAR_7)
  goto out;
 VAR_8 = FUNC_6(VAR_7);
 if (VAR_8)
  goto out;
 VAR_1 = VAR_7;
 FUNC_5();
out:
 FUNC_2(&VAR_2);
 FUNC_3();
 return VAR_8 ? VAR_8 : VAR_6;
}

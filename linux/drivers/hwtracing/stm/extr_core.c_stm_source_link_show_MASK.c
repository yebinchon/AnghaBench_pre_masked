
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm_source_device {int link; } ;
struct stm_device {int dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (char*,char*,char*) ;
 struct stm_device* FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int VAR_0 ;
 struct stm_source_device* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
        struct device_attribute *VAR_2,
        char *VAR_3)
{
 struct stm_source_device *VAR_4 = FUNC_5(VAR_1);
 struct stm_device *VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_3(&VAR_0);
 VAR_5 = FUNC_2(VAR_4->link, &VAR_0);
 VAR_7 = FUNC_1(VAR_3, "%s\n",
        VAR_5 ? FUNC_0(&VAR_5->dev) : "<none>");
 FUNC_4(&VAR_0, VAR_6);

 return VAR_7;
}

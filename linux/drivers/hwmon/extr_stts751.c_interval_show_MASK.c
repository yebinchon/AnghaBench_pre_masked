
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stts751_priv {size_t interval; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct stts751_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int) ;
 int* VAR_1 ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
        struct device_attribute *VAR_3, char *VAR_4)
{
 struct stts751_priv *VAR_5 = FUNC_0(VAR_2);

 return FUNC_1(VAR_4, VAR_0, "%d\n",
   VAR_1[VAR_5->interval]);
}

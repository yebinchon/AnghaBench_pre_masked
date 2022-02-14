
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm73_data {int ctrl; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct lm73_data* FUNC_0 (struct device*) ;
 int * VAR_3 ;
 int FUNC_1 (char*,int ,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_4, struct device_attribute *VAR_5,
        char *VAR_6)
{
 struct lm73_data *VAR_7 = FUNC_0(VAR_4);
 int VAR_8;

 VAR_8 = (VAR_7->ctrl & VAR_0) >> VAR_1;
 return FUNC_1(VAR_6, VAR_2, "%hu\n", VAR_3[VAR_8]);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {char** index; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char*,int ,char*,char const*) ;
 size_t FUNC_1 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
   struct device_attribute *VAR_3, char *VAR_4)
{
 const char *VAR_5 = VAR_1.index[FUNC_1(VAR_3)];

 return FUNC_0(VAR_4, VAR_0, "%s\n", VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct env {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 struct env* FUNC_0 (struct device*) ;
 int FUNC_1 (struct env*,int ) ;
 int FUNC_2 (char*,char*,int) ;
 TYPE_1__* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2,
         char *VAR_3)
{
 int VAR_4 = FUNC_3(VAR_2)->index;
 struct env *VAR_5 = FUNC_0(VAR_1);
 u8 VAR_6 = FUNC_1(VAR_5, VAR_0);
 return FUNC_2(VAR_3, "%d\n", (VAR_6 & (1 << VAR_4)) ? 1 : 0);
}

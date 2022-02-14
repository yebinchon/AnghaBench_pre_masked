
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time64_t ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ timer; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
    struct device_attribute *VAR_3,
    char *VAR_4)
{
 time64_t VAR_5 = 0;

 FUNC_1(&VAR_1);
 if (VAR_0->timer) {
  FUNC_0(VAR_0->timer, &VAR_5);
  VAR_5++;
 }
 FUNC_2(&VAR_1);

 return FUNC_3(VAR_4, "%lld\n", VAR_5);
}

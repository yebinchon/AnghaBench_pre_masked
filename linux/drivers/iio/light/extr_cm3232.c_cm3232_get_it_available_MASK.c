
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_3__ {int val2; int val; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_1 (char*,scalar_t__,char*,...) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
   struct device_attribute *VAR_3, char *VAR_4)
{
 int VAR_5, VAR_6;

 for (VAR_5 = 0, VAR_6 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++)
  VAR_6 += FUNC_1(VAR_4 + VAR_6, VAR_0 - VAR_6, "%u.%06u ",
   VAR_1[VAR_5].val,
   VAR_1[VAR_5].val2);
 return VAR_6 + FUNC_1(VAR_4 + VAR_6, VAR_0 - VAR_6, "\n");
}

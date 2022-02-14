
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {char* name; scalar_t__ enabled; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct kobject *VAR_1,
        struct kobj_attribute *VAR_2, char *VAR_3)
{
 char *VAR_4 = VAR_3;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++) {
  if (VAR_0[VAR_5].enabled)
   VAR_4 += FUNC_1(VAR_4, "[%s] ", VAR_0[VAR_5].name);
  else
   VAR_4 += FUNC_1(VAR_4, "%s ", VAR_0[VAR_5].name);
 }

 *(VAR_4-1) = '\n';

 return VAR_4 - VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct yealink_dev {char* lcdMap; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_5__ {char* name; } ;
struct TYPE_6__ {TYPE_1__ p; } ;
struct TYPE_7__ {char type; TYPE_2__ u; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 struct yealink_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 TYPE_3__* VAR_1 ;
 scalar_t__ FUNC_3 (char*,char*,char*,char*) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3, struct device_attribute *VAR_4,
   char *VAR_5)
{
 struct yealink_dev *VAR_6;
 int VAR_7, VAR_8 = 1;

 FUNC_2(&VAR_2);
 VAR_6 = FUNC_1(VAR_3);
 if (VAR_6 == ((void*)0)) {
  FUNC_4(&VAR_2);
  return -VAR_0;
 }

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); VAR_7++) {
  if (VAR_1[VAR_7].type != '.')
   continue;
  VAR_8 += FUNC_3(&VAR_5[VAR_8], "%s %s\n",
    VAR_6->lcdMap[VAR_7] == ' ' ? "  " : "on",
    VAR_1[VAR_7].u.p.name);
 }
 FUNC_4(&VAR_2);
 return VAR_8;
}

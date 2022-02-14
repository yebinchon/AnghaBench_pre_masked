
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; int name; } ;
struct device_attribute {TYPE_1__ attr; int show; int store; } ;
struct device {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;

int FUNC_2(struct device *VAR_2,
         const struct device_attribute *VAR_3)
{
 int VAR_4 = 0;

 if (VAR_2) {
  FUNC_0(((VAR_3->attr.mode & VAR_1) && !VAR_3->store),
   "Attribute %s: write permission without 'store'\n",
   VAR_3->attr.name);
  FUNC_0(((VAR_3->attr.mode & VAR_0) && !VAR_3->show),
   "Attribute %s: read permission without 'show'\n",
   VAR_3->attr.name);
  VAR_4 = FUNC_1(&VAR_2->kobj, &VAR_3->attr);
 }

 return VAR_4;
}

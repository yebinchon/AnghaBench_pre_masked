
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct attribute** attrs; } ;
struct pmbus_data {int num_attributes; int max_attributes; TYPE_1__ group; } ;
struct attribute {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (struct attribute**,int,int ) ;

__attribute__((used)) static int FUNC_1(struct pmbus_data *VAR_3, struct attribute *VAR_4)
{
 if (VAR_3->num_attributes >= VAR_3->max_attributes - 1) {
  int VAR_5 = VAR_3->max_attributes + VAR_2;
  void *VAR_6 = FUNC_0(VAR_3->group.attrs,
        VAR_5 * sizeof(void *),
        VAR_1);
  if (!VAR_6)
   return -VAR_0;
  VAR_3->group.attrs = VAR_6;
  VAR_3->max_attributes = VAR_5;
 }

 VAR_3->group.attrs[VAR_3->num_attributes++] = VAR_4;
 VAR_3->group.attrs[VAR_3->num_attributes] = ((void*)0);
 return 0;
}

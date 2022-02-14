
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
typedef int dev_t ;
struct TYPE_2__ {int disk; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct kobject* FUNC_0 (int ) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static struct kobject *FUNC_1(dev_t VAR_3, int *VAR_4, void *VAR_5)
{
 int VAR_6 = *VAR_4 & 3;
 int VAR_7 = *VAR_4 >> 2;
 if (VAR_6 >= VAR_0 || VAR_7 > VAR_1)
  return ((void*)0);
 *VAR_4 = 0;
 return FUNC_0(VAR_2[VAR_6].disk);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct swim_priv {int floppy_count; TYPE_1__* unit; } ;
struct kobject {int dummy; } ;
typedef int dev_t ;
struct TYPE_2__ {int disk; } ;


 struct kobject* FUNC_0 (int ) ;

__attribute__((used)) static struct kobject *FUNC_1(dev_t VAR_0, int *VAR_1, void *VAR_2)
{
 struct swim_priv *VAR_3 = VAR_2;
 int VAR_4 = (*VAR_1 & 3);

 if (VAR_4 >= VAR_3->floppy_count)
  return ((void*)0);

 *VAR_1 = 0;
 return FUNC_0(VAR_3->unit[VAR_4].disk);
}

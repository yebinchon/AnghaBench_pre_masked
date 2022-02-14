
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kobject {int * kset; } ;
struct device {TYPE_2__* class; } ;
struct TYPE_4__ {TYPE_1__* p; } ;
struct TYPE_3__ {int glue_dirs; } ;



__attribute__((used)) static inline bool FUNC_0(struct kobject *VAR_0,
        struct device *VAR_1)
{
 if (!VAR_0 || !VAR_1->class ||
     VAR_0->kset != &VAR_1->class->p->glue_dirs)
  return 0;
 return 1;
}

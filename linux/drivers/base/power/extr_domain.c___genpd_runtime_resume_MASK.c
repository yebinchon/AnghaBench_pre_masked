
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct device {TYPE_8__* driver; TYPE_6__* bus; TYPE_4__* class; TYPE_2__* type; } ;
struct TYPE_16__ {TYPE_7__* pm; } ;
struct TYPE_15__ {int (* runtime_resume ) (struct device*) ;} ;
struct TYPE_14__ {TYPE_5__* pm; } ;
struct TYPE_13__ {int (* runtime_resume ) (struct device*) ;} ;
struct TYPE_12__ {TYPE_3__* pm; } ;
struct TYPE_11__ {int (* runtime_resume ) (struct device*) ;} ;
struct TYPE_10__ {TYPE_1__* pm; } ;
struct TYPE_9__ {int (* runtime_resume ) (struct device*) ;} ;



__attribute__((used)) static int FUNC_0(struct device *VAR_0)
{
 int (*VAR_1)(struct device *VAR_2);

 if (VAR_0->type && VAR_0->type->pm)
  VAR_1 = VAR_0->type->pm->runtime_resume;
 else if (VAR_0->class && VAR_0->class->pm)
  VAR_1 = VAR_0->class->pm->runtime_resume;
 else if (VAR_0->bus && VAR_0->bus->pm)
  VAR_1 = VAR_0->bus->pm->runtime_resume;
 else
  VAR_1 = ((void*)0);

 if (!VAR_1 && VAR_0->driver && VAR_0->driver->pm)
  VAR_1 = VAR_0->driver->pm->runtime_resume;

 return VAR_1 ? VAR_1(VAR_0) : 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct coresight_device {int enable; int refcnt; } ;
struct TYPE_2__ {int (* disable ) (struct coresight_device*,int *) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct coresight_device*) ;
 int FUNC_2 (struct coresight_device*,int *) ;

__attribute__((used)) static bool FUNC_3(struct coresight_device *VAR_0)
{
 if (FUNC_0(VAR_0->refcnt) == 0) {
  if (FUNC_1(VAR_0)->disable)
   FUNC_1(VAR_0)->disable(VAR_0, ((void*)0));
  VAR_0->enable = 0;
 }
 return !VAR_0->enable;
}

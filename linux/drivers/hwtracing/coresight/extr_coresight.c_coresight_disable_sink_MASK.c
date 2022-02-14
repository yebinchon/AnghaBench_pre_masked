
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct coresight_device {int enable; } ;
struct TYPE_2__ {int (* disable ) (struct coresight_device*) ;} ;


 TYPE_1__* FUNC_0 (struct coresight_device*) ;
 int FUNC_1 (struct coresight_device*) ;

__attribute__((used)) static void FUNC_2(struct coresight_device *VAR_0)
{
 int VAR_1;

 if (!FUNC_0(VAR_0)->disable)
  return;

 VAR_1 = FUNC_0(VAR_0)->disable(VAR_0);
 if (VAR_1)
  return;
 VAR_0->enable = 0;
}

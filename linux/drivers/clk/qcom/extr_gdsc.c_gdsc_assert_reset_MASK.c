
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gdsc {int reset_count; int * resets; TYPE_2__* rcdev; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* assert ) (TYPE_2__*,int ) ;} ;


 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static inline int FUNC_1(struct gdsc *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->reset_count; VAR_1++)
  VAR_0->rcdev->ops->assert(VAR_0->rcdev, VAR_0->resets[VAR_1]);
 return 0;
}
